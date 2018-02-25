#include "board.hpp"

Board::Board(){
	this->size = 10;	
	Cell** mat = new Cell*[size];
	for(int i = 0; i < size ; i++){
		mat[i] = new Cell[size];
		for(int j = 0; j < size ; j++{
			mat[i][j] = Cell(i,j);
		}
	}
}

