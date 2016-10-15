#include <iostream>
#include "../include/board.hpp"
#include "../include/square.hpp"


int main(){
	Board board;
	char* player;
	int position = 0;
	bool endGame = false;
	char option;	

	std::cout << "Gerar primeiro jogador?" << std::endl;	
	std::cin >> option; 
	std::cin.ignore();
	player = board.chooseFirstPlayer(option);
	int i = 0;
	while(endGame!=true and board.verifyGameOver(i,endGame)!=true){
	bool status = false;	
		if(i%2==0){
	 		while(status!=true){
				position = board.choicePosition(player[0]);
				status = board.setValueBoard(position,player[0]);
			}
			if(i>=4){
				endGame = board.verifyWin(player[0]);
			}
		} else {
	 		while(status!=true){
				position = board.choicePosition(player[1]);
	 			status = board.setValueBoard(position,player[1]);
			}
			if(i>=4){
				endGame = board.verifyWin(player[1]);
			}
		}
		board.drawBoard();
		i++;	
	}
	return 0;
}
