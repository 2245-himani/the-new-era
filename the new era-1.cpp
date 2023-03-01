#include<iostream>
using namespace std;
class feet
{
	public:
		int feet,inch;
};
int main()
{
	feet f1,f2,sum;
	cout<<"Enter 1st"<<endl;
	cout<<"Enter feet :";
	cin>>f1.feet;
	cout<<"Enter inch :";
	cin>>f1.inch;
	
	
	cout<<"\nEnter 1st"<<endl;
	cout<<"Enter feet :";
	cin>>f2.feet;
	cout<<"Enter inch :";
	cin>>f2.inch;
	
	sum.feet=f1.feet+f2.feet;
	sum.inch=f2.inch+f2.inch;
	
	cout<<endl;<<"sum of feet ="<<sum.feet<<"feet"<<sum.inch<<"inch";
	return 0;
	
}
