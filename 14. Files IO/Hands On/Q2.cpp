#include<iostream>
#include<fstream>
using namespace std;

ostream &operator<<(ostream &output,fstream &M){
	M.open("Imp_Messages.txt",ios::in);
	if(M.is_open()){
		string s;
		while(getline(M,s)){
			output << s ;
		}
	}
	M.close();
	return output;
}

int main(){
	int i = 10; float f = 12.2; char c = 'L';
	cout << "Before: " << endl;
	cout << i << " " << f << " " << c << endl;
	fstream myfile,M;
	myfile.open("Imp_Messages.txt",ios::out);
	if(myfile.is_open()){
		string s;
		cout << "\nEnter String: ";
		getline(cin,s);
		myfile << s;
	}
	myfile.close();
	cout << "\nAfter: " << endl;
	cout << i << " "<< M << " "<<f << " " << c << endl;
	
	return 0;
}
