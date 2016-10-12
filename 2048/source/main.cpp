#include "square.hpp"
#include "board.hpp"

int main(){

	Board squares;
	bool firstTime = true;
	bool statusGame = false;
	squares.testMatrix();

	do{	
		firstTime = squares.generateNumberSquare(firstTime);	
		squares.drawBoard();	
		
		char move;
		std::cin >> move;
		statusGame = squares.moveSquare(move, statusGame);
				
	} while(statusGame != true);

	return 0;
}


