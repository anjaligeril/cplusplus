#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int star = 1;
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= star; k++) {
			cout << "*";
		}
		for (int k = star; k >1; k--) {
			cout << "*";
		}
		cout << "\n";
		star++;
	}
	star = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= star; k++) {
			cout << "*";
		}
		for (int k = star; k >1; k--) {
			cout << "*";
		}
		cout << "\n";
		star--;
	}
	return 0;
}

