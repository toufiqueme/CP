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

	if(n==1)
	{
		maxmin.max = array[0];
		maxmin.min = array[0];

		return maxmin;
	}

	//if(n==2)
	//{

		if(array[0] > array[1])
		{

			maxmin.max = array[0];
			maxmin.min = array[1];
		}
	//}

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
			else if(array[i] < maxmin.max)
			{

				maxmin.min = array[i];
			}
		}

		return maxmin;


}


int main()
{
	int n;
	cin>> n;
	int array[n];

	for(int i = 0; i < n; i++)
	{

		scanf("%d", &array[i]);
	}

	struct Pair minmax = getvalue(array, n);

	cout << minmax.min << endl;

	cout << minmax.max <<endl;

}