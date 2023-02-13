#pragma once
#include "Price.h"
class ChildrenPrice :
    public Price
{
    // Унаследовано через Price
    virtual int getPriseCode() override;

    // Унаследовано через Price
    virtual double getCharge(int daysRented) override;
};

