
#include "pawn.h"
bool Pawn::canMove(int x1, int x2, int y1, int y2)
{
    if (this->isWhite())
    {
        if (y1 == y2 && x1 - x2 == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (y1 == y2 && x1 - x2 == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}