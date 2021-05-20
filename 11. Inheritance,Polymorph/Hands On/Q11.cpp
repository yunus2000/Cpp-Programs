#include<iostream>

using namespace std;

class Base{
    int x;
    public:
        Base(){
            x=0;
        }
        Base(int p1){
            x=p1;
        }
        void show(){
            cout<<x;
        }
};

int main(){
    Base bas(3);
    bas.show();
    return 0;
}
