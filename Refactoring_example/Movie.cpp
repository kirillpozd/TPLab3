#include "Movie.h"

void Movie::setPriceCode(int arg) {
	if (_price != NULL)
		delete _price;
	switch (arg) {
	case Movie::REGULAR:
		_price = new RegularPrice();
		break;

	case Movie::NEW_RELEASE:
		_price = new NewReleasePrice();
		break;

	case Movie::CHILDREN:
		_price = new ChildrenPrice();
		break;
	}
}

double Movie::getCharge(int daysRented) {
	double thisAmount = 0;
	thisAmount = _price->getCharge(daysRented);
	return thisAmount;
}

int Movie::getBonus(int daysRented)
{
	// Начисление бонусных очков
	return _price->getBonus(daysRented);
}