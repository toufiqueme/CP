#include<bits/stdc++.h>
#include<string>

using namespace std;

int calculate(string n);

int main()
{

	string n;

	cin >> n;

	cout <<calculate(n);
}

int calculate(string n)
{

	int sum = 0;

	for(int i = 0; i < n.length(); i++)
	{
		sum = sum + n[i] - 48;

	}
	return sum;
}