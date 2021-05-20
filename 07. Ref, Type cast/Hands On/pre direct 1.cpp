#include<iostream>
using namespace std;

#define swap(a,b){a = a+b;b = a-b;a = a-b;}

int main(){
	int a,b;
	cin >> a>> b;
	cout << "Before Swap: " << a << " " << b << endl;
	swap(a,b)
	cout << "After Swap: " << a << " " << b;
	return(0);
}
