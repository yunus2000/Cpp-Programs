#include<iostream>
using namespace std;

#define even(n) n%2


int main(){
	int n;
	cin >> n;
	if(~even(n)){
		cout << "Given number is Even" << endl;
		//cout << even(n);
	}
	else{
		cout << "Given number is Odd" << endl;
		//cout << even(n);
	}
	return(0);
}
