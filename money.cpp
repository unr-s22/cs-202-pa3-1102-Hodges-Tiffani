#include "money.h"
<<<<<<< HEAD
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
=======


Money::Money(int dollars, int cents):dollars(dollars), cents(cents){
}
>>>>>>> 33a00e233c449d71739b19a5d3264556309df069
