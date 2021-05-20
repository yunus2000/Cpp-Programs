 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sqrsum(int n){
	int sum = 0;
	while(n){
		sum += pow(n%10,2);
		n = n/10;
	}
	return sum;
}

bool happynum(int n){
	int fast,slow;
	fast = sqrsum(sqrsum(n));
	slow = sqrsum(n);
	while(fast != slow){
		fast = sqrsum(sqrsum(fast));
		slow = sqrsum(slow);
	}
	if(slow == 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cin >> n;
	if(happynum(n)){
		cout << n << " is Happy Number";
	}
	else{
		cout << n << " is Unhappy Number";
	}
}
