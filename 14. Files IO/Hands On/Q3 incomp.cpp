#include<iostream>
#include<fstream>
using namespace std;

class vector{
	int *a = new int[10];
	public:
		vector(int k){
			for(int i=0;i < 10;i++){
				a[i] = k + i;
			}
		}
		
		friend ofstream &operator <<(ofstream &fout,vector &v){
			fout.open("Array.txt",ios::in);
			if(fout.is_open()){
				for(int i=0;i<10;i++){
					fout << v.a[i];
				}
			}
			fout.close();
			return fout;
		}
		
		friend ifstream &operator >>(ifstream &fin,vector &v){
			fin.open("Array.txt",ios::out);
			if(fin.is_open()){
				for(int i=0;i<10;i++){
					fin >> v.a[i];
				}
			}
			fin.close();
			return fin;
		}
};

int main(){
	vector v(2);
	ofstream fout;
	ifstream fin;
	fin >> v;
	fout << v;
	
	return 0;
}


