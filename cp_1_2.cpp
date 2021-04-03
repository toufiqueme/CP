//recursive way to reverse an array

#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

void reverse(int array[], int start, int end);
void print(int array[], int n);
int main()
{

	int array[] = {1, 2,3,4,5};
	int n;
	n = sizeof(array)/sizeof(int);
	cout << "Original Array: ";
	print( array, n);



	int start = 0;
	int end = n-1;
	cout << "Reverse Array: ";

	reverse(array, start, end);
	print(array, n);
}

void reverse(int array[], int start, int end)
{

	if(start >= end)
	{

		return;
	}

	int temp;

	temp = array[start];
	array[start] = array[end];
	array[end] = temp;
	start++;
	end--;

	reverse(array,start, end);

}

void print(int array[], int n)
{

	for(int i = 0; i < n; i++)
	{

		cout << array[i] << " ";
	}

	cout << endl;
}