#ifndef PLAYER_H
#define PLAYER_H

#include <QString>


class Player
{
public:
    // Constructor
    Player(QString playerName) : name(playerName), score(0), matchedPairs(0), moves(0) {}

    // Getters
    QString getName() const { return name; }
    int getScore() const { return score; }
    int getMatchedPairs() const { return matchedPairs; }
    int getMoves() const { return moves; }

    //Setters
    void setMoves(int value) { moves=value;}


    // Methods
    void increaseScore(int points) { score += points; }
    void incrementMatchedPairs() { matchedPairs++; }
    void incrementMoves() { moves++; }
    void reset() { score = 0; matchedPairs = 0; moves = 0; }

private:
    QString name;
    int score;
    int matchedPairs;
    int moves;

};

#endif // PLAYER_H
