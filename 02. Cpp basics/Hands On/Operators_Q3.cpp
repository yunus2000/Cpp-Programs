#include<iostream>
#include<string>
#include<sstream>
using namespace std;

char to_string(int n){
	stringstream ss;
	ss << n;
	string s;
	ss >> s;
	return s[0];
}

int main()
{
	int a;
	cout << "Enter the Number: ";
	cin >> a;
	string s = string(8,'0');
	string s2 = "";
	while(a > 0){
		s2 += to_string(a%2);
		a = a/2;
	}
	int n = s2.length();
	int j = s.length() - s2.length();
	for(int i=s.length()-1;i>=j;i--){
		s[i] = s2[n-i+j-1];
	}
	cout << s << endl;

	//Set bit
	int indx1;
	cout << "\nEnter the index value u need to set between 0 to 7: ";
	cin >> indx1;
	cout << "Before: " << s;
	s[7-indx1] = '1';
	cout << " After: " << s << endl;
	
	//Show bit
	int indx2;
	cout << "\nEnter the index bit u need to see: ";
	cin >> indx2;
	cout << "Value at Given index is: " << s[7-indx2] << endl;
	
	//Clear bit
	int indx3;
	cout << "\nEnter the index value u need to clear between 0 to 7: ";
	cin >> indx3;
	cout << "Before: " << s;
	s[7-indx3] = '0';
	cout << " After: " << s << endl;
	
	return 0;
}
