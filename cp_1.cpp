/*Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}
*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void reverse(int array[], int start, int end);
void print(int array[], int n);

int main()
{
	//cout << "Input array: ";


	int array[]= {1,2,3,4};
	int n;
	cout << "Input array: ";
	//print(array, n);

	n = sizeof(array)/ sizeof(int);
	print(array, n);
	int start = 0;
	int end = n-1;

	reverse(array,start, end);

	cout << "Output Array: ";
	print(array, n);
}

void reverse(int array[], int start,int end)
{

	while(start < end)
	{
		int temp = array[start];

		array[start] = array[end];
		array[end] = temp;
		start = start+1;
		end = end-1;
	}
}

void print(int array[], int n)
{
	for(int i = 0; i < n; i++)
	{

		cout << array[i] << " ";
	}

	cout << endl;


}
