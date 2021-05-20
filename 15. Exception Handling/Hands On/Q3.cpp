#include<iostream>
#include<fstream>
#define size 10
using namespace std;

int main(){
	fstream myfile;
	try{
		myfile.open("file.txt",ios::out);
		if(myfile.is_open()){
			cout << "File is Opened";
		}
		else{
			throw "File Openning error";
		}
	}
	catch(const char* msg){
		cout << msg << endl;
	}
	
	int fd,n;
	char fname[10],text[20];
	
	return 0;
}
