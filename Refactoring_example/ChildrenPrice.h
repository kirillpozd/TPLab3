#pragma once
#include "Price.h"
class ChildrenPrice :
    public Price
{
    // ������������ ����� Price
    virtual int getPriseCode() override;

    // ������������ ����� Price
    virtual double getCharge(int daysRented) override;
};

