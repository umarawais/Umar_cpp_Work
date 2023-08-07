#include<iostream>
using namespace std;
int main()
{
	double Class,TotalStu,PresentStu,AbsentStu;
	float Present_Stu_Per,Absent_Stu_Per;
	float A,B;
	
	cout<<"Input class name:"<<endl;
	cin>>Class;
	
	cout<<"Input no. of Total Students:"<<endl;
	cin>>TotalStu;
	
	cout<<"Input no. of Present Students:"<<endl;
	cin>>PresentStu;
	
	AbsentStu=TotalStu-PresentStu;
	cout<<"No. of Absent Students are:";
	cout<<AbsentStu<<endl;
	
	A=(PresentStu/TotalStu);
	Present_Stu_Per=A*100;
	cout<<"Present Student percentage:"<<Present_Stu_Per<<endl;
	
	B=(AbsentStu/TotalStu);
	Absent_Stu_Per=B*100;
	cout<<"Absent Student percentage:"<<Absent_Stu_Per<<endl;

	if(Present_Stu_Per<=100 && Present_Stu_Per>80)
	{
		cout<<"Yes";
	}
	else if(Present_Stu_Per<=79 && Present_Stu_Per>=60)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Error";
	}
}
