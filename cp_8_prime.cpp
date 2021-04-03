#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n);

int main()
{

	while(1)
	{


	
	int n;
	cin >> n;

	isPrime(n) ? cout << "true" : cout << "false" << endl;

}

}

bool isPrime(int n)
{

	if(n <= 1)
	{
		return false;
	}

	for(int i = 2; i <n; i++)
	{
		if(n % i == 0)
		{

			return false;
		}

		/*else
		{
			return true;
		}
		*/
	}

	return true;

}