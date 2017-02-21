#include "Pawn.h"
std::vector<Move> Pawn::possibleMoves(GameState gameState) {
    std::vector<Move> moves;
    int direction = isWhite()? -1 : 1;
    std::pair<int, int> nextLocation = std::make_pair(location.first+direction, location.second);
    if(!gameState.checkSquare(nextLocation)){
        Move maybeMove = new Move(isWhite(), location, nextLocation, gameState.getScore());
        if(gameState.validateMove(maybeMove)){
            moves.push_back(maybeMove);
        }
    }
    if((isWhite() && location.first == 6) || (!isWhite && location.first == 1)){ //can move up 2 spaces
        std::pair<int, int> nextLocation = std::make_pair(location.first+(direction*2), location.second);
        if(!gameState.checkSquare(nextLocation)){
            Move maybeMove = new Move(isWhite(), location, nextLocation, gameState.getScore());
            if(gameState.validateMove(maybeMove)){
                moves.push_back(maybeMove);
            }
        }
    }

    std::vector<Move> upRight = moveDiagonal(1, 1, direction,  gameState);
    std::vector<Move> upLeft = moveDiagonal(1, -1, direction, gameState);
    for(Move move : upLeft){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }
    for(Move move : upRight){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }



    return moves;

}