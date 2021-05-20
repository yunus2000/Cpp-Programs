#include<iostream>
#include<cstring>
using namespace std;

struct EMP{
	char ename[50];
	int eid;
	int eage;
	float esalary;
};

EMP data(EMP e){
	char s[50];
	int n,a;
	float f;
	cout << "Enter Name: ";
	cin >> s;
	cout << "Enter id: "; 
	cin >> n;
	cout << "Enter age: ";
	cin >> a;
	cout <<  "Enter salary: ";
	cin >> f;
	strcpy(e.ename,s);
	e.eid = n;
	e.eage = a;
	e.esalary = f;
	return(e);
}

void printdetails(struct EMP e){
	cout << "\nEmp Name: " << e.ename << "\nEmp Id: " << e.eid << "\nEmp age: " << e.eid << "\nEmp salary: " << e.esalary << endl;
}

int main(){
	EMP e1,e2,e3;
	
	e1 = data(e1);
	e2 = data(e2);
	e3 = data(e3);
	
	cout << endl;
	printdetails(e1);
	printdetails(e2);
	printdetails(e3);
	
	cout << sizeof(EMP) << endl;
	if(sizeof(EMP) == sizeof(char) + sizeof(int) + sizeof(int) + sizeof(float)){
		cout << "Same Size" << endl;
	}
	else{
		cout << "Different Size";
	}
	
	return 0;
}
