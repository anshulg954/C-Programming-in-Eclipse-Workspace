/*
 * cd.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */

#include<iostream>
using namespace std;
class demo
{
	int feet;
	float inches;

	public:
	demo()
	{
		cout<<"Default constructor is executed"<<endl;
		feet=0;
		inches=0.0;
	}

	demo(int ft, float in)
	{
		cout<<"Parameterized constructor is executed"<<endl;
		feet=ft;
		inches=in;
	}

	void display()
	{
		cout<<"feet = "<<feet<<" and inches = "<<inches
		<<endl;
	}

	~demo()
	{
		cout<<"Destructor is executed"<<endl;
	}
};

int main()
{
	demo d1;
	d1.display();
	demo d2(9,6.7);
	d2.display();
	return 0;
}



