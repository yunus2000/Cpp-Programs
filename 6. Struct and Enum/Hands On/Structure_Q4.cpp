#include<iostream>
using namespace std;

struct BATSMAN{
	char name[100];
	int age;
	int high_score;
	int least_score;
	int no_of_ducks;
};

void printdata(BATSMAN *b){
	for(int i=0;i<3;i++){
		cout<<"\nname: "<<b[i].name<<"\nAge: "<<b[i].age<<"\nhighest score: "<<b[i].high_score<<"\nleast score"<<b[i].least_score<<"\nno of ducks :"<<b[i].no_of_ducks<<endl;
	}
}

int main(){
	BATSMAN b[3];
	for(int i=0;i<3;i++){
		cout << "Batsman name: ";
		cin >> b[i].name;
		cout << "Batsman age: ";
		cin >> b[i].age;
		cout << "Batsman High Score: ";
		cin >> b[i].high_score;
		cout << "Batsman Least Score: ";
		cin >> b[i].least_score;
		cout << "Batsman Ducks: ";
		cin >> b[i].no_of_ducks;
	}
	
	printdata(b);
	
	return 0;
}
