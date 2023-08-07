#include<iostream>
using namespace std;
int main()
{
	int V1;
	int V2;
	int V3;
	int V4;
	int V5;
	
	int result;
	
	V1=10;
	V2=20;
	V3=30;
	V4=40;
	V5=50;
	
	V1=V3;
	V2=V4;
	V3=V5;
	result=V1+V2-V3*V4/V5;
	cout<<"The Result is "<<result;
}
