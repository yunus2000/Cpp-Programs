#include<iostream>
using namespace std;

template <class T>
void swap(T *a,T *b){
	a = a + b;
	b = a - b;
	a = a - b;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Swap for integers: " << a << " " << b;
	swap(a,b);
	cout << " | " << a << " " << b << endl;
	
	char c,d;
	cin >> c >> d;
	cout << "Swap for Characters: " << c << " " << d;
	swap(c,d);
	cout << " | " << c << " " << d << endl;
	
	double e,f;
	cin >> e >> f;
	cout << "Swap for double: " << e << " " << f;
	swap(e,f);
	cout << " | " << e << " " << f << endl;
	return 0;
}
