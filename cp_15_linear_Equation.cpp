#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{

	if(a == 0)
	{

		return b;
	}

	return gcd(b % a, a);
}

bool calculate_linear_equation(int a, int b, int c)
{

	return (c%(gcd(a,b)) == 0);
}

int main()
{

	int a, b, c;

	cin >> a >> b >> c;

	calculate_linear_equation(a, b, c) ? cout << "Possible" : cout << "Not Possible";
}