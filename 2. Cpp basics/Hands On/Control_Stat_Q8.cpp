#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){
	int n;
	cin >> n;
	stringstream ss;
	ss << n;
	string num;
	ss >> num;
	int a = num.size();
	int c = 0, b = n;
	while(b){
		c = c + (b%10)*pow(10,a-1);
		b = b/10;
		a--;
	}
	if(c == n){
		cout << n << " is Palindrome";
	}
	else{
		cout << n << " is not Palindrome";
	}
}
