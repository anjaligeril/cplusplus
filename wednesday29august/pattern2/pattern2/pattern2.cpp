// pattern2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int space = 1;
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (space > 1) {
			for (int k = 1; k < space; k++) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		space++;
	}
	space =10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		if (space > 1) {
			for (int k = space; k > 1; k--) {
				cout << " ";
				cout << " ";
			}
		}
		for (int l = 1; l <= i; l++) {
			cout << "*";
		}

		cout << "\n";
		space--;
	}

	return 0;
}