#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{

	if(a == 0)
	{

		return b;
	}

	return gcd(b%a, a);
}

int phi_function(int n)
{

	int i;
	unsigned int result = 1;

	for(i = 2; i < n; i++)
	{

		if(gcd(i,n) == 1)
		{

			result++;
		} 
	}

	return result;
}


int main()
{

	int n;
	cin >> n;

	cout << phi_function(n) << endl;

	return 0;
}