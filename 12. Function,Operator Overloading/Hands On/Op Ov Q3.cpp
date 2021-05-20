#include<iostream>
using namespace std;

class ascii{
	char a[10];
	int b[10];
	
	public:
		   friend ostream &operator << (ostream &output,const ascii &a){
				output << "Given Characters are: " << endl;
				for(int i=0;i<10;i++){
					output << a[i] << " ";
				}
				cout << "Ascii values are: " << endl;
				for(int i=0;i<10;i++){
					b[i] = int(a[i]);
					output << b[i] << " ";
				}
				return(output);
			}
			
			friend istream &operator >> (istream &input, ascii &a){
				cout <<  "Enter 10 charachters: " << endl;
				for(int i=0;i<10;i++){
					input >> a[i] ;
				}
				return(input);
			}
		
};

int main(){
	ascii a;
	cin >> a;
	cout << a;
	
	return(0);
}
