#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int count = 0, sum = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2 == 0){
			count++;
			sum += a[i];
		}
	}
	cout << "Even numbers count in array is: " << count << endl;
	cout << "Even numbers sum in array is: " << sum;
}
