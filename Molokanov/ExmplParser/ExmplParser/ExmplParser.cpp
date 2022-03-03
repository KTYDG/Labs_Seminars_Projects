#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <cstring>
#include <stdexcept>

struct Expression {
	Expression(std::string token): token(token) {}
	Expression(std::string token, Expression a): token(token), args{a} {}
	Expression(std::string token, Expression a, Expression b): token(token), args{a, b} {}

	std::string token;
	std::vector<Expression> args;
};

class Parser {
public:
	explicit Parser(const char* input): input(input) {}
	Expression parse();
private:
	std::string parse_token();
	Expression parse_simple_expression();
	Expression parse_binary_expression(int min_priority);

	const char* input;
};

std::string Parser::parse_token() {
	while(std::isspace(*input)) ++input;

	if(std::isdigit(*input)) {
		std::string number;
		while(std::isdigit(*input) || *input == '.') number.push_back(*input++);
		return number;
	}

	static const std::string tokens[] =
	{"+", "-", "**", "*", "/", "mod", "abs", "sin", "cos", "(", ")"};
	for(auto& t : tokens) {
		if(std::strncmp(input, t.c_str(), t.size()) == 0) {
			input += t.size();
			return t;
		}
	}

	return "";
}

Expression Parser::parse_simple_expression() {
	auto token = parse_token();
	if(token.empty()) throw std::runtime_error("Invalid input");

	if(token == "(") {
		auto result = parse();
		if(parse_token() != ")") throw std::runtime_error("Expected ')'");
		return result;
	}

	if(std::isdigit(token[0]))
		return Expression(token);

	return Expression(token, parse_simple_expression());
}

int get_priority(const std::string& binary_op) {
	if(binary_op == "+") return 1;
	if(binary_op == "-") return 1;
	if(binary_op == "*") return 2;
	if(binary_op == "/") return 2;
	if(binary_op == "mod") return 2;
	if(binary_op == "**") return 3;
	return 0;
}

Expression Parser::parse_binary_expression(int min_priority) {
	auto left_expr = parse_simple_expression();

	for(;;) {
		auto op = parse_token();
		auto priority = get_priority(op);
		if(priority <= min_priority) {
			input -= op.size();
			return left_expr;
		}

		auto right_expr = parse_binary_expression(priority);
		left_expr = Expression(op, left_expr, right_expr);
	}
}

Expression Parser::parse() {
	return parse_binary_expression(0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double eval(const Expression& e) {
	switch(e.args.size()) {
		case 2:
		{
			auto a = eval(e.args[0]);
			auto b = eval(e.args[1]);
			if(e.token == "+") return a + b;
			if(e.token == "-") return a - b;
			if(e.token == "*") return a * b;
			if(e.token == "/") return a / b;
			if(e.token == "**") return pow(a, b);
			if(e.token == "mod") return (int)a % (int)b;
			throw std::runtime_error("Unknown binary operator");
		}

		case 1:
		{
			auto a = eval(e.args[0]);
			if(e.token == "+") return +a;
			if(e.token == "-") return -a;
			if(e.token == "abs") return abs(a);
			if(e.token == "sin") return sin(a);
			if(e.token == "cos") return cos(a);
			throw std::runtime_error("Unknown unary operator");
		}

		case 0:
			return strtod(e.token.c_str(), nullptr);
	}

	throw std::runtime_error("Unknown expression type");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int errors;

void test(const char* input, double expected) {
	try {
		Parser p(input);
		auto result = eval(p.parse());
		if(result == expected) return;
		std::cout << input << " = " << expected << " : error, got " << result << '\n';
	}
	catch(std::exception& e) {
		std::cout << input << " : exception: " << e.what() << '\n';
	}
	++errors;
}

int main() {
	test("0", 0);
	test("1", 1);
	test("9", 9);
	test("10", 10);
	test("+1", 1);
	test("-1", -1);
	test("(1)", 1);
	test("(-1)", -1);
	test("abs(-1)", 1);
	test("1+20", 21);
	test("1 + 20", 21);
	test("1+20+300", 321);
	test("1+20+300+4000", 4321);
	test("-1+20", 19);
	test("--1+20", 21);
	test("---1+20", 19);
	test("(1+20)", 21);
	test("-2*3", -6);
	test("2*-3", -6);
	test("1++2", 3);
	test("1+10*2", 21);
	test("10*2+1", 21);
	test("(1+20)*2", 42);
	test("2*(1+20)", 42);
	test("(1+2)*(3+4)", 21);
	test("2*3+4*5", 26);
	test("100+2*10+3", 123);
	test("2**3", 8);
	test("2**3*5+2", 42);
	test("5*2**3+2", 42);
	test("2+5*2**3", 42);
	test("1+2**3*10", 81);
	test("2**3+2*10", 28);
	test("5 * 4 + 3 * 2 + 1", 27);
	std::cout << "Done with " << errors << " errors.\n";
}