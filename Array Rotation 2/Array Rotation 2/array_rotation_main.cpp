#include"stdafx.h"
#include<iostream>

using namespace std;

void print_array(int[], int);
void rotate_array(int[], int, int);

int main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(ar) / sizeof(ar[0]);
	int d;
	cout << "Enter the number of elements by which you want the sift the array" << endl;
	cin >> d;
	rotate_array(ar, n, d);
	return 0;
}

void rotate_array(int ar[], int n, int d)
{
	//printing the original array

	cout << "Orginal Array" << endl;
	print_array(ar, n);

	//shifting elements of the original array one at a time

	for (int i = 0; i < d; i++)
	{
		int temp = ar[0];
		for (int j = 0; j < n; j++)
		{
			ar[j] = ar[j + 1];
		}
		ar[n - 1] = temp;
	}

	//printing the rotated array

	cout << "Rotated Array" << endl;
	print_array(ar, n);
}

void print_array(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i];
	}
	cout << endl;
}

