#pragma once
#include <iostream>

class Move {
public:
	virtual int execute() = 0;
	virtual std::string getName() = 0;
	virtual ~Move() {}
};

class Tackle :public Move {
	int execute();
};