#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n)
	{
		cout << n%10;
		n = n/10;
	}
}
