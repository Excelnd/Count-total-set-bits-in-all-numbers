// Count total set bits in all numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int countSetBits(int n)
{
	int i = 0;
	int ans = 0;

	while ((1 << i) <= n) {
		bool k = 0;

		int change = 1 << i;

		for (int j = 0; j <= n; j++) {
			ans += k;

			if (change == 1) {
				k = !k;
				change = 1 << i;
			}
			else
			{
				change--;
			}
		}
		i++;
	}
	return ans;
}


int main()
{
	int n = 17;
	cout << countSetBits(n) << endl;

    return 0;
}

