#include<iostream>
using namespace std;
class time
{
	public:
		int hour;
		int minute;
		int second;
};
main()
{
	time t1;
	cout<<"Enter a second!-";
	cin>>t1.second;
	t1.hour=t1.second/3600;
	t1.minute=(t1.second-(3600*t1.hour))/60;
	t1.second=(t1.second-(3600*t1.hour))-(t1.minute*60);
	
	cout<<"hour:-"<<t1.hour<<"minutes:-"<<t1.minute<<"second:-"<<t1.second;
	return 0;
}
