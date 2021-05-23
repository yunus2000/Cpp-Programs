#include<iostream>
#include<fstream>

using namespace std;

int main()
{

//Creating an input stream to read the content of a file
ifstream ifstream_ob;
/*fstream m;
m.open("File1.txt",ios::out);
if(m.is_open()){
	string s;
	cout << "Enter String: ";
	cin >> s;
	m << s;
}
m.close();*/


//Opening a file named country1.txt to read its content
ifstream_ob.open("File1.txt", ios::in);

cout<<"The first location in the file : " <<ifstream_ob.tellg() << "\n";

char ch;


cout<<"\nReading the content of file : \n";

//Read the file until EOF is reached
while(ifstream_ob)
{
ch = ifstream_ob.get(); 
cout<<ch;	
}

//Setting the EOF flag off, to allow the access of file again for reading
ifstream_ob.clear();

cout<<"\n\nReading the content of file once again : \n";


//Taking the get pointer at the zero byte location from the beginning of the file
ifstream_ob.seekg(-40, ios::end);

//Reading the content of the file again
while(ifstream_ob)
{
ch = ifstream_ob.get(); 
cout<<ch;
}

return 0;
}
