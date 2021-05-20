#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Before Swapping: " << a << " " << b << endl;
	swap(a,b);
	cout << "After Swapping: " << a << " " << b;
	return(0);
}
