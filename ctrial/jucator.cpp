#include "jucator.h"

Jucator::Jucator(QString nume) {
    this->nume = nume;
    this->scor = 0;
}

void Jucator::operator+=(int a) {
    this->scor = this->scor + a;
}
