#include "Knight.h"
std::vector<Move> Knight::possibleMoves(GameState gameState) {
    std::vector<Move> moves;
    std::vector<std::pair<int, int>> possibleMoves;
    //up
    possibleMoves.push_back(make_pair(location.first+1, locatoin.second+2));
    possibleMoves.push_back(make_pair(location.first-1, locatoin.second+2));
    //down
    possibleMoves.push_back(make_pair(location.first+1, locatoin.second-2));
    possibleMoves.push_back(make_pair(location.first-1, locatoin.second-2));
    //left
    possibleMoves.push_back(make_pair(location.first-2, locatoin.second+1));
    possibleMoves.push_back(make_pair(location.first-2, locatoin.second-1));
    //right
    possibleMoves.push_back(make_pair(location.first+2, locatoin.second+1));
    possibleMoves.push_back(make_pair(location.first+2, locatoin.second-1));

    for(std::pair<int, int> nextLocation : possibleMoves){
        if(nextLocation.first < 8 && nextLocation.first >=0 && nextLocation.second < 8 && nextLocation.second >=0){//not out of bounds
            Piece nextSquare = gameState.checkSquare(nextLocation.first, nextLocation.second);
            Move nextMove = moveToSquare(this, nextSquare);
            if(gameState.validateMove(nextMove)){
                moves.push_back(nextMove);
            }
        }

    }
    return moves;
}