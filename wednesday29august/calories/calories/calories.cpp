// calories.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	/*int noOfFood, calories, totalCalories=0,i;
	cout << "Enter the number of food items \t ";
	cin >> noOfFood;
	for (i = 0; i < noOfFood; i++) {
		cout << "enter the calorie of \t" << i+1 << "\n";
		cin >> calories;
		totalCalories = totalCalories + calories;
	}
	cout << "The total amount of calories is \t" << totalCalories; */

	int noOfFood, calories, totalCalories = 0, i=1;
	cout << "Enter the number of food items \t ";
	cin >> noOfFood;
	while(noOfFood>0) {
		cout << "enter the calorie of \t" << i<< "\n";
		cin >> calories;
		totalCalories = totalCalories + calories;
		noOfFood--;
		i++;
	}
	cout << "The total amount of calories is \t" << totalCalories;
	return 0;

}