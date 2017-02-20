#include "Game/Move"

class Peice{
private:
	std::pair<int, int> location;
	int value;
	bool isWhite; 
public:
	std::vector<Move> possibleMoves;

}