#ifndef PIECE_H
#define PIECE_H
#include <iostream>
using namespace std;

enum Color
{
    BLACK = 0x0,
    WHITE = 0x6,
};

enum PieceType
{
    KING = 0x2654,
    QUEEN = 0x2655,
    ROOK = 0x2656,
    BISHOP = 0x2657,
    KNIGHT = 0x2658,
    PAWN = 0x2659,
};

class Piece
{
private:
    Color color;
    PieceType name;

protected:
public:
    Piece(){};
    Piece(Color color, PieceType name);
    virtual bool canMove(int x1, int x2, int y1, int y2) = 0;
    void setColor(const Color &color);
    Color getColor();
    bool isWhite();
    PieceType getName();
    virtual ~Piece(){};
};

#endif /* PIECE_H */