#include "Game/Board.h"

class GameState {
private:
	Piece[8][8] board;
	std::pair<int, int> score; //white, black
	bool whiteTurn;
	std::pair<std::vector<Piece>,std::vector<Piece>> Pieces; //white, black
	std::pair<Piece, Piece> kings;
public:
	std::pair<int, int> getScore();
	void movePiece(Move move);
	Board copyBoard();
	bool inCheck(bool white);
	bool inCheckMate(bool white);

	bool validateMove(Move move, bool white);
}