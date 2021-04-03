#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct Pair
{

	int max;
	int min;
};


struct Pair getans(int array[], int n)
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

	else
	{

		maxmin.max = array[1];
		maxmin.min = array[0];
	}

	for(int i = 2; i < n; i++)
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

	struct Pair maxmin;
	int n;
	//int array;

	cin >> n;

	int array[n];

	for(int i = 0;i < n; i++)
	{

		scanf("%d", &array[i]);
	}

	maxmin = getans(array,n);

	cout <<"Minimum: "<<  maxmin.min << endl;
	cout << "Maximum: " << maxmin.max << endl;
}