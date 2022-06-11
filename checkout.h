#ifndef __CHECKOUT_H__
#define __CHECKOUT_H__

#include <string>
#include <map>
#include "PricingRules.h"

class Checkout
{
    map<string, int> bill; // keeping track of items and it's quantity in the checkout cart
    PricingRules p;

public:
    float total = 0;
    Checkout(PricingRules p);
    void scan(string curritem);
};

#endif