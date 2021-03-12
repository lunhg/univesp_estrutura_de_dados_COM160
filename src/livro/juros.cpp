#include <cmath>
#include "juros.h"

using std::pow;

void Juros::setPrincipal(double p){
    this->principal = p;
}

double Juros::getPrincipal() const {
    return this->principal;
}

void Juros::setRate(double r){
    this->rate = r;
}

double Juros::getRate() const {
    return this->rate;
}

double Juros::getAmountForYear(int years)  {
    double amount;
    double r;
    double p;

    p = getPrincipal();
    r = getRate();

    amount = p * pow(1.0 +r, years);

    return amount; 

}

Juros::Juros(double principal, double rate){
    setPrincipal(principal);
    setRate(rate);
}
