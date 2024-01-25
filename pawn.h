#ifndef PAWN_H
#define PAWN_H
#include <iostream>
#include "piece.h"
using namespace std;

class Pawn : public Piece
{
private:
protected:
public:
    Pawn(){};
    Pawn(Color color, PieceType type) : Piece(color, type){};
    bool canMove(int x1, int x2, int y1, int y2);
};

#endif /* PAWN_H */