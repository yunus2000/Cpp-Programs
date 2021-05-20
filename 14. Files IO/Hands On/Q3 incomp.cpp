#include<iostream>
#include<fstream>
using namespace std;

class vector{
	int a[10];
	public:
		vector(int k){
			
		}
		
		friend ostream &operator <<(ostream &output,vector &v){
			
			return output;
		}
		
		friend istream &operator >>(istream &input,vector &v){
			
			return input;
		}
		
		void display(){
			
		}
};

class main(){
	vector v;
	ofstream fout;
	ifstream fin;
	return 0;
}


