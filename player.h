#ifndef PLAYER_H
#define PLAYER_H

#include <QString>


class player
{
public:
    // Constructor
    player(QString playerName) : name(playerName), score(0), matchedPairs(0), turns(0) {}

    // Getters
    //QString getName() const { return name; }
    int getScore() const { return score; }
    int getMatchedPairs() const { return matchedPairs; }
    int getTurns() const { return turns; }

    // Methods
    void increaseScore(int points) { score += points; }
    void incrementMatchedPairs() { matchedPairs++; }
    void incrementTurns() { turns++; }
    void reset() { score = 0; matchedPairs = 0; turns = 0; }

private:
    QString name;
    int score;
    int matchedPairs;
    int turns;

};

#endif // PLAYER_H
