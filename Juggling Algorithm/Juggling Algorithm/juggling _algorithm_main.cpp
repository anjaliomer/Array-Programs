#include"stdafx.h"
#include<iostream>

using namespace std;

void print_array(int[], int);
int gcd(int, int);
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

	//Determinig the greatest common divisor

	int g = gcd(n, d);

	//Now juggling the elements

	for (int i = 0; i < g; i++)
	{
		int temp = ar[i];
		int j=i;
		while(1)
		{
			int k = (j + d)%n;

			if (k == i)
				break;

			ar[j] = ar[k];
			j = k;
		}
		ar[j] = temp;
	}

	//printing the rotated array

	cout << "Rotated Array" << endl;
	print_array(ar, n);
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

void print_array(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ar[i]<<" ";
	}
	cout << endl;
}

