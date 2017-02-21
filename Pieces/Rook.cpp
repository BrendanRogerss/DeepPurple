#include "Rook.h"

std::vector<Move> Rook::possibleMoves(GameState gameState){
    std::vector<Move> moves;
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


    return moves;
}