#include "square.hpp"
#include "board.hpp"

int main(){

	Board squares;
	bool firstTime = true;
	bool statusGame = false;
	unsigned short gamesNumber = 0;
//	squares.testMatrix();

	do{	
		firstTime = squares.generateNumberSquare(firstTime);	
		squares.drawBoard();	
		
		char move;
		std::cin >> move;
		statusGame = squares.moveSquare(move, statusGame);
		std::cout<< "Score: " << squares.getScore()<<std::endl;
				
	} while(statusGame != true);

	return 0;
}


