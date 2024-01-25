#include "board.h"
#include "pawn.h"

BoardModel::BoardModel()
{
    for (int i = 0; i < 64; i++)
    {
        boxVector.push_back(Box(i % 8 + (int)'A', 8 - i / 8));
    }
    boxVector.at(0).setPiece(new Pawn(BLACK, ROOK));
    boxVector.at(1).setPiece(new Pawn(BLACK, KNIGHT));
    boxVector.at(2).setPiece(new Pawn(BLACK, BISHOP));
    boxVector.at(3).setPiece(new Pawn(BLACK, QUEEN));
    boxVector.at(4).setPiece(new Pawn(BLACK, KING));
    boxVector.at(5).setPiece(new Pawn(BLACK, BISHOP));
    boxVector.at(6).setPiece(new Pawn(BLACK, KNIGHT));
    boxVector.at(7).setPiece(new Pawn(BLACK, ROOK));
    for (int i = 8; i < 16; i++)
    {
        boxVector.at(i).setPiece(new Pawn(BLACK, PAWN));
    }
    for (int i = 48; i < 56; i++)
    {
        boxVector.at(i).setPiece(new Pawn(WHITE, PAWN));
    }
    boxVector.at(56).setPiece(new Pawn(WHITE, ROOK));
    boxVector.at(57).setPiece(new Pawn(WHITE, KNIGHT));
    boxVector.at(58).setPiece(new Pawn(WHITE, BISHOP));
    boxVector.at(59).setPiece(new Pawn(WHITE, QUEEN));
    boxVector.at(60).setPiece(new Pawn(WHITE, KING));
    boxVector.at(61).setPiece(new Pawn(WHITE, BISHOP));
    boxVector.at(62).setPiece(new Pawn(WHITE, KNIGHT));
    boxVector.at(63).setPiece(new Pawn(WHITE, ROOK));
};
Box *BoardModel::getBoard()
{
    return this->boxVector.data();
}

void BoardController::display()
{
    view.display(board);
}

void BoardController::move(Box *source, Box *target)
{
    if (source->hasPiece())
    {
        if (target->hasPiece())
        {
            target->killPiece();
            wcout << "take a piece" << endl;
        }

        target->setPiece(source->getPiece());
        source->clearPiece();
        wcout << "move oke" << endl;
    }
    else
    {
        wcout << "no piece" << endl;
    }
}

void BoardView::display(BoardModel &board)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    wcout << "  ";
    for (char i = 'A'; i <= 'H'; i++)
    {
        wcout << "  " << i;
    }
    wcout << endl;

    for (int i = 0; i < 64; i++)
    {
        if (i % 8 == 0)
        {
            wcout << 8 - i / 8 << " ";
        }
        wcout << " ";
        if ((board.getBoard() + i)->hasPiece())
        {

            wchar_t temp = (board.getBoard() + i)->getPiece()->getName();
            if ((board.getBoard() + i)->getPiece()->isWhite())
            {
                temp += WHITE;
            }
            wprintf(L"%lc ", temp);
        }
        else
        {
            wprintf(L"%lc ", 0x2610);
        }

        if (i % 8 == 7)
        {
            wcout << endl;
        }
    }
}