//electricity bill calculator
#include<iostream>
using namespace std;
//for the units b/w 0-100 is free
//for units used b/w 100-200 is 5rs. per unit
//for units used b/w 200-300 is 10rs. per unit 
//and for units used above 300 is 12 rs per unit
int main()
{
	int units_consumed;
	cin>>units_consumed;
	int sum;
    //units used is below 100 is free
	if(units_consumed>0 && units_consumed<=100){
		cout<<"you have used "<<units_consumed<<" so no need to pay";
	}
    //units used is b/w 100 to 200 so need to pay units used after 100
	else if(units_consumed>100 && units_consumed<=200){
		units_consumed-=100;
		sum=units_consumed*5;
		cout<<"You have consumed "<<units_consumed+100<<endl<<"so you need to pay "<<sum;
	}
    //units used is b/w 200-300 so need to pay for the the units b/w 100-200 and for the units used b/w 200-300.
	else if(units_consumed>200 && units_consumed<=300){
		units_consumed-=200;
		sum=units_consumed*10;
		cout<<"You have consumed "<<units_consumed+200<<endl<<"so you need to pay "<<sum+(100*5);	
	}
    //units used after 300
	else{
		units_consumed-=300;
		sum=units_consumed*12;
		cout<<"You have consumed "<<units_consumed+300<<endl<<"so you need to pay "<<sum+(100*5)+(100*10);
	}
}