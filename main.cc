#include <stdlib.h>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <tuple>
#include <iostream>
#include "checkout.h"

using namespace std;

int main()
{
    ifstream fs;
    fs.open("input.txt");
    PricingRules priceRule;
    int nrules = 0;
    fs >> nrules;
    string _;

    // ignoring the rest of first line as read it as an int there using >>
    getline(fs, _);

    for (int i = 0; i < nrules; ++i)
    {
        priceRule.readRule(fs);
    }

    Checkout cart(priceRule);
    string curritem;

    while (!fs.eof() && fs >> curritem)
    {
        
        cart.scan(curritem);
    }
    fs.close();

    // printing and returing the total price in dollars
    cout << "$" << cart.total / 100 << endl;
    return cart.total / 100;
}