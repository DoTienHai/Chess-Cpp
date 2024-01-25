#include "piece.h"

Piece::Piece(Color color, PieceType name)
{
    this->color = color;
    this->name = name;
}

void Piece::setColor(const Color &color)
{
    this->color = color;
}
Color Piece::getColor()
{
    return this->color;
}
bool Piece::isWhite()
{
    if (this->color == WHITE)
    {
        return true;
    }
    else
    {
        return false;
    }
}
PieceType Piece::getName()
{
    return this->name;
}

