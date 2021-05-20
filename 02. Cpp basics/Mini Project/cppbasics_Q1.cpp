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
	int n,a[10];
	cout << "Enter how many numbers needed to find the combination: " << endl;
	cin >> n;
	cout << "Enter Even numbers greater than 4: " << endl;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << "Combinations are: " << endl;
	for(int j=0;j<n;j++){
	    for(int i=2;i<= a[j]/2;i++){
				if(isprime(i) && isprime(a[j]-i)){
					
		            cout << a[j] << " " << i << " " << a[j]-i << endl;
		            break;
		}
	}
	}

}
