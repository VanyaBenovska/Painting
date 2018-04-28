// Cpp_11_05.2_Marguerita.cpp : Defines the entry point for the console application.
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
	int width = 8 * n + 2;
	//height =

	//TOP LINE:
	cout << "'&$" << string(width - 3, '\'') << endl;

	//TOP SECOND
	int r = 2, k = width - 3;
	for (int i = 0; i < n - 1; i++)
	{
		cout << string(r, '\'') << "\\" << string(k, '\'') << endl;
		r++;
		k--;
	}
	
	//MID TOP
	cout << "^";
	for (int i = 0; i < n * 4; i ++)
	{
		cout << "*^";
	}
	cout << "\'" << endl;

	r++;
	k--;
	int d = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int empties = width - (d + 1) - 4 - d - (r - 2 - d);
		cout << string(d, '\'') << "\\\\" << string(r - 2 - d, ' ') << "\\" <<
			string(width - (d + 1) - 4 - d - (r - 2 - d) - 1, ' ') << "//" << string (d + 1, '\'') << endl;
		r++;
		k--;
		d++;
	}

	cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), '~') << "/" << string(d + 1, '\'') << endl;
	d++;
	for (int i = 0; i < n - 2; i++)
	{
		cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), ' ') << "/" << string(d + 1, '\'') << endl;
		d++;
	}

	cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), '_') << "/" << string(d + 1, '\'') << endl;
	d++;
	cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), '.') << "/" << string(d + 1, '\'') << endl;
	d++;
	
	for (int i = 0; i < n * 2 - 2; i++)
	{
		cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), ' ') << "/" << string(d + 1, '\'') << endl;
		d++;
	}
	cout << string(d, '\'') << "\\" << string(width - (2 * d + 3), '_') << "/" << string(d + 1, '\'') << endl;
	d++;

	for (int i = 0; i < n * 2 + 1; i++)
	{
		cout << string(d, '\'') << "|||" << string(width - 3 - d, '\'') << endl;
	}
	cout << string(width - 1, '_') << "\'" << endl;
	cout << "\'" << string(width - 3, '-') << "\'\'" << endl;
	cout << endl;
	return 0;
}

