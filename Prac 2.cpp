#include<iostream>
using namespace std;

int singledgt(int n){
	int sum = 0,b = n;
	while(b > 9){
		while(n > 0){
			sum += n%10;
			n = n/10;
		}
		b = sum;
		n = sum;
	}
	return b;
}

int main(){
	int n;
	cout << "Enter Size of Array: ";
	cin >> n;
	int a[n];
	cout << "Enter Elements in Array: " << endl;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++){
		if(a[i] > 9){
			a[i] = singledgt(a[i]);
		}
		cout << a[i] << " ";
	}
}
