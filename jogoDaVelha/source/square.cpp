#include "../include/square.hpp"

Square::Square(){
	value = ' ';	
}

Square::~Square(){
	
}

char Square::getValue(){

	return value;	
}

void Square::setValue(char val){
	value = val;
}
