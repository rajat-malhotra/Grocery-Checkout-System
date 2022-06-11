#ifndef __PRICINGRULES_H__
#define __PRICINGRULES_H__

#include <string>
#include <map>
#include <sstream>
#include <tuple>
#include <stdlib.h>
#include <fstream>

using namespace std;

class PricingRules
{
private:
    map<std::string, tuple<float, int, int>> rules;

public:
    // adding price rules
    void addPricing(string itemname, float cost, int specialQuantity = 0, float specialPrice = 0);

    // getcost of the scanned grocery item
    float getCost(string itemname);

    // get special quantity of the scanned grocery item
    int getSQ(string itemname);

    // get special price of the scanned grocery item
    int getSP(string itemname);

    // reading rules as an input text files
    void readRule(ifstream &in);
};

#endif