#include<iostream>
using namespace std;
int main(){
	int n;
	char c;
	cin >> n >> c;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<i+1;k++){
			cout << c;
		}
		for(int m=0;m<i;m++){
			cout << c;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
	}
}
