#include<iostream>
using namespace std;

int main(){
	int a[10];
	int *ps = a;
	for(int i=0;i<10;i++){
		cin >> *ps;
		*ps++;
	}
	for(int i=9;i>=0;i--){
		*ps--;
		cout << *ps << " ";
	}
	return 0;
}
