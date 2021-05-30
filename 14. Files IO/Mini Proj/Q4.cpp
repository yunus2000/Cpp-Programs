#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int to_int(char c){
	stringstream ss;
	ss << c;
	int n;
	ss >> n;
	return n;
}

string to_string(int n){
	stringstream ss;
	ss << n;
	string s;
	ss >> s;
	return s;
}

int main(){
	fstream m;
	m.open("Q4_booksdb.txt",ios::out);
	int *a = new int[20];
	string s;
	int count = 0;
	while(getline(m,s)){
		if(count = 0){
			count++;
			continue;
		}
		else{
			if(s[1] == ' '){
				a[count-1] = to_int(s[0]);
			}
			else{
				a[count-1] = to_int(s[0] + s[1]);
			}
		}
		count++;
	}
	int trig = 1;
	while(trig){
		cout << "\n1) View List of Books on Our Shelves" << "\n2) Request For a New Book" << "\n3) Return a Book" << "\n4) Exit\n" << endl;
		cin >> trig;
		if(trig == 4){
			break;
		}
		
		if(trig == 1){
			string l;
			int i = 0;
			a = new int[20];
			if(m.is_open()){
				while(getline(m,l)){
					if(i == 0){
						i = 1;
						continue;
					}
					else{
						cout << l << endl;
					}
				}
			}
			else{
				cout << "File not opened" << endl;
			}
		}
		
		if(trig == 2){
			int n;
			cout << "\nEnter the Boook ID: ";
			cin >> n;
			if(n<1 || n>20){
				cout << "BookID is not correct. Please Try Again ";
			}
			else{
			    if(a[n-1] > 1){
					cout << "Congratulations Customer your book is Allocated. Please Collect it From the Shelf " << endl;
					int i = 0;
					string l;
					while(getline(m,l)){
						if(i == n){
							if(l[1] == ' '){
								l.replace(0,1,to_string(a[n-1] - 1));
							}
							else{
								l.replace(0,2,to_string(a[n-1] - 1));
							}
							break;
						}
						i++;
					}
			    }
				else{
					cout << "This Book is presently not on our Shelf. Please Try Later " << endl;
				}	
			}
		}
		
		if(trig == 3){
			int n;
			cout << "\nEnter the Book ID which u need to Return: ";
			cin >> n;
			if(n<1 || n>20){
				cout << "BookID is not correct. Please Try Again " << endl;
			}
			else{
				cout << "Thankyou Customer. Please Place the Book on the Shelf " << endl;
				int i = 0;
				string l;
				while(getline(m,l)){
					if(i == n){
						if(l[1] == ' '){
							l.replace(0,1,to_string(a[n-1] + 1));
						}
						else{
							l.replace(0,2,to_string(a[n-1] + 1));
						}
						break;
					}
					i++;
				}
			}
		}
		
		else{
			cout << "\nEnter Correct Value Again!!" << endl;
		}
	}
	
	return 0;
}
