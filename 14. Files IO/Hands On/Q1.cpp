#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
   fstream myfile,myfile2;
   ofstream outfile;
   ifstream infile;
   myfile.open("student_unformatted.txt",ios::in);
   
   myfile2.open("student_formatted.txt",ios::out);
   if(myfile.is_open()){
   	string l;
   	while(getline(myfile,l)){
   		myfile2 << l;
	   }
	   myfile.close();
   }
   
   if(myfile2.is_open()){
   	string s;
   	while(getline(myfile2,s)){
   		cout << s << endl;
	   }
   }
   myfile2.close();
   
   return 0;
}
