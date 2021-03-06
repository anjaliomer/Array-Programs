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
	cout << "Enter the number of elements by which you want the sift the array"<<endl;
	cin >> d;
	rotate_array(ar, n, d);
    return 0;
}

void rotate_array(int ar[], int n, int d)
{
	//printing the original array
	
	cout << "Orginal Array" << endl;
	print_array(ar, n);

	//creating temporary array

	int *temp = new int[d];
	for (int i = 0; i < d;i++)
	{
		temp[i] = ar[i];
	}

	//shifting elements of the original array

	for (int i = 0; i < n - d;i++)
	{
		ar[i] = ar[i + d];
	}

	//Adding values from the temp array

	int j = 0;
	for (int i = n - d; i < n;i++)
	{
		ar[i] = temp[j++];
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

