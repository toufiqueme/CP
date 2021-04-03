#include<bits/stdc++.h>
using namespace std;

void number_of_divisors(int n)
{

	int i;

	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			cout << i << " ";
		}
	}
}

int main()
{

	int n;
	cin >> n;
	number_of_divisors(n);

	return 0;
}