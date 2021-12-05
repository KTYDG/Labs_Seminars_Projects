#include <cmath>
#include <iostream>
#include <vector>
#include <list>
#include <ppl.h>
#include <thread>
#include <mutex>
#include "Stopwatch.hpp"
using namespace std;
using namespace concurrency;

mutex mp;
int N = 40000/*строки*/, M = 40000/*столбцы*/;
long double mp2 = 1, mp1 = 1, Q = 13.0;
int i, j;

void POW(vector<vector<long double>>&b, int ii, int thrd) {
	long double mp1 = 1;
	for(int i = ii; i < (N / thrd) + ii; i++) {
		mp1 = 1;
		for(int j = 0; j < M; j++) {
			b[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
			mp1 *= b[i][j];
		}
		mp.lock();
		mp2 *= mp1;
		mp.unlock();
	}
}

int main() {
	namespace sw = stopwatch;
	
	
	cout << N << "x" << M << "\n";

	/// Матрица векторов
	vector<vector<long double>>b(N, vector<long double>(M));

	/// Матрица
	//long double** Matrix = new long double*[N];
	//for(int i = 0; i < N; i++) {
	//	Matrix[i] = new long double[M];
	//}
	/// Линейный лист
	list<long double> test;

	/// Создание матрицы векторов
	//for (i = 0; i < N; i++) {
	//	for (j = 0; j < M; j++) {
	//		b[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
	//	}
	//}
	/// Создание матрицы
	//for(i = 0; i < N; i++) {
	//	for(j = 0; j < M; j++) {
	//		Matrix[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
	//	}
	//}
	int thrd = 12;

	sw::Stopwatch my_watch3;
	my_watch3.start();
	thread t1(POW, ref(b), 0, thrd);
	thread t2(POW, ref(b), N * 1 / thrd, thrd);
	thread t3(POW, ref(b), N * 2 / thrd, thrd);
	thread t4(POW, ref(b), N * 3 / thrd, thrd);
	thread t5(POW, ref(b), N * 4 / thrd, thrd);
	thread t6(POW, ref(b), N * 5 / thrd, thrd);
	thread t7(POW, ref(b), N * 6 / thrd, thrd);
	thread t8(POW, ref(b), N * 7 / thrd, thrd);
	thread t9(POW, ref(b), N * 8 / thrd, thrd);
	thread t10(POW, ref(b), N * 9 / thrd, thrd);
	thread t11(POW, ref(b), N * 10 / thrd, thrd);
	thread t12(POW, ref(b), N * 11 / thrd, thrd);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();
	t8.join();
	t9.join();
	t10.join();
	t11.join();
	t12.join();
	std::uint64_t elapsed_mus3 = my_watch3.elapsed<sw::mus>();
	std::uint64_t elapsed_ms3 = my_watch3.elapsed();
	std::uint64_t elapsed_s3 = my_watch3.elapsed<sw::s>();
	cout << "thread12.    sec: " << elapsed_s3 << "; millisec: " << elapsed_ms3 << "; microsec: " << elapsed_mus3 << endl;
	cout << mp2 << "\n";

	mp2 = 1;
	thrd = 24;

	sw::Stopwatch my_watch4;
	my_watch4.start();
	thread t001(POW, ref(b), 0, thrd);
	thread t002(POW, ref(b), N * 1 / thrd, thrd);
	thread t003(POW, ref(b), N * 2 / thrd, thrd);
	thread t004(POW, ref(b), N * 3 / thrd, thrd);
	thread t005(POW, ref(b), N * 4 / thrd, thrd);
	thread t006(POW, ref(b), N * 5 / thrd, thrd);
	thread t007(POW, ref(b), N * 6 / thrd, thrd);
	thread t008(POW, ref(b), N * 7 / thrd, thrd);
	thread t009(POW, ref(b), N * 8 / thrd, thrd);
	thread t010(POW, ref(b), N * 9 / thrd, thrd);
	thread t011(POW, ref(b), N * 10 / thrd, thrd);
	thread t012(POW, ref(b), N * 11 / thrd, thrd);
	thread t013(POW, ref(b), N * 12 / thrd, thrd);
	thread t014(POW, ref(b), N * 13 / thrd, thrd);
	thread t015(POW, ref(b), N * 14 / thrd, thrd);
	thread t016(POW, ref(b), N * 15 / thrd, thrd);
	thread t017(POW, ref(b), N * 16 / thrd, thrd);
	thread t018(POW, ref(b), N * 17 / thrd, thrd);
	thread t019(POW, ref(b), N * 18 / thrd, thrd);
	thread t020(POW, ref(b), N * 19 / thrd, thrd);
	thread t021(POW, ref(b), N * 20 / thrd, thrd);
	thread t022(POW, ref(b), N * 21 / thrd, thrd);
	thread t023(POW, ref(b), N * 22 / thrd, thrd);
	thread t024(POW, ref(b), N * 23 / thrd, thrd);
	t001.join();
	t002.join();
	t003.join();
	t004.join();
	t005.join();
	t006.join();
	t007.join();
	t008.join();
	t009.join();
	t010.join();
	t011.join();
	t012.join();
	t013.join();
	t014.join();
	t015.join();
	t016.join();
	t017.join();
	t018.join();
	t019.join();
	t020.join();
	t021.join();
	t022.join();
	t023.join();
	t024.join();
	std::uint64_t elapsed_mus4 = my_watch4.elapsed<sw::mus>();
	std::uint64_t elapsed_ms4 = my_watch4.elapsed();
	std::uint64_t elapsed_s4 = my_watch4.elapsed<sw::s>();
	cout << "thread24.    sec: " << elapsed_s4 << "; millisec: " << elapsed_ms4 << "; microsec: " << elapsed_mus4 << endl;
	cout << mp2 << "\n";

	mp2 = 1;

	//thread t1(POW, ref(b), 0);
	//thread t2(POW, ref(b), N * 1 / 8);
	//thread t3(POW, ref(b), N * 2 / 8);
	//thread t4(POW, ref(b), N * 3 / 8);
	//thread t5(POW, ref(b), N * 4 / 8);
	//thread t6(POW, ref(b), N * 5 / 8);
	//thread t7(POW, ref(b), N * 6 / 8);
	//thread t8(POW, ref(b), N * 7 / 8);
	//t1.join();
	//t2.join();
	//t3.join();
	//t4.join();
	//t5.join();
	//t6.join();
	//t7.join();
	//t8.join();


	sw::Stopwatch my_watch1;
	my_watch1.start();
	/// Рабочий(да) мусор
	parallel_for((size_t)0, (size_t)N,
		[&](size_t i) {
			mp1 = 1;
			for(size_t j = 0; j < M; j++) {
				b[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
				mp1 *= b[i][j];
			}
			mp2 *= mp1;
		});
	//parallel_for(size_t(0), (size_t)N,
	//	[&](size_t i) {
	//		mp1 = 1;
	//		for(size_t j = 0; j < M; j++) {
	//			b[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
	//			mp1 *= b[i][j];
	//		}
	//		mp2 *= mp1;
	//	});
	std::uint64_t elapsed_mus1 = my_watch1.elapsed<sw::mus>();
	std::uint64_t elapsed_ms1 = my_watch1.elapsed();
	std::uint64_t elapsed_s1 = my_watch1.elapsed<sw::s>();
	cout << "parallel.    sec: " << elapsed_s1 << "; millisec: " << elapsed_ms1 << "; microsec: " << elapsed_mus1 << endl;
	cout << mp2 << "\n";

	mp2 = 1;

	//sw::Stopwatch my_watch;
	//my_watch.start();
	///// Обычная матрица
	//for (i = 0; i < N; i++) {
	//	mp1 = 1;
	//	for (j = 0; j < M; j++) {
	//		b[i][j] = (long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3);
	//		mp1 *= b[i][j];
	//	}
	//	mp2 *= mp1;
	//}
	//std::uint64_t elapsed_mus = my_watch.elapsed<sw::mus>();
	//std::uint64_t elapsed_ms = my_watch.elapsed();
	//std::uint64_t elapsed_s = my_watch.elapsed<sw::s>();
	//cout << "notParallel. sec: " << elapsed_s << "; millisec: " << elapsed_ms << "; microsec: " << elapsed_mus << endl;
	//cout << mp2 << endl;

	//mp2 = 1;

	//sw::Stopwatch my_watch2;
	//my_watch2.start();
	///// Самый быстрый вариант
	///// Создание линейного листа
	//for(j = 0; j < M; j++) {
	//	test.push_back((long double)pow((static_cast<unsigned __int64>(j) + 1) / Q, 3));
	//}
	//for(list<long double>::iterator i = test.begin(); i != test.end(); ++i) {
	//	mp1 *= *i;
	//}
	//mp2 = pow(mp1, N);
	//std::uint64_t elapsed_mus2 = my_watch2.elapsed<sw::mus>();
	//std::uint64_t elapsed_ms2 = my_watch2.elapsed();
	//std::uint64_t elapsed_s2 = my_watch2.elapsed<sw::s>();
	//cout << "FAST.	     sec: " << elapsed_s2 << "; millisec: " << elapsed_ms2 << "; microsec: " << elapsed_mus2 << endl;
	//cout << mp2 << endl;

	//for(int i = 0; i < N; ++i) {
	//	delete[] Matrix[i];
	//}
	//delete[] Matrix;
	return 0;
}