#include<iostream>

using namespace std;

#define DIVIDE_BY_TWO(x) x/2
#define MULTIPLY_BY_TWO(x) x*2

int main(){
    int n;
    cin>>n;
    cout<<"For the given number\nMultiply by 2 is "<<MULTIPLY_BY_TWO(n)<<"\nDivide by 2 is "<<DIVIDE_BY_TWO(n);
    return 0;
}
