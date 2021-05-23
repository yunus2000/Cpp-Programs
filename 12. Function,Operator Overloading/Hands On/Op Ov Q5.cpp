#include<iostream>
using namespace std;

class ascii{
	char c[10];
	int a[10];
	
	public:
		friend ostream &operator<<(ostream &output,ascii &a){
			for(int i=0;i<10;i++){
				output << int(a.c[i]) << " " ;
			}
			return output;
		}
		
		friend istream &operator>>(istream &input,ascii &a){
			//cout << "Hi";
			for(int i=0;i<10;i++){
				input >> a.c[i];
			}
			return input;
		}
};

int main(){
	ascii a;
	cout << "Enter 10 Character Elements: " << endl;
	cin >> a;
	cout << a;
	
	return 0;
}
