#pragma once
#ifdef PR36_EXPORTS
#define PR36 __declspec(dllexport)
#else
#define PR36 __declspec(dllimport)
#endif
#include "pch.h"

class PR36 Mapper {
public:
	static bool Init;
	static int Pen;
	static int Speed;
	static bool PenIsUp;
	virtual void command(int X = 0, int Y = 0) = 0;
	virtual ~Mapper() = default;
};

class PR36 Initialize: public Mapper {
	void command(int X = 0, int Y = 0) {
		Init = 1;
		//cout << "Plotter initialized" << endl;
	}
};
class PR36 Scale: public Mapper {
	void command(int X = 0, int Y = 0) {
		//cout << "Scale is set" << endl;
	}
};
class PR36 SelectPen: public Mapper {
	void command(int X = 0, int Y = 0) {
		Pen = X;
		//cout << "Pen " << SelectPen << " selected" << endl;
	}
};
class PR36 LineType: public Mapper {
	void command(int X = 0, int Y = 0) {
		//cout << "Line type is set" << endl;
	}
};
class PR36 VelocitySelect: public Mapper {
	void command(int X = 0, int Y = 0) {
		Speed = X;
		//cout << "Speed " << Speed << " is set" << endl;
	}
};
class PR36 PenUp: public Mapper {
	void command(int X = 0, int Y = 0) {
		PenIsUp = 1;
	}
};
class PR36 PenDown: public Mapper {
	void command(int X = 0, int Y = 0) {
		PenIsUp = 0;
	}
};