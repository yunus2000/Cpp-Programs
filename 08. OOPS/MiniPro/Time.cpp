#include<iostream>
#include<cstdlib>
using namespace std;

class time{
	private:
		int h,m,s;
	public:
		time(){
			h = 0;
			m = 0;
			s = 0;
		}
		
		time(int hr,int min,int sec){
			h = hr;
			m = min;
			s = sec;
		}
		
		int gethrs(){
			return h;
		}
		
		int getmin(){
			return m;
		}
		
		int getsec(){
			return s;
		}
		
		void sethrs(int hrs){
			h = hrs;
		}
		
		void setmin(int min){
			m = min;
		}
		
		void setsec(int sec){
			s = sec;
		}
		
		time difference(time t2){
			time t;
			t.h = abs(this->h - t2.h);
			t.m = abs(this->m - t2.m);
			t.s = abs(this->s - t2.s);
			return t;
		}
		
		int compare(time t2){
			if(this->h == t2.h && this->m == t2.m && this->s == t2.s){
				return 1;
			}
			else{
				return 0;
			}
		}
};

int main(){
	time t1(12,24,45),t2(6,12,30),t3;
	cout << t1.gethrs() << endl;
	cout << t1.getmin() << endl;
	cout << t2.getsec() << endl;
	t1.setsec(60);
	t3 = t1.difference(t2);
	cout << "Difference Between T1 and T2 is= " << t3.gethrs() << " : " << t3.getmin() <<" : " << t3.getsec() << endl;
	cout << "Compared T1 and T2: " << t2.compare(t3);
	return 0;
}
