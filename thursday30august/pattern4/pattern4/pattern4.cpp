#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int star = 1;
	for (int i = 9; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= star; k++) {
			cout << k;
		}
		for (int k = star; k >= 1; k--) {
			cout << k;
		}
		cout << "\n";
		star++;
	}
	star = 9;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= star; k++) {
			cout <<k;
		}
		for (int k = star; k >= 1; k--) {
			cout << k;
		}
		cout << "\n";
		star--;
	}
	return 0;
}
