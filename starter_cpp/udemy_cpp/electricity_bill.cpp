//electricity bill calculator
#include<iostream>
using namespace std;

int main()
{
	int units_consumed;
	cin>>units_consumed;
	int sum;
	if(units_consumed>0 && units_consumed<=100){
		cout<<"you have used "<<units_consumed<<" so no need to pay";
	}
	else if(units_consumed>100 && units_consumed<=200){
		units_consumed-=100;
		sum=units_consumed*5;
		cout<<"You have consumed "<<units_consumed+100<<endl<<"so you need to pay "<<sum;
	}
	else if(units_consumed>200 && units_consumed<=300){
		units_consumed-=200;
		sum=units_consumed*10;
		cout<<"You have consumed "<<units_consumed+200<<endl<<"so you need to pay "<<sum+(100*5);	
	}
	else{
		units_consumed-=300;
		sum=units_consumed*12;
		cout<<"You have consumed "<<units_consumed+300<<endl<<"so you need to pay "<<sum+(100*5)+(100*10);
	}
}