#include<iostream>
using namespace std;

class shape{
    public:
        virtual void print() = 0;
};

class rectangle:public shape{
    public:
        void print(){
            cout << "Print of Rectangle" << endl;
        }
};

class square:public shape{
    public:
        void print(){
            cout << "Print of Square" << endl;
        }
};

class circle:public shape{
    public:
        void print(){
            cout << "Print of Circle" << endl;
        }
};

shape* factory(){
    int n = rand();
    if(n%3 == 0){
        return new rectangle;
    }
    else if(n%2 == 0){
        return new square;
    }
    else{
        return new circle;
    }
}

int main(){
    int n1 = 0,n2= 0,n3 = 0;
    
    for(int i=0;i<10;i++){
        shape* s = factory();
        s->print();
        
        rectangle* r = dynamic_cast<rectangle*>(s);
        square* sq = dynamic_cast<square*>(s);
        circle* c = dynamic_cast<circle*>(s);
        if(r){
            r->print();
            n1++;
        }
        if(sq){
            sq->print();
            n2++;
        }
        if(c){
            c->print();
            n3++;
        }
    }
    cout << endl;
    cout << n1 << " rectangle objects" << endl;
    cout << n2 << " square objects" << endl;
    cout << n3 << " circle objects" << endl;
    
    return 0;
}
