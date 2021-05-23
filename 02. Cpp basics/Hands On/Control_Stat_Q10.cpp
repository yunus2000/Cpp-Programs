#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the Number to find Factorial of it: ";
	cin >> n;
	int fact = 1;
	
	if(n == 0 or n == 1){
		cout << 1;
	}
	else{
		do{
			fact *= n;
			n--;
		}
		while(n > 0);
		cout << fact;
	}
	
	return 0;
}
