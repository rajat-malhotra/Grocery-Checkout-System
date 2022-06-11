#include "PricingRules.h"

// adding price rules
void PricingRules::addPricing(string itemname, float cost, int specialQuantity, float specialPrice)
{
    rules.emplace(itemname, tuple<float, int, float>(cost, specialQuantity, specialPrice));
}

// getcost of the scanned grocery item
float PricingRules::getCost(string itemname)
{
    return get<0>(rules.find(itemname)->second);
}

// get special quantity of the scanned grocery item
int PricingRules::getSQ(string itemname)
{
    return get<1>(rules.find(itemname)->second);
}

// get special price of the scanned grocery item
int PricingRules::getSP(string itemname)
{
    return get<2>(rules.find(itemname)->second);
}

// reading rules as an input text files
void PricingRules::readRule(ifstream &in)
{
    string line;
    getline(in, line);
    stringstream ss(line);
    string itemname;
    float cost = 0;
    int sq = 0;
    float sp = 0;
    ss >> itemname;
    ss >> cost;
    ss >> sq;
    ss >> sp;
    rules.emplace(itemname, tuple<float, int, float>(cost, sq, sp));
}
