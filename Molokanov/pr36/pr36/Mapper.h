#pragma once
#ifdef PR36_EXPORTS
#define PR36 __declspec(dllexport)
#else
#define PR36 __declspec(dllimport)
#endif
#include "pch.h"
#include <iostream>
using namespace std;

class PR36 Mapper{
public:
	static bool Init; // Набор
	static int Pen;   // бесполезных
	static int Speed; // переменных
	static bool PenIsUp;
	static int Points;
	static int X0;
	static int Y0;
	virtual void command(string line) = 0;
	virtual ~Mapper() = default;
};

class PR36 Initialize: public Mapper {
public:
	void command(string line) {
		Init = 1;
		cout << "Plotter initialized" << endl;
	}
};
class PR36 Scale: public Mapper {
public:
	void command(string line) {
		cout << "Scale is set" << endl;
	}
};
class PR36 SelectPen: public Mapper {
public:
	void command(string line) {
		Pen = atoi(line.c_str());
		if(Pen == 0) {
			cout << "Pen deselected" << endl;
			Init = 0;
			Speed = 0;
			Points = 0;
		}
		else cout << "Pen " << Pen << " selected" << endl;
	}
};
class PR36 LineType: public Mapper {
public:
	void command(string line) {
		cout << "Line type is set" << endl;
	}
};
class PR36 VelocitySelect: public Mapper {
public:
	void command(string line) {
		Speed = atoi(line.c_str());
		cout << "Speed " << Speed << " is set" << endl;
	}
};
class PR36 PenUp: public Mapper {
public:
	void command(string line) {
		PenIsUp = 1;
		Points = 0;
	}
};
class PR36 PenDown: public Mapper {
public:
	void command(string line) {
		PenIsUp = 0;
	}
};
class PR36 PlotAbsolute: public Mapper {
public:
	void command(string line) {
		Points += 1;
		if(PenIsUp == 1) {

		}
	}
};