/*
 * virtualptr.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class base
{
int num1,num2;

protected:
int num3;

public:
virtual void input();
virtual void show();
};

void base::input()
{
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter third number : ";
cin>>num3;
}

void base::show()
{
cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
}

class derived:public base
{
int num;

public:
void input();
void show();
};

void derived::input()
{
cout<<"Enter a number : ";
cin>>num;
}

void derived::show()
{
cout<<"num = "<<num<<endl<<"num3 = "<<num3<<endl;
}

int main()
{
base *bptr;
derived d;
d.base::input();
d.base::show();
bptr=&d;
bptr->input();
bptr->show();
return 0;
}



