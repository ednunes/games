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
		unsigned short score;

	public:
		Board();
		~Board();
				
		void drawBoard();
		bool generateNumberSquare(bool firstTime);
		bool checkVictory(short value);
		bool checkGameOver();
		bool checkCanMove(short x, short y);		

		unsigned short getScore();

		
		bool moveSquare(char move, bool statusGame);
	
		void setStatusSquareFalse();
	
		bool moveLeftOrUp(short defineM, short defineN, bool statusGame);
		bool moveRightOrDown(short defineM, short defineN, bool statusGame);
	
		void testMatrix();	
};

#endif
