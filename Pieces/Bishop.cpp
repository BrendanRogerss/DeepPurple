#include "Bishop.h"

std::vector<Move> Bishop::possibleMoves(GameState gameState) {
    std::vector<Move> moves;
    std::vector<Move> upLeft = moveDiagonal(8, -1, -1,  gameState);
    std::vector<Move> upRight = moveDiagonal(8, -1, 1,  gameState);
    std::vector<Move> downLeft = moveDiagonal(8, 1, -1,  gameState);
    std::vector<Move> downRight = moveDiagonal(8, 1, 1,  gameState);

    for(Move move : upLeft){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }
    for(Move move : upright){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }
    for(Move move : downLeft){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }
    for(Move move : downRight){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }
}