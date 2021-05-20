#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0){
		cout << n << " is Positive" << endl;
	}
	if(n < 0){
		cout << n << " is negative" << endl;
	}
	if(n == 0){
		cout << n << " is Neither Positive nor Negative";
	}
}
