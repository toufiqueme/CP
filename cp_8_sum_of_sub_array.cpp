#include<bits/stdc++.h>
using namespace std;

int max_sub_array(int array[], int size)
{

	int max_so_far = 0;
	int max_ending_here = 0;

	int i;

	for(i = 0; i < size; i++)
	{

		max_ending_here = max_ending_here + array[i];

		if(max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
		}

		if(max_ending_here < 0)
		{

			max_ending_here = 0;
		}
	}

	return max_so_far;
}

int main()

{

	int size;
	cin>> size;


	int array[size];

	for(int i = 0; i < size; i++)
	{



	scanf("%d", &array[i]);
     
    }
	int d = max_sub_array(array, size);

	cout << d << endl;

	return 0;

}