class Move{
public:
	Move(bool whiteTurn, std::pair<int, int> from, std::pair<int, int> to, std::pair<int, int> newScore);

	bool whiteTurn;
	std::pair<int, int> from;
	std::pair<int, int> to;
	std::pair<int, int> newScore; //white, black
};