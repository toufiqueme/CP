#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

	if(a == 0)
	{
		return b;
	}

	return gcd(a, a % b);
}

int main()
{

	int a, b;
	cin >> a >> b;

	cout << gcd(a,b);
}