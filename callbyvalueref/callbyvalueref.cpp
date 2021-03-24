/*
 * callbyvalueref.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class swapv
{
	int t;

	public:
	void value(int x,int y)
	{
		t=x;
		x=y;
		y=t;
		cout<<"The numbers after swapping are"<<endl<<x
		<<endl<<y<<endl<<endl;
	}

	void ref(int &x,int &y)
	{
		t=x;
		x=y;
		y=t;
		cout<<"The numbers after swapping are"<<endl<<x
		<<endl<<y<<endl<<endl;
	}
};

int main()
{
	int a,b;
	cout<<"Enter the first number"<<endl;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	cin>>b;
	cout<<endl;

	swapv s;
	s.value(a,b);
	cout<<"The original numbers are"<<endl<<a<<endl<<endl<<endl;

	s.ref(a,b);
	cout<<"The original numbers now are"<<endl<<a<<endl<<endl<<endl;
	return 0;
}




