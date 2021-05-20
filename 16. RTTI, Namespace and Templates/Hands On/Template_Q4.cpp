#include<iostream>
using namespace std;

template <class t>
void fun (t param){
    cout<<param<<endl;
}
int main(){
    fun(10);
    fun('a');
    return 0;
}

