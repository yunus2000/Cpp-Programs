#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n == 1 || n == 0){
		cout << n << " is neither Prime nor Composite" << endl;
	}
	else{
		int count = 0;
		for(int i=2;i<n;i++){
			if(n%i == 0){
				count =  1;
				break;
			}
		}
		if(count == 0){
			cout << n << " is Prime Number";
		}
		else{
			cout << n << " is Composite Number";
		}
	}
}
