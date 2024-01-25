#include "box.h"

Box::Box(const char &column, const int &row)
{
    this->column = column;
    this->row = row;
    this->piece = nullptr;
}
void Box::setPiece(Piece *piece)
{
    this->piece = piece;
}
Piece *Box::getPiece()
{
    return this->piece;
}
bool Box::hasPiece()
{
    if (this->piece == nullptr)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void Box::clearPiece(){
    
    this->piece = nullptr;
};

void Box::killPiece(){
    delete this->piece;
    this->piece = nullptr;
}
char Box::getColumn()
{
    return this->column;
}
int Box::getRow()
{
    return this->row;
}