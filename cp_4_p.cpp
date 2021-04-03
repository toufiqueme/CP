#include<bits/stdc++.h>
#include<iostream>


using namespace std;

struct Pair
{
	int max;
	int min;
};

struct Pair getvalue(int array[], int n)
{

	struct Pair maxmin;

	if(n == 1)
	{
		maxmin.max = array[0];
		maxmin.min = array[0];

		return maxmin;
	}

	if(array[0] > array[1])
	{
		maxmin.max = array[0];
		maxmin.min = array[1];
	}
	else if(array[1]>array[0])
	{

		maxmin.max = array[1];

		maxmin.min = array[0];
	}

	int i;

	for(i = 2; i < n; i++)
	{

		if(array[i] > maxmin.max)
		{
			maxmin.max = array[i];
		}

		else if(array[i] < maxmin.min)
		{
			maxmin.min = array[i];
		}

	}

	return maxmin;
}


int main()

{

	int n;
	struct Pair maxmin;


	cin >> n;
	int array[n];

	for(int i = 0;i < n; i++)
	{

		scanf("%d", &array[i]);
	}

	maxmin =  getvalue(array,n);

	cout << "Maximum: " << maxmin.max << endl;
	cout << "Minimum: " << maxmin.min << endl; 
}