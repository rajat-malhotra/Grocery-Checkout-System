#include <string>
#include <iostream>
#include "checkout.h"

Checkout::Checkout(PricingRules p) : p{p} {}

void Checkout::scan(string curritem)
{
    map<string, int>::iterator it;
    it = bill.find(curritem);
    int itemsSofar = 0;
    if (it != bill.end())
    {
        itemsSofar = bill.find(curritem)->second;
    }

    int sq = p.getSQ(curritem);
    if (sq != 0 && (itemsSofar + 1) % sq == 0)
    {
        float costSoFar = itemsSofar * p.getCost(curritem);
        float costSpecial = p.getSP(curritem);
        total = total - costSoFar + costSpecial;
    }
    else
    {
        total = total + p.getCost(curritem);
    }
    bill[curritem] = itemsSofar + 1;
}
