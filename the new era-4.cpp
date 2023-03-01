#include<iostream>
using namespace std;
class house
{
	public:
		int flateno,rooms,mem;
		char add[100];
};
int main()
{
	house h1,h2,h3,h4;
	cout<<"Enter flateno:-";
	cin>>h1.flateno;
	cout<<"Enter rooms:-";
	cin>>h2.rooms;
	cout<<"Enter mem:-";
	cin>>h3.mem;
	cout<<"Enter add:-";
	cin>>h4.add;
	
	cout<<"flate no:-"<<h1.flateno<<endl;
	cout<<"address:-"<<h4.add<<endl;
	cout<<"rooms:-"<<h2.rooms;<<endl;
	cout<<"members:-"<<h3.mem<<endl;
	return 0;
}
