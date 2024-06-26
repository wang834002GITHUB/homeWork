#include "Piece.h"

Piece::Piece() {};
Piece::Piece(int x, int y,char style) {
	this->x = x;
	this->y = y;
	this->style = style;
}
void Piece::setPiece(int x, int y, char style) {
	this->x = x;
	this->y = y;
	this->style = style;
}
void Piece::setStyle(char style) {
	this->style = style;
}
void Piece::setEmpty(bool empty) {
	this->empty = empty;
}
int Piece::getX(int j) {
	return j / 2 + 1;
}
int Piece::getX() {
	return this->x;
}
int Piece::getY(int i) {
	return 15 - i;
}
int Piece::getY() {
	return this->y;
}
char Piece::getStyle() {
	return this->style;
}
bool Piece::getEmpty() {
	return this->empty;
}
