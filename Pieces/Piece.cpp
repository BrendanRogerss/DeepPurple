#include "Piece.h"


std::vector <Move> Piece::moveVertical(int length, int direction, GameState *gameState) {
    GameState game = &gameState;
    std::vector <Move> nextMoves;
    int possibleLocation = location.first;
    if (isWhite() || frontAndBack) { //move up the board, from [8] to [0]
        int moves = 0;//number of times piece has moved
        while (possibleLocation >= 0 && possibleLocation < 8 && moves < length) { //don't move past the board
            possibleLocation += direction;
            moves++;
            Piece *nextSquare = game.checkSquare(possibleLocation, location.second);
            if (!nextSquare) {//check if the square is empty
                nextMoves.push_back(new Move(isWhite(), location, std::make_pair(possibleLocation, location.second),
                                             game.getScore));
            } else {//piece in front
                if (nextSquare->isWhite() == isWhite) {
                    break;
                } else {
                    nextMoves.push_back(new Move(isWhite(), location, std::make_pair(possibleLocation, location.second),
                                                 (isWhite() ? std::make_pair(
                                                         game.getScore().first + nextSquare->getValue(),
                                                         game.getScore.second) :
                                                  std::make_pair(game.getScore().first,
                                                                 game.getScore.second + nextSquare->getValue()))));
                    break;
                }
            }

        }
    }
    return nextMoves;

}

std::vector <Move> Piece::moveHorizontal(int length, int direction, GameState *gameState) {
    GameState game = &gameState;
    std::vector <Move> nextMoves;
    int moves = 0;
    int possibleLocation = location.second;
    //check moving right
    while (possibleLocation < 8 && possibleLocation >= 0 && moves < length) {
        possibleLocation += direction;
        moves++;
        Piece *nextSquare = game.checkSquare(location.first, possibleLocation);
        if (!nextSquare) {//check if the square is empty
            nextMoves.push_back(
                    new Move(isWhite(), location, std::make_pair(locatoin.first, possibleLocation), game.getScore));
        } else {//piece in front
            if (nextSquare->isWhite() == isWhite()) {
                break;
            } else {
                nextMoves.push_back(new Move(isWhite(), location, std::make_pair(locatoin.first, possibleLocation),
                                             (isWhite() ? std::make_pair(game.getScore().first + nextSquare->getValue(),
                                                                         game.getScore.second) :
                                              std::make_pair(game.getScore().first,
                                                             game.getScore.second + nextSquare->getValue()))));
                break;
            }
        }
    }
    return nextMoves;
}

std::vector <Move>
Piece::moveDiagonal(int length, int horizontalDirection, int verticalDirection, GameState *gameState) {
    GameState game = &game;
    std::vector <Move> nextMoves;
    std::pair<int, int> possibleLocation = std::make_pair(location.first, location.second);
    int moves = 0;
    while (possibleLocation.first < 8 && possibleLocation.first >= 0 && possibleLocation.second < 8 &&
           possibleLocation.second >= 0 && moves < length) {
        possibleLocation.first += horizontalDirection;
        possibleLocation.second += verticalDirection;
        moves++;
        Piece *nextSquare = game.checkSquare(location.first, possibleLocation);
        if (!nextSquare) {//check if the square is empty
            nextMoves.push_back(
                    new Move(isWhite(), location, std::make_pair(locatoin.first, possibleLocation), game.getScore));
        } else {//piece in front
            if (nextSquare->isWhite() == isWhite()) {
                break;
            } else {
                nextMoves.push_back(new Move(isWhite(), location, std::make_pair(locatoin.first, possibleLocation),
                                             (isWhite() ? std::make_pair(game.getScore().first + nextSquare->getValue(),
                                                                         game.getScore.second) :
                                              std::make_pair(game.getScore().first,
                                                             game.getScore.second + nextSquare->getValue()))));
                break;
            }
        }
    }

    return nextMoves;
}

Move Piece::moveToSquare(Piece piece, std::pair<int, int> nextLocation, GameState gameState) {
    Piece* nextSquare = gameState.checkSquare(nextLocation);
    if(!Piece){
        return new Move(isWhite(), location, nextLocation, game.getScore);
    }else {//piece in front
        if (nextSquare->isWhite() == isWhite()) {
            return NULL;
        } else {
            return new Move(isWhite(), location, std::make_pair(locatoin.first, possibleLocation),
                                         (isWhite() ? std::make_pair(game.getScore().first + nextSquare->getValue(),
                                                                     game.getScore.second) :
                                          std::make_pair(game.getScore().first,
                                                         game.getScore.second + nextSquare->getValue())));

        }
    }


}
