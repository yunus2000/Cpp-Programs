#include<iostream>
using namespace std;

int main(){
	int *n = NULL;
	n = new int;
	cout << "Enter the Number: " << endl;
	cin >> *n;
	cout << "Output of Entered Number is: " << endl;
	cout << *n;
	delete n;
	
	return 0;
}
