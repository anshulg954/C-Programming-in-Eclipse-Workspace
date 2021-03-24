/*
 * operators.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class Arithmetic
{
int c,a,b,k;

public:
void input()
{
cout<<"Enter first number : ";
cin>>a;

cout<<"Enter second number : ";
cin>>b;

}
void add()
{
cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void sub()
{
if(a>=b)
{
c=a-b;
cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<c;
}

else
{
c=b-a;
cout<<"The subtraction of "<<b<<" and "<<a<<" is "<<c<<endl;
}
}

void multiply()
{
c=a*b;
cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<c<<endl;
}

void division()
{
if(a>=b)
{
c=a/b;
cout<<"The division of "<<a<<" by "<<b<<" is "<<c<<endl;
}

else
{
c=b/a;
cout<<"The division of "<<b<<" by "<<a<<" is "<<c<<endl;
}
}
};

class Operator
{
int a,b,c;

public:
void input()
{
cout<<endl<<"Implementation of operators"<<endl;
cout<<"Enter first number : ";
cin>>a;

cout<<"Enter second number : ";
cin>>b;
}

void relational()
{
cout<<endl<<"Relational"<<endl;
if(a>b)
cout<<a<<" is greater than "<<b<<endl;
else if(a<b)
cout<<b<<" is greater than "<<a<<endl;
else
cout<<a<<" is equal to "<<b<<endl;
}

void conditional()
{
cout<<endl<<"Conditional"<<endl;
c=a>b?1:0;
if(c==1)
cout<<"As "<<a<<" is greater than "<<b<<" c equals to "<<c<<endl;
else
cout<<"As "<<a<<" is smaller than "<<b<<" c equals to "<<c<<endl;
}

void logical()
{
cout<<endl<<"Logical"<<endl;
if(a%2==0 && b%2==0)
cout<<"Both numbers are even"<<endl;
else if(a%2!=0 && b%2!=0)
cout<<"Both numbers are odd"<<endl;
else if((a%2!=0 && b%2==0) || ((a%2==0 && b%2!=0)))
cout<<"One number is odd and other is even"<<endl;
}

void bitwise()
{
int k,p;
cout<<endl<<"Bitwise";
cout<<endl<<"Number "<<a<<" is same as binary : ";
show(a);

k=~a;
cout<<endl<<"One's complement of "<<a<<" is : ";
show(k);

k=a>>2;
cout<<endl<<a<<" right shift 2 gives : ";
show(k);

k=a<<3;
cout<<endl<<a<<" left shift 3 gives : ";
show(k);

k=a&32;
if(k==0)
cout<<endl<<"Fifth bit of "<<a<<" is off"<<endl;
else
cout<<endl<<"Fifth bit of "<<a<<" is on"<<endl;

p=a^12;
cout<<"After applying "<<a<<"="<<a<<"^12 ,"<<a<<" becomes "<<p<<endl;
}

void show(int a)
{
int i,j,k;
for(i=15;i>=0;i--)
{
j= 1<<i;
k= a&j;
k==0?cout<<"0":cout<<"1";
}
}

};

main()
{
Arithmetic ar;
Operator op;
ar.input();
ar.add();
ar.sub();
ar.multiply();
ar.division();
op.input();
op.relational();
op.conditional();
op.logical();
op.bitwise();
}




