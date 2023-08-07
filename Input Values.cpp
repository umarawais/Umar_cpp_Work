#include<iostream>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	int result;
	
	cout<<"Please Input First Value";
	cin>>valueOne;
	cout<<"Please Input Second Value ";
	cin>>valueTwo;
	
	result=(valueOne-valueTwo)+(valueTwo+valueOne);
	cout<<"The Result is ";
	cout<<result;
	
}
