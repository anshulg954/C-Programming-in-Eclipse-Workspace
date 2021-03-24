/*
 * xyz.cpp
 *
 *  Created on: 10-Apr-2019
 *      Author: SAIRAM
 */
#include<iostream>
using namespace std;
class Base{
public:
	virtual void fun1(){
		cout<<"you are in base class";
	}
		void show(){
			cout<<"BASE CLASS";
		}
	};
class Derived:public Base{
public:
	void fun1(){
		cout<<"In derived class";
	}
		void show(){
		cout<<"DERIVED CLASS";
		}
};
int main(){
	Base *b;
	Derived d;
	b=&d;
	b->fun1();
	b->show();
	return 0;
}




