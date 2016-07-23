#include "rook.h"
using namespace std;

Rook::Rook(Board *bd, int r, int c, string co, bool b):
	Piece{bd, r, c, co, b} {
}

Rook::~Rook() { }

char Rook::getLetter() {
	return (colour == "white"? 'R' : 'r');
}
