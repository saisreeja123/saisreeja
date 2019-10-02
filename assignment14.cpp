#include<iostream>
using namespace std;
class travel{
    
	    int flight_no;
	    string destination;
	    float distance,fuel;
	    void calfuel(){
	     	if(distance<=1000){
		    	cout<<"the fuel is 500!";
		    }
		    if(distance>1000 && distance<=2000){
			    cout<<"the fuel is 1100!";
		    }  
		    if(distance>2000){
			    cout<<"the fuel is 2200!";
		    }
		
    public:		
	    void feedinfo(){
		     	cout<<"enter the flight_no:";
			    cin>>flight_no>>"\n";
		        cout<<"enter the distance:";
		        cin>>distance>>"\n";
		        cout<<"enter the destination:";
		        cin>>destination>>"\n";
		    }
		void calfuel();
		void showinfo();
};
void travel::showinfo(){
	cout<<"flight_no"<<flight_no<<"\n";
    cout<<"destination"<<destination<<"\n";
    cout<<"distance"<<distance<<"\n";
}
void travel::feedinfo()
int main(){
	travel T;
	T.feedinfo();
	T.calfuel();
	T.showinfo();
	return 0;
}
