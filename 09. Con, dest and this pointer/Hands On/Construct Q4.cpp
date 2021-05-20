#include<iostream>
using namespace std;

class sample{
	private:
		int x;
		double y;
	public:
		sample();
		sample(int a);
		sample(int a,int b);
		sample(int a,double b);
};

sample::sample(){
	x = 0;
	y = 0;
	cout << "x: " << x << "\ny: " << y<< endl;
}

sample::sample(int a){
	x = a;
	y = 0;
	cout << "x: " << x << "\ny: " << y <<endl;
}

sample::sample(int a,int b){
	x = a;
	y = b;
	cout << "x: " << x << "\ny: " << y <<endl;
}

sample::sample(int a,double b){
	x = a;
	y = b;
	cout << "x: " << x << "\ny: " << y <<endl;
}

int main(){
	sample e;
	
	int n;
	cout << "\nEnter one integer: " << endl;
	cin >> n;
	sample e1(n);
	
	int n1,n2;
	cout << "\nEnter two integers: " << endl;
	cin >> n1 >> n2;
	sample(n1,n2);
	
	int a;
	double b;
	cout << "\nEnter one integer and double: "<< endl;
	cin >> a >> b;
	sample(a,b);
	
	return 0;
}
