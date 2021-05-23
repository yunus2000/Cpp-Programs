#include<iostream>
#define DEBUG
using namespace std;

int main(){
    #ifdef DEBUG
        cout<<__LINE__;
    #endif
    return 0;
}
