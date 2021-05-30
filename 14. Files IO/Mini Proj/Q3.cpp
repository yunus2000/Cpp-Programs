#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
using namespace std;

struct publisher{
	char pub_name[50];
	int pub_id,books_sold;
	float total_sale;
};

void fputc(char c,fstream &m1){
	m1 << c;
}

void fgetc(){
	fstream m1;
	m1.open("story.txt",ios::in);
	char c;
	if(m1.is_open()){
		while(m1 >> noskipws >> c){
		   cout << c;
	    }
	    cout << endl;
	}
	else{
		cout << "Not Open" << endl;
	}
	m1.close();
}

void fputs(){
	fstream m1;
	m1.open("story.txt",ios::app);
	int n;
	cout << "\nEnter Number of Names needed to Add: ";
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cout << "Enter the Name " << i+1 << " :";
		cin >> s;
		m1 << "Name " << i <<": " << s;
		fputc('\n',m1);
	}
	m1.close();
}

void fgets(){
	fstream m1;
	m1.open("story.txt",ios::in);
	string l;
	while(getline(m1,l)){
		cout << l << endl;
	}
	m1.close();
}

void fwrite(publisher &p,int n,fstream &m2){
	m2 << "Name: " << p.pub_name << endl;
	m2 << "Publisher ID: " + p.pub_id << endl;
	m2 << "Books Sold: " + p.books_sold << endl;
	m2 << "Sales Value: " << p.total_sale << endl;

}

void fread(publisher &p,int n,fstream &m2){
	fstream m;
	m.open("publisher.txt",ios::in);
	string l;
	while(getline(m,l)){
		cout << l << endl;
	}
	cout << endl;
	m.close();
}

int main(){
	fstream m1,m2;
	int trig = 1;
	int n;
	publisher *p = NULL;
	m2.open("publisher.txt",ios::out | ios::app);
	while(1){
		cout << "\n1) Write Story using fputc" << "\n2) Read Story using fgetc" << "\n3) Add names using fputs" << "\n4) Read Story using fgets" << endl;
		cout << "5) Write publisher data using fwrite" << "\n6) Read publisher datausing fread" << "\n7) EXIT" << endl;
		cin >> trig;
		if(trig == 7){
			m1.close();
			break;
		}
		
		if(trig == 1){
			m1.open("story.txt",ios::out | ios::app);
			if(m1.is_open()){
				char c = ' ';
				cout << "Enter '#' and press 'ENTER' to end the Input: " << endl;
				while(1){
					c = getchar();
					if(c == '#'){
						break;
					}
					fputc(c,m1);
				}
			}
		}
		
		if(trig == 2){
			fgetc();
		}
		
		if(trig == 3){
			fputs();
		}
		
		if(trig == 4){
			fgets();
		}
		
		if(trig == 5){
			cout << "Enter Number of publishers you need to enter: ";
			cin >> n; 
			p = new publisher[n];
			for(int i=0;i<n;i++){
				cout << "Enter publisher Name: ";
				cin >> p[i].pub_name;
				cout << "Enter publisher ID: ";
				cin >> p[i].pub_id;
				cout << "Enter no.of Books sold: ";
				cin >> p[i].books_sold;
				cout << "Enter total sales value: ";
				cin >> p[i].total_sale;
				cout << endl;
				fwrite(p[i],sizeof(publisher),m2);
			}
		}
		
		if(trig == 6){
			n = 5;
			for(int i=0;i<n;i++){
				cout << i << " ";
				fread(p[i],sizeof(publisher),m2);
			}
		}
	}
	
	return 0;
}
