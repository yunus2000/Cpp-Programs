#include<iostream>
using namespace std;

class shape{
	public:
		int length,breadth;
		shape(){
			length = 0;
			breadth = 0;
		}
		virtual int area() = 0;
		virtual int perimeter() = 0;
};

class rectangle:public shape{
	public:
		rectangle(int l,int b){
			length = l;
			breadth = b;
		}
		
		int area(){
			return(length*breadth);
		}
		
		int perimeter(){
			return(2*(length+breadth));
		}
};

class square: public shape{
	public:
		square(int l){
			length = l;
		}
		
		int area(){
			return(length*length);
		}
		
		int perimeter(){
			return(4*length);
		}
};

class circle:public shape{
	public:
		circle(int l){
			length = l;
		}
		
		int area(){
			return  (22/7)*(length*length);
		}
		
		int perimeter(){
			return(2*(22/7)*length);
		}
};

int main(){
	shape *s;
	/*shape sh;
	s = &sh;
	cout << "Area of Shape: " << s->area() << "\nPerimeter of Shape: " << s->perimeter() << endl;*/
	rectangle r(4,5);
	s = &r;
	cout << "Area of Rectangle: " << s->area() << "\nPerimeter of Rectangle: " << s->perimeter() << endl;
	square sq(5);
	s = &sq;
	cout << "\nArea of Square: " << s->area() << "\nPerimeter of Square: " << s->perimeter()<< endl;
	circle c(5);
	s = &c;
	cout << "\nArea of circle: " << s->area() << "\nPerimeter of Circle: " << s->perimeter() << endl;
	
}
