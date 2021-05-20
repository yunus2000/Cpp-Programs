#include<iostream>
using namespace std;

class shape{
	public:
		double computearea(){
			
		}
};

class rectangle:public shape{
	public:
		double computearea(int l,int b){
			return(l*b);
		}
};

class square: public shape{
	public:
		double computearea(int a){
			return(a*a);
		}
};

class circle:public shape{
	public:
		double computearea(int r){
			return((22/7)*(r*r));
		}
};

int main(){
	rectangle r;
	square s;
	circle c;
	cout << "Area of Rectnagle: " << r.computearea(4,5) << endl;
	cout << "Area of Square: " << s.computearea(5) << endl;
	cout << "Area of circle: " << c.computearea(5) << endl;
	
}
