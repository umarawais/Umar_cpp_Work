#include<iostream>
using namespace std;
int main()
{
	double s,p,phyMarks,compMarks,obtainedMarks,percentage,totalMarks=200;
	
	cout<<"phyMarks";
	cin>>phyMarks;
	
	cout<<"compMarks";
	cin>>compMarks;
	
	obtainedMarks=phyMarks+compMarks;
	cout<<obtainedMarks<<endl;
	
	percentage=(obtainedMarks/totalMarks)*100;
	cout<<percentage;
}
