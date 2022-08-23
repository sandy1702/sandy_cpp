#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float number=8.562;
	//when fixed is used it prints the zeroes after decimal place
	cout<<fixed<<setprecision(5)<<number<<endl;
}