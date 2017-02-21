#include "Game/Board.h"

class GameState {
private:
	Piece* board[8][8];
	std::pair<int, int> score; //white, black
	bool whiteTurn;
	std::pair<std::vector<Piece>,std::vector<Piece>> Pieces; //white, black
	std::pair<Piece, Piece> kings;
public:
	std::pair<int, int> getScore(){
        return score;
    }
	void movePiece(Move move);
	Board copyBoard();
	bool inCheck(bool white);
	bool inCheckMate(bool white);
    Piece* checkSquare(int x, int y){
        return board[x][y];
    }

	bool validateMove(Move move);
};