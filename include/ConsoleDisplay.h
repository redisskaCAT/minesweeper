#ifndef CONSOLE
#define CONSOLE

#include <iostream>
#include <string>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <chrono>
#include <termios.h>

using namespace std;

#include "../include/Coord.h"
#include "../include/State.h"
#include "../include/Value.h"
#include "../include/in.h"
#include "../include/Field.h"

class ConsoleDisplay
{
private:
  Field *field;
	int colsField;
	int rowsField;
	int totalMines;
	int shiftNum;
	int shiftAlf;
	Coord sizeConsole;
	Coord sizeScreen;
	Coord sizeField;
	Coord center;
	Coord cScreen;
	Coord cField;
	Coord cMines;
	Coord cTimer;
	Coord margin = Coord (3, 1);
	bool inGame;
  	Coord cur;
	void showFrame(Coord coord);
	void CUP(Coord coord);
	void clearConsole();
	void centerConsole();
  	void movingCur(bool active);
public:
	ConsoleDisplay(Field* f, Coord _sizeField, int mines);
	In move();
	void showGameDisplay();
	void showField();
	void showValue();
	void showCountMines(int mines);
	void showVal(Coord coord, Value val, bool active);
	void showState(Coord coord, State state, bool active);
	bool showTimer(int time);
	void showEndGameMessange(bool win);
};

#endif
