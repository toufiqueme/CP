#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int array[n];

	for(int j= 0; j<n;j++)
	{

		scanf("%d",&array[j]);
	}

	for(int i = 0;i < n; i++)
	{
		sum = sum+array[i];


	}
	cout << sum <<endl;

	return 0;
}