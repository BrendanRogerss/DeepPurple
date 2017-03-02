#include "Move.h"

Move::Move(bool whiteTurn, std::pair<int, int> from, std::pair<int, int> to, std::pair<int, int> newScore){
    this.whiteTurn = whiteTurn;
    this.from = from;
    this.to = to;
    this.newScore = newScore;
}