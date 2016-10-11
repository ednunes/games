#ifndef BOARD_H
#define BOARD_H
#define SQUARESNUMBERS 4


#include <iomanip>
#include <iostream>
#include "square.hpp"
#include <stdlib.h>
#include <cstring>
#include <algorithm>  
#include <vector>

class Square;

class Board {
	private:
                Square board[SQUARESNUMBERS][SQUARESNUMBERS];

	public:
		Board();
		~Board();
				
		void drawBoard();
		bool generateNumberSquare(bool firstTime);
		bool checkVictory(int value);
		bool moveSquare(char move, bool statusGame);
	
		void setStatusSquareFalse();
	
		bool moveLeftOrUp(int defineM, int defineN, bool statusGame);
		bool moveRightOrDown(int defineM, int defineN, bool statusGame);
	
	
};

#endif
