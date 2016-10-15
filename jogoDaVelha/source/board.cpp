#include "../include/board.hpp"

Board::Board(){

}
Board::~Board(){

}
void Board::drawBoard(){
 				std::cout << "|---|---|---|" << std::endl;  
        for(short x = 0; x < DIMENSION * DIMENSION; ++x){
        				std::cout << "|";  
								std::cout << std::setw(3) << board[x].getValue();
                if((x+1)%3==0){
        					std::cout << "|";  
									std::cout << std::endl;
        				  std::cout << "|---|---|---|" << std::endl;  
								}
        }
}

char* Board::chooseFirstPlayer(char option){
				static char player[2];
				if (option == 'n'){
						std::cout << "Quem começara \"o\" ou \"x\"?" << std::endl;
						std::cin >> player[0];
						std::cin.ignore();
				} else {
					  player[0] =	generateFirstPlayerSymbol();
				}
				if(player[0] == 'x'){
					player[0] = 'X';
					player[1] = 'O';
				} else {
					player[0] = 'O';
					player[1] = 'X';
				}

	return player;
}

short Board::choicePosition(char turn){
			short position;	
			std::cout << "Em que posicao colocar o " << turn << " ?"  << std::endl;
			std::cin >> position;
			std::cin.ignore();
			
			return position;
}

bool Board::setValueBoard(short position, char player){
			if(board[position-1].getValue()==' '){
					board[position-1].setValue(player);
					return true;
			} else {
					std::cout << "Posicao ja ocupada, tente outra! " << std::endl;
					return false;
			}
}

bool Board::verifyWin(char player){
		for(int i = 0; i < 9;i++){
				std::cout << board[2].getValue()<< " " <<  board[4].getValue()<< " " << board[6].getValue() << std::endl;
				if(board[i].getValue()==player){
						if(board[i].getValue()==board[i+1].getValue() and board[i+1].getValue()==board[i+2].getValue() and i%3==0){
								std::cout << "Player "<< player << " ganhou!!!" << std::endl;
								return true;
						} else if(board[i].getValue()==board[i+3].getValue() and board[i+3].getValue()==board[i+6].getValue()){
								std::cout << "Player "<< player << " ganhou!!!" << std::endl;
                return true;
            } else if(board[0].getValue()==board[4].getValue() and board[4].getValue()==board[8].getValue()){
								std::cout << "Player "<< player << " ganhou!!!" << std::endl;
                return true;
            } else  {

						}

				} else {
           if(board[2].getValue()==board[4].getValue() and board[4].getValue()==board[6].getValue()){
								std::cout << "Player "<< player << " ganhou!!!" << std::endl;
                return true;
					} else {

					}

				}
		}
		return false;
}
char Board::generateFirstPlayerSymbol(){
		srand(static_cast<unsigned short>(time(NULL)));
		
		if(rand()%2==0){
				return 'o';
		} else {
				return 'x';
		}	
}


bool Board::verifyGameOver(int i, bool endGame){
		if(i>=9 and endGame==false){
			std::cout << "Deu velha!!!" << std::endl;
			return true;
		} else {

		}
		return false;
}
