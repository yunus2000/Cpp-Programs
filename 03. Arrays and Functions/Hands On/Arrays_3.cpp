#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "Given Matrix is:" << endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Transpose Matrix is:" << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[j][i] << "\t";
		}
		cout << endl;
	}
}
