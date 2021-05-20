#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	int i = 0, num = 0, r = 0;
	while(n){
		r = n%10;
		if(r == 9){
			r = -1;
		}
		num = num + (r+1)*pow(10,i);
		i++;
		n = n/10;
	}
	cout << num;
}
