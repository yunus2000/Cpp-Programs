#include<iostream>
using namespace std;

class chart{
	public:
		float a[5] = {1.1,1.2,1.3,1.4,1.5};
		virtual void plotchart() = 0;
};

class piechart:public chart{
	public:
		void plotchart(){
			cout << "Pie Chart Plot: " << endl;
			for(int i=0;i<5;i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
};

class barchart:public chart{
	public:
		void plotchart(){
			cout << "\nBar Chart Plot: " << endl;
			for(int i=0;i<5;i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	chart *c;
	
	piechart p;
	c = &p;
	c->plotchart();
	
	barchart b;
	c = &b;
	c->plotchart();
	return 0;
}
