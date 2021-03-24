/*
 * rangesize.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
#include<math.h>
using namespace std;
class Range
{
	public:
	void intr();
	void charr();
};

void Range::intr()
{
	int min,max,n;
	n=sizeof(int)*8;
	cout<<"Size of an integer is : "<<sizeof(int)<<" bytes"<<endl;
	min=pow(-2,(n-1));
	max=pow(2,n-1)-1;
	cout<<"Range of int is : "<<min<<" to "<<max<<endl<<endl;
}

void Range::charr()
{
	int min,max,n;
	n=sizeof(char)*8;
	cout<<"Size of a character is : "<<sizeof(char)<<" bytes"<<endl;
	min=pow(-2,(n-1));
	max=pow(2,n-1)-1;
	cout<<"Range of char is : "<<min<<" to "<<max<<endl<<endl;


}

main()
{
	Range r;
	cout<<"Range and size of different data types :------------"
	<<endl<<endl;
	r.intr();
	r.charr();
}



