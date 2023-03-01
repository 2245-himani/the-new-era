#include<iostream>
using namespace std;
class circl
{
	public:
		double radius;
		double area()
		{
			return 3.14*redius*redius;
		}
};
int main()
{
	circl obj;
	obj.redius=2.2;
	cout<<"redius is :"<<obj.redius<<"\n";
	cout<<"area is :"<<obj.area();
	return 0;
}
