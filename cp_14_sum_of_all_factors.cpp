#include<bits/stdc++.h>
using namespace std;

int sum_of_all_factors(int n)
{

	if(n == 1)
	{

		return 1;
	}

	int result = 0;

	int i;

	for(i = 2; i * i <= n; i++)
	{

		if(n % i == 0)
		{
			if((n / i) == i)
			{
				result = result + i;
			}
			else
			{

			result = result + i + n/i;
		}

		}
	}

	return (result+ n+ 1);
}

int main()
{

	int n;
	cin >> n;
	cout << sum_of_all_factors(n);

	//return 0;
}