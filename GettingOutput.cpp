#include<iostream>
using namespace std;
int main()
{
	int m,p,c,grade;
	float OM,percentage;
	int total=300;
	
	cout<<"Input your math's numbers";
	cin>>m;
	cout<<"Input your Physics numbers";
	cin>>p;
	cout<<"Input your Computer numbers";
	cin>>c;
	
	OM=m+p+c;
	cout<<"Your obtain marks are:"<<OM<<endl;
	
	percentage=(OM/total)*100;
	cout<<"Percentage is:"<<percentage<<endl;
	
	if(percentage<=100&&percentage>=80)
	{
		cout<<"Your grade is"<<A;
	}
	else if(percentage<=79&&percentage>=60)
	{
		cout<<"Your grade is B";
	}
	else if(percentage<=59&&percentage>=50)
	{
		cout<<"Your grade is C";
	}
	else
	{
		cout<<"Fail";
	}
	
}
