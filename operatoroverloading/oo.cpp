/*
 * oo.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class overload
{
int num1,num2;
static int count;

public:
void input()
{
cout<<"Enetr values of "<<++count<<" object : "<<endl;
cout<<"Enter first number :  ";
cin>>num1;
cout<<"Enter second number :  ";
cin>>num2;
}

//1. ++(post and pre)
void operator++(int);

//2. --(post and pre)
void operator--(int)
{
num1=num1-1;
num2=num2-1;
}

// 3. +
overload operator+(overload d2);

//4. -
overload operator-(overload d2)
{
overload temp;
temp.num1 = num1 - d2.num1;
temp.num2 = num2 - d2.num2;
return temp;
}

//5. %
overload operator%(int a)
{
overload temp;
temp.num1 = num1%a;
temp.num2 = num1%a;
return temp;
}

//6. /
overload operator/(int a)
{
overload temp;
temp.num1 = num1/a;
temp.num2 = num1/a;
return temp;
}

//7. ==
int operator==(overload d2)
{
if(num1=d2.num1 && num2==d2.num2)
{
return 1;
}

else
return 0;
}

//8. >  (>=)
int operator>(overload d2)
{
if(num1>d2.num1 && num2>d2.num2)
{
return 1;
}

else
return 0;
}

//9. <  (<=)
int operator<(overload d2)
{
if(num1<d2.num1 && num2<d2.num2)
{
return 1;
}

else
return 0;
}

//10. &
void operator&(int a)
{
cout<<"Address of first element of object = "<<&num1<<endl<<"Address of second element of object = "<<&num2<<endl<<endl;
}

//11. !
void operator!(void)
{
num1=!num1;
}

//12. =
void operator=(overload d2)
{
num1=d2.num1;
num2=d2.num2;
}

//13. *
void operator*(int a)
{
num1=num1*a;
num2=num2*a;
}

void display()
{
cout<<"a = "<<num1<<" b = "<<num2<<endl<<endl;
}

};

int overload::count;
inline void overload::operator++(int)
{
num1=num1+1;
num2=num2+1;
}

overload overload::operator+(overload d2)
{
overload temp;
temp.num1 = num1 + d2.num1;
temp.num2 = num2 + d2.num2;
return temp;
}

int main()
{
overload d1,d2,d3;
d1.input();
d1++;
cout<<"Value of numbers after increment : ";
d1.display();
cout<<"Value of numbers after increment : ";
d1--;
d1.display();

d2.input();
cout<<"Value of numbers of thrid object : ";
d3=d1+d2;
d3.display();

cout<<"Value of numbers of thrid object : ";
d3=d1-d2;
d3.display();

cout<<"Overloading division operator : ";
d1=d1/2;
d1.display();

cout<<"Overloading modulus operator : ";
d1=d1%2;
d1.display();

cout<<"Overloading assignment operator : ";
d1=d2;
d1.display();

cout<<"Overloading equal to operator : "<<endl;
if(d1==d2)
cout<<"Elements of the two objects are equal"<<endl;
else
cout<<"Elements of the two objects are not equal"<<endl;

cout<<"Overloading > and < operator : "<<endl;
if(d1>d2)
cout<<"Elements of d1 are less than d2"<<endl;
else if(d1<d2)
cout<<"Elements d1 are less than d2"<<endl;

cout<<endl<<"Overloading & operator "<<endl;
d1&2;

cout<<"Overloading ! operator : ";
!d1;
d1.display();

cout<<"Overloading * operator : ";
d1*2;
d1.display();
return 0;
}



