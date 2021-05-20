#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] > a[i]){
				swap(a[j],a[i]);
			}
		}
	}
	cout << "\nSorted array in Descending Order is:" << endl;
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
