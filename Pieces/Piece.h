#include "Game/Move.h"
#include "Game/GameState.h"

class Piece{
private:
	std::pair<int, int> location;
	int value;
	bool white;

	//direction should be 1(down) or -1(up)
	std::vector<Move> moveVertical(int length, int direction, GameState* gameState);
	std::vector<Move> moveHorizontal(int length, int direction, GameState* gameState);
	std::vector<Move> moveDiagonal(int length, int horizontalDirection, int verticalDirection,  GameState* gameState);
	Move moveToSquare(Piece from, Piece to);

public:

	bool isWhite(){
		return white;
	}

	int getValue(){
		return value;
	}
	std::vector<Move> possibleMoves(GameState gameState);

};