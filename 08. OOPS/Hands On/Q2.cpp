#include<iostream>
#include<cmath>
using namespace std;

class rect{
	public:
		float tx,ty,bx,by;
		float h,w;
		float getwidth(){
			return(fabs(tx - bx));
		}
		float getheight(){
			return(fabs(ty-by));
		}
		void setwidth(float width){
			bx = bx + width;
			w = w + width;
		}
		void setheight(float height){
			by = by + height;
			h = h+ height;
		}
};

int main(){
	rect r;
	cout << "Enter Coordinates: ";
	cin >> r.tx >> r.ty >> r.bx >> r.by;
	cout << "Width: " << r.getwidth() << endl;
	cout << "Height:" << r.getheight() << endl;
	float ht,wi;
	cout << "Enter change in height and width: " << endl;
	cin >> ht >> wi;
	r.setwidth(wi);
	r.setheight(ht);
	cout << "Changed width: " << r.getwidth() << endl;
	cout << "Changed height: " << r.getheight() << endl;
	
	return 0;
}
