#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int c = a[0];
	for(int i=0;i<n;i++){
		if(a[i] > c){
			c = a[i];
		}
	}
	cout << "Largest element is " << c;
}
