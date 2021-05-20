#include<iostream>
using namespace std;

int main(){
	int a[][];
	cin >> a[][];
	int m = sizeof(a);
	int n = sizeof(a[0]);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
