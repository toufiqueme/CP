#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{

	float result = n;

	int p;

	for(p = 2; p * p <= n; p++)
	{

		if(n % p == 0)
		{

			while(n % p == 0)
			{
				n = n/p;
			}

			return result*(1.0- (1.0/(float)p));
		}
	}

	if(n > 1)
	{

		return result*(1.0- (1.0/(float)p));
	}
	
}


int main()
{

	int n;
	cin >> n;

	cout << phi(n) << endl;

	return 0;
}