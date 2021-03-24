/*
 * switchforwhile.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */

#include<iostream>
using namespace std;
class Control
{
	int opt,num1,num2;

	public:
	void ifelse();
	void input();
	void sw();
	void forloop();
	void whileloop();

};

void Control::input()
{
	cout<<"Enter your option :";
	cin>>opt;

	cout<<"Enter first number ";
	cin>>num1;

	cout<<"Enter second number ";
	cin>>num2;
}

void Control::sw()
{
	switch(opt)
	{
		case 1:
		cout<<"This is case 1"<<endl;
		break;

		case 2:
		cout<<"This is case 2"<<endl;
		break;

		case 3:
		cout<<"This is case 3"<<endl;
		break;

		default:
		cout<<"No case present"<<endl;
		break;
	}
}

void Control::forloop()
{
	int i;
	for(i=0;i<num1;i++)
	cout<<i<<" ";
	cout<<endl;
}

void Control::whileloop()
{
	int i=0;
	while(i<num2)
	{
		cout<<i<<" ";
		i++;
	}

	cout<<endl;
}

main()
{
	Control c;
	c.input();
	c.sw();
	c.forloop();
	c.whileloop();
}



