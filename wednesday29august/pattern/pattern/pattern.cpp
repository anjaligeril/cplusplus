// pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*	int noOfLevel,i,j;
		cout << "enter the no of levels";
		cin >> noOfLevel;
		for (i = 1; i <= noOfLevel; i++) {
			for(j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}*/

		/*for (int i =5; i >= 1; i--) {
			for ( int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}

		for (int i = 1; i <=5; i++) {
			for ( int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}*/
	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
        
		}

		cout << "\n";

	}
	return 0;
}