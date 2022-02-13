#ifndef CMPT_225_HELP_NIGHT_CARD_H
#define CMPT_225_HELP_NIGHT_CARD_H
#include <string>
#include <ostream>

class Card {
private:
    std::string suite;
    int number;

public:
    Card();
    Card(const std::string &suite, int number);
    
    const std::string &getSuite() const;
    int getNumber() const;

    friend std::ostream &operator<<(std::ostream &os, const Card &card);
};


#endif 