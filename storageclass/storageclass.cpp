/*
 * storageclass.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */

#include<iostream>
using namespace std;

int min=100;

class storage
{
static int n1;

public:
void staticstorage();
void autostorage();
void registerstorage();
void externstorage();

};

int storage::n1;

void storage::staticstorage()
{
cout<<n1<<endl;
n1++;
}

void storage::autostorage()
{
cout<<"Auto storge class"<<endl;
int n2=3;
{
int n2=4;
{
int n2=5;
cout<<n2<<endl;
}
cout<<n2<<endl;
}
cout<<n2<<endl;
}

void storage::registerstorage()
{
register int n3;
cout<<endl<<"Value of variable declared as register storage class is : "<<n3<<endl;
cout<<"After assigning and increment"<<endl;
for(int n3=0;n3<3;n3++)
cout<<n3<<" ";

cout<<endl;
}

void storage::externstorage()
{
extern int min;
cout<<endl<<"Value of variable declared as extern storage class is : "<<min<<endl;
}

main()
{
storage st;
st.autostorage();
cout<<endl<<"Value of variable stored as static is : ";
st.staticstorage();
st.staticstorage();
st.staticstorage();
st.registerstorage();
st.externstorage();
}
