#include "Game/Move.h"
#include "Game/GameState.h"
class Node{

public:

    void generateGameState();

    std::pair<int, int> getScore(){
        return move.newScore;
    }
	Move getMove(){
        return move;
    }
    std::vector<Node*> getChildren(){
        return children;
    }

private:
    Node* parent;
    std::vector<Node*> children;

    Move move;
    GameState* gameState;
};