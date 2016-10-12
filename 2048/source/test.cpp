#include "board.hpp"
bool statusGame = false;

void Board::testMatrix(){
	//Caso 01
	board[0][0].setValueSquare(2);
	board[0][1].setValueSquare(2);
	board[0][2].setValueSquare(0);
	board[0][3].setValueSquare(2);

	board[1][0].setValueSquare(2);
	board[1][1].setValueSquare(2);
	board[1][2].setValueSquare(2);
	board[1][3].setValueSquare(0);

	board[2][0].setValueSquare(2);
	board[2][1].setValueSquare(2);
	board[2][2].setValueSquare(0);
	board[2][3].setValueSquare(4);

	board[3][0].setValueSquare(2);
	board[3][1].setValueSquare(2);
	board[3][2].setValueSquare(4);
	board[3][3].setValueSquare(4);
	drawBoard();	
	statusGame = moveLeftOrUp(0,1,statusGame);
	//statusGame = moveRightOrDown(0,1,statusGame);
	drawBoard();	

	//Caso 02
	board[0][0].setValueSquare(4);
	board[0][1].setValueSquare(0);
	board[0][2].setValueSquare(2);
	board[0][3].setValueSquare(2);

	board[1][0].setValueSquare(2);
	board[1][1].setValueSquare(0);
	board[1][2].setValueSquare(4);
	board[1][3].setValueSquare(2);

	board[2][0].setValueSquare(2);
	board[2][1].setValueSquare(0);
	board[2][2].setValueSquare(2);
	board[2][3].setValueSquare(0);

	board[3][0].setValueSquare(2);
	board[3][1].setValueSquare(0);
	board[3][2].setValueSquare(2);
	board[3][3].setValueSquare(2);
	drawBoard();
	statusGame = moveLeftOrUp(0,1,statusGame);
	//statusGame = moveRightOrDown(0,1,statusGame);
	drawBoard();	
	//Caso 03
	board[0][0].setValueSquare(0);
	board[0][1].setValueSquare(0);
	board[0][2].setValueSquare(0);
	board[0][3].setValueSquare(0);

	board[1][0].setValueSquare(0);
	board[1][1].setValueSquare(0);
	board[1][2].setValueSquare(0);
	board[1][3].setValueSquare(2);

	board[2][0].setValueSquare(0);
	board[2][1].setValueSquare(0);
	board[2][2].setValueSquare(2);
	board[2][3].setValueSquare(0);

	board[3][0].setValueSquare(0);
	board[3][1].setValueSquare(0);
	board[3][2].setValueSquare(2);
	board[3][3].setValueSquare(2);
	drawBoard();
	statusGame = moveLeftOrUp(0,1,statusGame);
	//statusGame = moveRightOrDown(0,1,statusGame);
	drawBoard();	

	//Caso 04
	board[0][0].setValueSquare(0);
	board[0][1].setValueSquare(2);
	board[0][2].setValueSquare(0);
	board[0][3].setValueSquare(0);

	board[1][0].setValueSquare(0);
	board[1][1].setValueSquare(2);
	board[1][2].setValueSquare(0);
	board[1][3].setValueSquare(2);

	board[2][0].setValueSquare(2);
	board[2][1].setValueSquare(2);
	board[2][2].setValueSquare(2);
	board[2][3].setValueSquare(2);

	board[3][0].setValueSquare(0);
	board[3][1].setValueSquare(2);
	board[3][2].setValueSquare(2);
	board[3][3].setValueSquare(2);
	drawBoard();
	statusGame = moveLeftOrUp(0,1,statusGame);
	//statusGame = moveRightOrDown(0,1,statusGame);
	drawBoard();	

	//Caso 04
	board[0][0].setValueSquare(4);
	board[0][1].setValueSquare(2);
	board[0][2].setValueSquare(4);
	board[0][3].setValueSquare(2);

	board[1][0].setValueSquare(2);
	board[1][1].setValueSquare(4);
	board[1][2].setValueSquare(2);
	board[1][3].setValueSquare(4);

	board[2][0].setValueSquare(4);
	board[2][1].setValueSquare(2);
	board[2][2].setValueSquare(4);
	board[2][3].setValueSquare(2);

	board[3][0].setValueSquare(2);
	board[3][1].setValueSquare(4);
	board[3][2].setValueSquare(2);
	board[3][3].setValueSquare(4);
	drawBoard();	
 	statusGame = checkGameOver();

}

