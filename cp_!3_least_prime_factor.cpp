#include<bits/stdc++.h>
using namespace std;

#define MAX 1000005
vector <int> p;

int prime[MAX];

void sieve(int n)
{
    
	memset(prime, 0, sizeof(prime));

	prime[0] = 1;
	prime[1] = 1;
	int i;

	for(i = 4; i <= n; i= i+2)
	{
		prime[i] = 1;



	}

	for(i = 3; i * i <= MAX; i = i+2)
	{
		if(prime[i] == 0)
		{
			for(int j = i * i; j <= MAX ; j= j+i)
			{

			prime[j] = 1;
		}

		}
	}

	for(i = 2; i <= MAX; i++)
	{
		if(prime[i] == 0)
		{

			p.push_back(i);
		}
	}
	if(n == 1)
	{

		cout << "1";
	}

	for(i = 0; i <= p.size(); i++)
	{

		if(n % p[i] == 0)
		{

			//n = n/p[i];
			cout << p[i]<<" " ;
			break;


		}

		/*if(n == 1)
		{

			cout << "1";
		}
	}
	*/
	}

	/*if(n == 1)
	{

		cout << "1";
	}
*/

}

int main()
{
	while(1)
	{
	int n; 
	cin >> n;

	sieve(n);
}
}