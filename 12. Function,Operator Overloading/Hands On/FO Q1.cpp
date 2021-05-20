#include<iostream>
using namespace std;

void swap(int a,int b){
	cout << "\nInside Swap int" << endl;
	cout << "Before Swapping: " << a << " "  << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << "After Swapping: " << a << " " << b << endl;
}

void swap(double a,double b){
	cout << "\nInside Swap double" << endl;
	cout << "Before Swapping: " << a << " "  << b << endl;
	double c = a;
	a = b;
	b = c;
	cout << "After Swapping: " << a << " " << b << endl;
}

void swap(float a,float b){
	cout << "\nInside Swap float" << endl;
	cout << "Before Swapping: " << a << " "  << b << endl;
	double c = a;
	a = b;
	b = c;
	cout << "After Swapping: " << a << " " << b << endl;
}

int main(){
	swap(1,2);
	swap(1.0,2.0);
	swap(22227.23,3333337.3);
	return 0;
}
