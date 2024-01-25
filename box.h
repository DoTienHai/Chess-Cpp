#ifndef BOX_H
#define BOX_H
#include <iostream>
#include "piece.h"
using namespace std;
class Box
{
private:
    char column;
    int row;
    Piece *piece;

protected:
public:
    Box(){};
    Box(const char &column, const int &row);
    void setPiece(Piece *piece);
    Piece *getPiece();
    bool hasPiece();
    void clearPiece();
    void killPiece();
    char getColumn();
    int getRow();
};

#endif /* BOX_H */