#include<iostream>
using namespace std;
class Demo
{
		int i;
	public:
		int x;
	
	private:
		int y;
	
	public:
		Demo()
		{
			int x=10;
			int y=20;
			int i=30;
		}
		
	void fun()
	{
		cout<<"\nInside fun";
		cout<<y;		//Allowed
		gun();
	}
	
	private:
		void gun()
		{
			cout<<"\nInside gun";
			cout<<y;                                 //Allowed
		
		}
};
int main()
{
	Demo obj;
	obj.fun();
	//obj.gun();            //Not Allowed
	
	cout<<"\n"<<obj.x;
	//cout<<"\n"<<obj.y;       //Not Allowed
	//cout<<"\n"<<obj.i;       //Not Allowed
	
	
	return 0;
}