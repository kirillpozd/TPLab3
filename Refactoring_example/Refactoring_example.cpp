#include <iostream>
#include "Customer.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Movie movies[] = {
		{"Movie_1", 0}, {"Movie_2", 0}, {"Movie_3", 0}, {"Movie_4", 0},
		{"Movie_5", 1}, {"Movie_6", 1}, {"Movie_7", 1}, {"Movie_8", 1},
		{"Movie_9", 2}, {"Movie_10", 2}, {"Movie_11", 2}, {"Movie_12", 2},
	};
	Rental rentals[] = {
		{movies[0], 1}, {movies[1], 2}, {movies[2], 1}, {movies[3], 2},
		{movies[0], 1}, {movies[1], 2}, {movies[2], 3}, {movies[3], 4},
		{movies[4], 1}, {movies[5], 1}, {movies[6], 2}, {movies[7], 3},
		{movies[8], 1}, {movies[9], 2}, {movies[10], 3}, {movies[11], 3},
		{movies[8], 4}, {movies[9], 5}, {movies[10], 6}, {movies[11], 7}
	};
	Customer customer = { "Customer" };	
	customer.addRental(rentals[2]);
	customer.addRental(rentals[8]);
	string result = customer.statement();

	cout << result;
}

