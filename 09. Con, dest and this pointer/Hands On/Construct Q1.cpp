#include<iostream>
using namespace std;

class point{
	public:
		point(void){
			cout << "Point Object is Created"<< endl;
		}
};

class queue{
	public:
		queue(void){
			cout << "Queue Object is created" << endl;
		}
};

class employee{
	public:
		employee(void){
			cout << "Employee Object is Created" << endl;
		}
};

int main(){
	point p;
	queue q;
	employee e;
	
	
	return 0;
}
