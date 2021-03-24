/*
 * static.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class variable
{
	static int n;
	int num;

	public:
	void display()
	{
		cout<<n<<" ";
		n++;
	}

	void object()
	{
		cout<<"Intial value of data member : "<<num<<endl;
	}
};

int variable::n;

int main()
{
	variable v1,v2,v3;
	static variable v4,v5;
	cout<<"Use of static keyword with data member"<<endl;
	v1.display();
	v2.display();
	v3.display();

	cout<<endl<<"Use of static keyword with object of a class"<<endl;
	v1.object();
	v2.object();
	v4.object();
	v5.object();
	return 0;
}



