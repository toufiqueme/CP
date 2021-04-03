#include<bits/stdc++.h>
using namespace std;


void Sieve(int n)
{

	bool prime[n+1];

	memset(prime, true, sizeof(prime));

	//int i;

	for(int i = 2; i * i <= n; i++)
	{

		if(prime[i] == true)
		{

			for(int j = i * i; j <= n; j= j+i )
			{

				prime[j] = false;
			}
		}
	}

	for(int i = 2; i <= n; i++)
	{
		if(prime[i] == true)
		{

			cout << i << " ";
		}
	}
}


int main()
{

	int n;
	cin >> n;

	Sieve( n);
	return 0;
}