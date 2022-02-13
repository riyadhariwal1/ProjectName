#include "Card.h"

Card::Card() {}

Card::Card(const std::string &suite, int number) : suite(suite), number(number) {}

const std::string &Card::getSuite() const {
    return suite;
}

int Card::getNumber() const {
    return number;
}

std::ostream &operator<<(std::ostream &os, const Card &card) {
    os << "suite: " << card.suite << "; number: " << card.number;
    return os;
}