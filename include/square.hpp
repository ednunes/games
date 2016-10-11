#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

class Square {
	private:
		unsigned short value;
		//Status of square	
		bool unlock;
	public:
		Square();
		~Square();			

		unsigned short getValueSquare();
		void setValueSquare(unsigned short val);

		bool getStatusSquare();
		void setStatusSquare(bool currentStatus);

};

#endif
