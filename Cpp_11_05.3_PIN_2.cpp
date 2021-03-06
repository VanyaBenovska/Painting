// Cpp_11_05.3_PIN_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include<cmath>   
#include<iomanip>                       
using namespace std;


int main()
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	int n;
	cin >> n;
	int width = 6 * n + 10;

	cout << "/`" << string(n * 2, 'P') << string(n, ' ') << "/`I" << string(n, ' ') << "/`N" << string(n * 2 + 1, ' ') << "N" << endl;

	int k = 0;
	int d = n * 2;
	for (int i = 1; i <= n - 1; i++)
	{
		cout << "| P" << string(n * 2 - 2, ' ') << "P" << string(n, ' ') << "| I" << string(n, ' ') << "| N" << string(k, ' ') << "N" << string(d, ' ') << "N" << endl;
		k++;
		d--;
	}
	cout << "| P" << string(n * 2 - 2, 'P') << "P" << string(n, ' ') << "| I" << string(n, ' ') << "| N" << string(k, ' ') << "N" << string(d, ' ') << "N" << endl;
	k++;
	d--;
	int q = n / 2;
	for (int i = 1; i <= n + 1; i++)
	{
		if (i == n + 1)
		{
			cout << "\\_" << string(q, 'P') << string(n * 2 - q - 1, ' ') << " " << string(n, ' ') << "\\_I" << string(n, ' ') << "\\_N" << string(k, ' ') << "N" << string(d, ' ') << "N" << endl;
		}
		else
		{
			cout << "| " << string(q, 'P') << string(n * 2 - q - 1, ' ') << " " << string(n, ' ') << "| I" << string(n, ' ') << "| N" << string(k, ' ') << "N" << string(d, ' ') << "N" << endl;
			k++;
			d--;
		}
	}
	return 0;
}
