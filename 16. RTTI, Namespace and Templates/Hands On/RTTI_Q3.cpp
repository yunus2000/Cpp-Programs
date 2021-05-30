#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void func()=0;
};

class Circle:public Shape{
    public:
        void func(){
            cout<<"it is virtual function";
        }
};
class Rect:public Shape{
    public:
        void func(){
            cout<<"it is virtual function";
        }
};

int main(){
    Shape* pShape = new Circle;
    Circle *pCircle = dynamic_cast<Circle*>(pShape);
    if(pCircle == NULL){
    	cout << "1st pCircle ERROR" << endl;
	}
    
    pShape = new Rect;      // Rect derived from Shape
    pCircle = dynamic_cast<Circle*>(pShape);
    
    if(pCircle == NULL){
    	cout << "2nd pCircle ERROR";
	}
    
    return 0;
}
