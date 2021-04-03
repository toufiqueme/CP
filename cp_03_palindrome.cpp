#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;


void check_palindrome(char a[]);

int main()
{

	char a;

	cin >> a;

	check_palindrome(a);
}

void check_palindrome(char a[])

{

	int upper = strlen(a)-1;

	int lower = 0;
	//int upper = len -1;

	while(upper > 1)
	{
		if(a[lower++] == a[upper--])
		{
			cout << "Palindrome";
			return;

		}

		//else
		//{
		//	cout << "Not Palindrome";
		//}
	}

	/*if(a_1 == a)
	{

		cout << "Palindrome";
	}

	else
	{

		cout << "Not Palindrome";
	}
	*/
	cout << "Not Palindrome";

}