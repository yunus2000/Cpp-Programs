#include<iostream>

using namespace std;

int main(){
    int *ptr=new int[3];
    cout<<"Enter the number you want to increase\n";
    int m;
    for(int i=0;i<3;i++){
        cin>>*(ptr+i);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>*(ptr+m+i);
    }

    for(int i=0;i<m+3;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}
