#include "money.h"
#include <iostream>

using namespace std;

Money::Money()
{
    dollars = 0;
    cents = 0;
}
    Money::Money(int dol, int cen)
{
    dollars = dol;
    cents = cen;
}