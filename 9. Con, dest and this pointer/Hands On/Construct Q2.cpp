#include<iostream>
using namespace std;

class point{
	public:
		int x,y;
		point(int a,int b):x(a),y(b){
		}
		
		void print(void){
			cout << "X is: " << x << endl;
			cout << "Y is: " << y << endl;
		}
};

int main(){
	point p(2,3);
	p.print();
	return 0;
}
