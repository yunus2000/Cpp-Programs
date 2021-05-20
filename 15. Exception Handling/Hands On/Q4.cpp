#include<iostream>
using namespace std;

class vector{
	int a[10];
	public:
		vector(){
			for(int i=0;i<10;i++){
				a[i] = 0;
			}
		}
		
		vector(int *k){
			int *p = a;
			for(int i=0;i<10;i++){
				*p = *k;
				*p++;
				*k++;
			}
		}
		
		int divide(int x,int y){
			if(y == 0){
				throw "Dividing by zero error!!";
			}
			return(x/y);
		}
		
		vector operator /(vector &v){
			vector k;
			int *p = k.a;
			int *q = this->a;
			int *r = v.a;
			for(int i=0;i<10;i++){
				try{
					*p = divide(*q,*r);
				}
				catch(const char* msg){
					cout << msg << endl;
				}
				*p++;
				*q++;
				*r++;
			}
			return k;
		}
		
		void display(){
			for(int i=0;i<10;i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	int arr1[10]={0,2,3,4,5,6,7,8,9,10};
    int arr2[10]={1,4,9,16,25,36,49,64,81,100};
    vector v1(arr1),v2(arr2),v3;
    v3 = v2/v1;
    cout << endl;
    v2.display();
    v1.display();
    cout << "\nAfter dividing same indexed elements of both arrays we get: " << endl;
	v3.display();
	
	return 0;
}
