class Pawn: public Piece{
public:
    std::vector<Move> possibleMoves(GameState gameState);
};