/*
 * mi.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class base
{
private:int peri;

protected:
int l,b;

public:
void input()
{
cout<<"Enter length : ";
cin>>l;
cout<<"Enter breadth : ";
cin>>b;
}

void perimeter()
{
peri=2*(l+b);
cout<<"Perimeter of the rectangle is "<<peri<<endl;
}

};

class derived:public base
{
private:
int area_four;

protected:
int h;

public:
void input()
{
cout<<"Enter height : ";
cin>>h;
}

void area()
{
area_four=2*(l+b)*h;
cout<<"Area of four walls is "<<area_four<<endl;
}

};

class derived2:public derived
{
private:
int volume;

public:
void vol()
{
volume=l*b*h;
cout<<"Volume is "<<volume<<endl;
}

};

main()
{
derived2 d;
d.base::input();
d.derived::input();
d.base::perimeter();
d.derived::area();
d.vol();
}



