#include"stdafx.h"
#include<iostream>

using namespace std;

void print_array(int[], int);
void swap_array(int[], int, int, int);
void rotate_array(int[], int, int);

int main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
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

	//Algorithm Logic

	int i = d;
	int j = n - d;
	while(i != j)
	{
		if (i < j)                                   //when A is shorter
		{
			swap_array(ar, d - i, d + j - i, i);
			j -= i;
		}
		else                                         //when B is shorter
		{
			swap_array(ar, d - i, d, j);
			i -= j;
		}
	}
	
	swap_array(ar, d - i, d, i);                     //Finally swaping A and B

	//printing the rotated array

	cout << "Rotated Array" << endl;
	print_array(ar, n);
}

void swap_array(int ar[], int f1, int f2, int d)
{
	for (int i = 0; i < d; i++)
	{
		int temp = ar[f1+i];
		ar[f1+i] = ar[f2+i];
		ar[f2 + i] = temp;
	}
}


void print_array(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}