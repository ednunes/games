#include "square.hpp"
#include "board.hpp"

int main(){

	Board squares;
	bool firstTime = true;
	bool statusGame = false;
	unsigned short gamesNumber = 0;
	squares.setBustling(true);
//	squares.testMatrix();

	do{	
		if (squares.getBustling())
		{
			std::cout<<squares.getBustling()<<std::endl;
			firstTime = squares.generateNumberSquare(firstTime);
			gamesNumber++;			
		} else {

		}
		squares.setBustling(false);

		squares.drawBoard();

		char move;
		std::cin >> move;
		statusGame = squares.moveSquare(move, statusGame);
		std::cout<< "Score: " << squares.getScore() <<std::endl;
		std::cout<< "Numeros de jogadas: " << gamesNumber <<std::endl;
				
	} while(statusGame != true);

	return 0;
}


