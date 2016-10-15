#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
//enum options {x = 'x', o = 'o', nothing = ' '};

class Square {
	private: 
		char value;
	public:
			
		Square();
		~Square();

		char getValue();
		void setValue(char val);



};

#endif
