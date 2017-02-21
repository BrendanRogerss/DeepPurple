class Knight : public Piece {
public:
    std::vector <Move> possibleMoves(GameState gameState);

    bool outOfBounds(int x, int y) {
        return (x < 8 && x >= 0 && y < 8 && y >= 0);
    }
};