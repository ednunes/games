#include "square.hpp"


Square::Square(){
	value = 0;
	unlock = false;
}

Square::~Square(){
	//Do nothing
}

unsigned short Square::getValueSquare(){
	return value;
}

void Square::setValueSquare(unsigned short val){
	value = val;
}

bool Square::getStatusSquare(){
        return unlock;
}

void Square::setStatusSquare(bool currentStatus){
        unlock = currentStatus;
}

