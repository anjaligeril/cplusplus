#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	// even or odd

	/*int num1;
	cout << "enter the number ";
	cin >> num1;
	if ((num1 % 2) == 0){
		cout << "the number is even";
	}
	else {
		cout << "the number is odd";
	}*/

	/*wage problem*/

	int minwage = 30,hours,amount,extra, tax,pay;
	cout << "Enter the hours";
	cin >> hours;
	if (hours > 40) {
		extra = hours - 40;
		amount = (minwage*40) + (minwage*1.5*extra);
	}
	else {
		amount = minwage * hours;
	}
	cout << "The total amount is \n " << amount;
	tax = ((amount * 20) / 100);
	//cout << tax;
	pay = amount - tax;
	cout << "\n amount after tax \n" << pay;

	return 0;
}