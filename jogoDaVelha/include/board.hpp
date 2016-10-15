#ifndef BOARD_H
#define BOARD_H

#define DIMENSION 3
#include <algorithm> 
#include <iostream>
#include <cstring>
#include <iomanip>
#include "square.hpp"

class Board {
	private:
		Square board[DIMENSION * DIMENSION];
	public:
		Board();
		~Board();			

		void drawBoard();
		char* chooseFirstPlayer(char option);
		bool statusGame();
		short choicePosition(char player);
		bool setValueBoard(short position, char turn);
		bool verifyWin(char player);
		bool verifyGameOver(int i, bool endGame);
		char generateFirstPlayerSymbol();
};

#endif

