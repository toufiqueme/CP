#include<bits/stdc++.h>
using namespace std;

int calculate_modular_multiplicative_inverse(int a, int m)
{

	int x;

	for(int x = 1; x <= m; x++)
	{

		if(((a % m) * (x % m ))% m == 1)

		{

			return x;
		}
	}
}

int main()
{

	int a, m;

	cin >> a >> m;

	cout << calculate_modular_multiplicative_inverse(a, m) << endl;
	return 0;
}