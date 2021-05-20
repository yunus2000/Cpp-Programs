#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int c,flag = 0;
	cin >> c;
	for(int i=0;i<n;i++){
		if(a[i] == c){
			flag = i;
			break;
		}
	}
	
	if(flag == 0){
		cout << "!!!Element is not Found in array!!!";
	}
	else{
		cout <<  "***Element " << c << " is Found and its index is " << flag << "***";
	}
}
