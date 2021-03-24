/*
 * friend.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */

#include<iostream>
using namespace std;
class demo
{
int n1,n2;
friend void display();

public:
void input()
{
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
}

};

demo d;

void display()
{
cout<<"First number is  : "<<d.n1<<endl;
cout<<"Second number is  : "<<d.n2<<endl;
}

main()
{
d.input();
cout<<endl<<"Displaying the values of input by friend function"<<endl;
display();
}
