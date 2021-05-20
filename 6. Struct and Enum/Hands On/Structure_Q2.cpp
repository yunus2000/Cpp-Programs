#include<iostream>
using namespace std;

struct student{
	char s_name[50];
	int rollno;
	int mark1;
	int mark2;
	int mark3;
};

student data(student s){
	cout << "Enter Name: ";
	cin >> s.s_name;
	cout << "Enter Roll no: ";
	cin >> s.rollno;
	cout << "Enter Mark 1: ";
	cin >> s.mark1;
	cout << "Enter Mark 2: ";
	cin >> s.mark2;
	cout << "Enter Mark 3: ";
	cin >> s.mark3;
	return(s);
}

int avg(student s){
	int avg = (s.mark1 + s.mark2 + s.mark3)/3;
	return(avg);
}

int main(){
	student s[5];
	for(int i=0;i<5;i++){
		s[i] = data(s[i]);
		cout << "Average Marks of Student " << i+1 << " is: " <<avg(s[i]) << endl;
	}
	
	int cl = avg(s[0]), ch = avg(s[0]);
	string m = s[0].s_name, n = s[0].s_name;
	for(int i=0;i<5;i++){
		if(avg(s[i]) < cl){
			cl = avg(s[i]);
			m = s[i].s_name;
		}
		if(avg(s[i]) > ch){
			ch = avg(s[i]);
			n = s[i].s_name;
		}
	}
	cout << "Lowest Avg is: " << cl << " Name of the student is: " << m << endl;
	cout << "Highest Avg is: " << ch << " Name of the student is: " << n << endl;
}
