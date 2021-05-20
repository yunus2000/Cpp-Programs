#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int g = 1;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<g;k++){
			if(k < i+1){
				cout << k+1;
			}
			else{
				cout << "*";
			}
		}
		
		g = g + 2;
		cout << endl;
	}
	g = g-4;
	for(int i=0;i < n-1;i++){
		for(int j=0;j<i+1;j++){
			cout << " ";
		}
		for(int k=g;k > 0;k--){
			if(k > g/2 + 1){
				cout << "*";
			}
			else{
				cout << k;
			}
		}
		
		g = g - 2;
		cout << endl;
	}
}
