#include "board.hpp"

Board::~Board(){
	/*
		// Fix this
		for(short i = 0; i < SQUARESNUMBERS; ++i){
		delete [] ((Board*)this) Board::board[i];
		}
		delete[] board;
		board = NULL;
	 */
}

Board::Board(){
	//Do nothing
}

bool Board::checkGameOver(){
				for(short x = 0; x < SQUARESNUMBERS; ++x){
								for(short y = 1; y < SQUARESNUMBERS-1; ++y){
												if((board[x][y].getValueSquare()==0 or board[x+1][y].getValueSquare()==0 or board[x-1][y].getValueSquare()==0 
														or board[x][y+1].getValueSquare()==0 or board[x][y-1].getValueSquare()==0) and (x-1>=0 and x+1<4)){
																return false;
												} else if((board[x][y].getValueSquare()==board[x+1][y].getValueSquare() or board[x][y].getValueSquare()== board[x-1][y].getValueSquare()) and (x-1>=0 and x+1<4)){
																return false;
												} else if(board[x][y].getValueSquare()==board[x][y-1].getValueSquare() or board[x][y].getValueSquare()==board[x][y+1].getValueSquare()){
																return false;
												} else{ 
														
												}
								}
				}
				std::cout << "Game Over" << std::endl;
				return true;

}

void Board::drawBoard(){
				std::cout << "|------|------|------|------|" << std::endl;
				for(short x = 0; x < SQUARESNUMBERS; ++x){
								std::cout << "| ";
								for(short y = 0; y < SQUARESNUMBERS; ++y){
												if(board[x][y].getValueSquare()==0)
												{
																std::cout << std::setw(SQUARESNUMBERS) << " ";
												} else { 
																std::cout << std::setw(SQUARESNUMBERS) << board[x][y].getValueSquare();
												}
												std::cout << " | ";
								}
								std::cout << std::endl;
								std::cout << "|------|------|------|------|" << std::endl;
				}
}


bool Board::generateNumberSquare(bool firstTime){
				srand(static_cast<unsigned short>(time(NULL)));

				unsigned short positionX = 0;
				unsigned short positionY = 0;
				unsigned short time = 1;
				if(firstTime==true){
								time = 2;
								firstTime = false;	
				} else {
								//Do nothing
				}

				for(short i = 0; i < time; i++){ 
								do {
												positionX = rand()%4;
												positionY = rand()%4;
								} while(board[positionX][positionY].getValueSquare());	

								unsigned short randomico = rand()%100;
								if(randomico>79){
												board[positionX][positionY].setValueSquare(4);
								} else {
												board[positionX][positionY].setValueSquare(2);
								}
				}
				return firstTime;
}

bool Board::checkVictory(short value){
				const short HIGHNUMBER = 16;

				if(value==HIGHNUMBER){
								std::cout << "Jogo ganho!!!" << std::endl;
								return true;
				} else {
								return false;
				}
}


void Board::setStatusSquareFalse(){
				for(short x = 0; x < 4; x++){
								for(short y = 0; y < 4; y++ ){
												board[x][y].setStatusSquare(false);
								}
				}
}

short* defineSense(short defineM, short x, short y){
				static short v[2] = {0};
				if (defineM==1)
				{
								v[0] = y;
								v[1] = x;

				} else {
								v[0] = x;
								v[1] = y;
				}
				return v;
}

bool Board::moveLeftOrUp(short defineM, short defineN, bool statusGame){
				short m = 0, n = 0;
				short* vetor = NULL;

				setStatusSquareFalse();

				for(short x = 0; x < 4; x++){
								for(short y = 0; y < 4; y++){

												vetor = defineSense(defineM,x,y);
												m = vetor[0];
												n = vetor[1];

												if(board[m][n].getValueSquare()!=0){
																if(((n+defineN<4) and (m+defineM<4)) and board[m][n].getValueSquare() == board[m+defineM][n+defineN].getValueSquare() and board[m][n].getStatusSquare()!=true){
																				board[m][n].setValueSquare(board[m+defineM][n+defineN].getValueSquare()*2);
																				board[m][n].setStatusSquare(true);
																				board[m+defineM][n+defineN].setValueSquare(0);

																				statusGame = checkVictory(board[m][n].getValueSquare());
																} else {
																				//      checkLost();
																}
												} else {
																if(((n+defineN<4) and (m+defineM<4)) and board[m+defineM][n+defineN].getValueSquare()!=0){
																				board[m][n].setValueSquare(board[m+defineM][n+defineN].getValueSquare());
																				board[m+defineM][n+defineN].setValueSquare(0);

																				if(((n>=defineN) and (m>=defineM)) and y >= 1 and (board[m-defineM][n-defineN].getValueSquare()==0 or board[m][n].getValueSquare()==board[m-defineM][n-defineN].getValueSquare())){
																								y-=2;
																				} else {
																								// Do nothing	
																				}
																} else {
																				// Do nothing	
																}
												}
								}
				}

				return statusGame;
}		



bool Board::moveRightOrDown(short defineM, short defineN, bool statusGame){
				short m = 0, n = 0;
				short* vetor = NULL;

				setStatusSquareFalse();

				for(short x = 0; x < 4; x++){
								for(short y = SQUARESNUMBERS-1; y>=0; y--){

												vetor = defineSense(defineM,x,y);
												m = vetor[0];
												n = vetor[1];

												if(board[m][n].getValueSquare()!=0){
																if(((n>=defineN) and (m>=defineM)) and board[m][n].getValueSquare() == board[m-defineM][n-defineN].getValueSquare() and board[m][n].getStatusSquare()!=true){
																				board[m][n].setValueSquare(board[m-defineM][n-defineN].getValueSquare()*2);
																				board[m][n].setStatusSquare(true);
																				board[m-defineM][n-defineN].setValueSquare(0);

																				statusGame = checkVictory(board[m][n].getValueSquare());
																} else {
																				//      checkLost();
																}
												} else {
																if(((n>=defineN) and (m>=defineM)) and board[m-defineM][n-defineN].getValueSquare()!=0){
																				board[m][n].setValueSquare(board[m-defineM][n-defineN].getValueSquare());
																				board[m-defineM][n-defineN].setValueSquare(0);

																				if((n+defineN<4 and m+defineM<4) and (y < SQUARESNUMBERS) and (board[m+defineM][n+defineN].getValueSquare()==0 or board[m][n].getValueSquare()==board[m+defineM][n+defineN].getValueSquare())){
																								y+=2;
																				} else {
																								// Do nothing	
																				}
																} else {
																				// Do nothing	
																}
												}
								}
				}
				return statusGame;
}


bool Board::moveSquare(char move, bool statusGame){
				if(move == 'W' or move == 'w'){
								statusGame = moveLeftOrUp(1,0,statusGame);
				} else if(move == 'A' or move == 'a'){
								statusGame = moveLeftOrUp(0,1,statusGame);
				} else if(move == 'S' or move == 's'){
								statusGame = moveRightOrDown(1,0,statusGame);
				} else if(move == 'D' or move == 'd'){
								statusGame = moveRightOrDown(0,1,statusGame);
				} else {
								std::cout << "Comando invalido" << std::endl;
				}
				return statusGame;

}
