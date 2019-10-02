#include<iostream>
using namespace std;
class shape{
	public:
		double x,y;
		void get_data(){
			cout<<"enter the values:";
			cin>>x>>y;
		}
		virtual void display_area(){
			cout<<x<<"\n"<<y;
		}
};
class rectangle:public shape{
	public:
		float ar;
		void area(){
			ar=x*y;
		}
		virtual void display_area(){
			cout<<"the area of rectangle:"<<ar<<"\n";
		}
};
class triangle:public shape{
	public:
		float at;
		void area(){
			at=0.5*x*y;
		}
		virtual void display_area(){
			cout<<"the area of triangle:"<<at<<"\n";
		}
};
class circle:public shape{
	public:
		float ac;
		void area(){
			ac=3.14*x*x;
		}
		virtual void display_area(){
			cout<<"area of the circle:"<<ac<<"\n";
		}
};
int main(){
	shape S;
	rectangle R;
	triangle T;
	circle C;
	S.get_data();
	shape *pS=&S;
	shape *pR=&R;
	shape *pT=&T;
	shape *pC=&C;
	shape &rS=S;
	shape &rR=R;
	shape &rT=T;
	shape &rC=C;
	R.area();
	T.area();
	C.area();
	S.display_area();
	R.display_area();
	T.display_area();
	C.display_area();
	return 0;
}
