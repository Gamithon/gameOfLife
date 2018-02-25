#include "cell.hpp"

Cell::Cell(){
	alive = false;
	x = 0;
	y = 0;
}

Cell::Cell(int x, int y){
	this->x = x;
	this->y = y;	
}

