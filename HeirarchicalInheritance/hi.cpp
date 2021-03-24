/*
 * hi.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class line
{
protected :int n;
public:
void input()
{
cout<<"Enter the number of rows : ";
cin>>n;
}

virtual void draws()
{
}
};

class hline:public line
{

public:
void draws()
{
for(int i=0;i<=n;i++)
cout<<"* ";
cout<<endl;
}

};

class vline:public line
{

public:
void draws()
{
for(int i=0;i<=n;i++)
cout<<"*"<<endl;
}

};

main()
{
hline h;
vline v;
line *l1,*l2;
l1=&h;
l2=&v;
l1->input();
l1->draws();
l2->input();
l2->draws();
}




