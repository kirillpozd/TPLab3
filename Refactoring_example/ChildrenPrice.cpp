#include "ChildrenPrice.h"
#include "Movie.h"
int ChildrenPrice::getPriseCode()
{
    return Movie::CHILDREN;
}

double ChildrenPrice::getCharge(int daysRented)
{
    double thisAmount = 1.5;
    if (daysRented > 3)
        thisAmount += (daysRented - 3) * 1.5;
    return thisAmount;
}
