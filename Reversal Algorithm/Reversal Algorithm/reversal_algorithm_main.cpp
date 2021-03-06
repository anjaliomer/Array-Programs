#include"stdafx.h"
#include<iostream>

using namespace std;

void print_array(int[], int);
void reverse_array(int[], int, int);
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

	reverse_array(ar, 0, d - 1);
	reverse_array(ar, d, n - 1);
	reverse_array(ar, 0, n - 1);

	//printing the rotated array

	cout << "Rotated Array" << endl;
	print_array(ar, n);
}

void reverse_array(int ar[], int first, int last)
{
	while(first<last)
	{
		int temp = ar[first];
		ar[first] = ar[last];
		ar[last] = temp;
		first++;
		last--;
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