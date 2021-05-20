#include<iostream>
using namespace std;
main()
{
	int n,r = 0;
	cin >> n;
	r = n/60;
	cout << n / 3600 << "hrs " << r%60 << "min " << n%60 << "sec";
}
