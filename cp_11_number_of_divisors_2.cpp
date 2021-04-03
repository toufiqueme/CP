#include<bits/stdc++.h>
using namespace std;

void number_of_divisors(int n)
{

	int i;

	vector <int> v;

	for(i = 1; i*i <= n; i++)
	{

		if(n % i == 0)
		{
			if(n / i == i)
			{

				cout << i<<" ";
			}
			else

			{
				cout << i << " ";

				v.push_back(n / i);
			}
		}
	}

	for(i = v.size()-1; i >= 0; i--)
	{

		cout << v[i] << " ";
	}
}

int main()
{

	int n;

	cin >> n;

	number_of_divisors(n);

	return 0;
}