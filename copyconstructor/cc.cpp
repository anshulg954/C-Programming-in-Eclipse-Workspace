/*
 * cc.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */

#include<iostream>
using namespace std;
class demo
{
	int num1,num2;

	public:
	demo()
	{
		num1=0;
		num2=0;
	}

	demo(demo &d3)
	{
		cout<<"Copy constructor is executed"<<endl;
		num1=d3.num1;
		num2=d3.num2;
	}

	void input()
	{
		cout<<"Enter first number : ";
		cin>>num1;
		cout<<"Enter second number : ";
		cin>>num2;
	}

	void display()
	{
		cout<<num1<<endl<<num2<<endl;
	}
};

int main()
{
	demo d1;
	d1.input();
	d1.display();
	demo d2(d1);
	d2.display();
	return 0;
}



