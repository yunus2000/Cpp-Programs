#include<iostream>
using namespace std;

struct DATA{
	int num1;
	int num2;
	int num3;
	int avg;
};

DATA calcavg(DATA *e){
	e->avg = (e->num1 + e->num2 + e->num3)/3;
	return *e;
}

int main(){
	DATA e;
	int n1,n2,n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	e.num1 = n1;
	e.num2 = n2;
	e.num3 = n3;
	e = calcavg(&e);
	cout << e.avg;
	
	return 0;
}
