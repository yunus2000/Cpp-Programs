#include<iostream>
using namespace std;

class String{
	char a[10];
	public:
		char &operator[](int i){
			try{
				if(i > 10){
					throw "Index out of Range!!";
				}
				if(i < 0){
					throw "Index less than 0!!";
				}
				return(a[i]);
			}
			catch(const char* msg){
				cout << msg << endl;
			}
		}
		
		String(char *k){
			for(int i=0;i<10;i++){
				a[i] = *k;
				*k++;
			}
		}
		
		void display(){
			for(int i=0;i<10;i++){
				cout << a[i];
			}
			cout << endl;
		}
};

int main(){
	char a[] = "I'm Yunus";
	String s(a);
	cout << "String is: ";
	s.display();
	cout << "Char at index 2 is: " << s[2] << endl;
	cout << "Char at index 8 is: " << s[8] << endl;
	cout << "Char at index 1 is: " << s[1] << endl;
	cout << "Char at index -1 is: " << s[-1] << endl;
	
	return 0;
}
