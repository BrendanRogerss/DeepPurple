#include "Game/Board.h"

class GameState {
private:
	Piece[8][8] board;
	std::pair<int, int> score; //white, black
	bool whiteTurn;
	std::vector<Piece> whitePieces;
	std::vector<Piece> blackPieces;
public:
	std::pair<int, int> getScore();
	void movePiece(Move move);
	Board copyBoard();
	bool inCheck(bool white);
	bool inCheckMate(bool white);
}