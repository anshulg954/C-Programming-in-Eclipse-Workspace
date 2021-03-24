/*
 * stduentrecord.cpp
 *
 *  Created on: 11-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class student
{
int rollno;
float s1,s2,s3,s4,avg,total;
public:
void input()
{
cout<<"Enter roll number : ";
cin>>rollno;
cout<<"Enter marks of first subject : ";
cin>>s1;
cout<<"Enter marks of second subject : ";
cin>>s2;
cout<<"Enter marks of third subject : ";
cin>>s3;
cout<<"Enter marks of fourth subject : ";
cin>>s4;
}
void output()
{
cout<<"Roll number of the student is "<<rollno;
total=s1+s2+s3+s4;
avg=total/4;
cout<<"Average marks are "<<avg;
}
};
main()
{
student amit;
amit.input();
amit.output();
}
