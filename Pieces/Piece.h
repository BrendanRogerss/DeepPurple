#include "Game/Move"

class Peice{
private:
	std::pair<int, int> location;
	int value;
public:
	std::vector<Move> possibleMoves;

}