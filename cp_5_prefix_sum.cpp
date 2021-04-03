#include<bits/stdc++.h>
using namespace std;

void calculate_prefix_sum(int array[],int  n, int prefix_sum[]);



int main()
{

	//while(1)
	//{



	int n;
	cin >> n;

	if(n == 9999)
	{
		return 0;
	}
	int array[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	int prefix_sum[n];

	calculate_prefix_sum(array, n, prefix_sum);
}

//
void calculate_prefix_sum(int array[],int  n, int prefix_sum[])
{

	int i;

	prefix_sum[0] = array[0];

	for(i = 1; i < n; i++)
	{

		prefix_sum[i] = prefix_sum[i-1] + array[i]; 
	}

	for( i = 0;  i< n; i++)
	{

		cout << prefix_sum[i] << " ";
	}
}