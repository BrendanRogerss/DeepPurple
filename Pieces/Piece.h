#include "Game/Move"

class Peice{
private:
	std::pair<int, int> location;
	int value;
	bool isWhite;

	std::vector<Move> moveStraight(int length);
	std::vector<Move> moveDiagonal(int length);
public:

	std::vector<Move> possibleMoves();

}