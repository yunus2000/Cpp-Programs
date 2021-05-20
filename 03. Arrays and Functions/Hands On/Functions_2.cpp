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
	int n;
	cout << "Enter Even number greater than 4: " << endl;
	cin >> n;
	for(int i=2;i<=n/2;i++){
		if(isprime(i) && isprime(n-i)){
			cout << n << " " << i << " " << n-i << endl;
			break;
		}
	}
}
