#pragma once
class Price
{
public:
	virtual int getPriseCode() = 0;
	virtual double getCharge(int daysRented) = 0;
	virtual int getBonus(int daysRented) {
		return 1;
	}
};

