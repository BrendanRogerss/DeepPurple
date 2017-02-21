#include "Queen.h"

std::vector<Move> Queen::possibleMoves(GameState gameState) {
    std::vector<Move> moves;
    //move horizontal and vertical
    std::vector<Move> rightMoves = moveHorizontal(8, 1, gameState);
    std::vector<Move> leftMoves = moveHorizontal(8, -1, gameState);
    std::vector<Move> upMoves = verticalMoves(8,-1, gameState);
    std::vector<Move> downMoves = verticalMoves(8,1,gameState);

    for(Move move : rightMoves){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }

    for(Move move : leftMoves){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }

    for(Move move : upMoves){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }

    for(Move move : downMoves){
        if(gameState.validateMove(move)){
            moves.push_back(move);
        }
    }

    //move verticals
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

    return  moves;
}