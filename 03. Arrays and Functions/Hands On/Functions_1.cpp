#include<iostream>
using namespace std;

bool isprime(int n){
	int flag = 0;
	for(int i=2;i<n;i++){
		if(n%i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << "Prime numbers between " << a << " & " << b << " are: ";
	for(int i=a; i<=b;i++){
		if(isprime(i)){
			cout << i << " ";
		}
	}
}
