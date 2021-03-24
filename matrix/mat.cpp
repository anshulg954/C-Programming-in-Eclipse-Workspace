/*
 * mat.cpp
 *
 *  Created on: 12-Apr-2019
 *
 */
#include<iostream>
using namespace std;
class matrix
{
	int arr1[2][2],arr2[2][2],arr[2][2];

	public:
	void input()
	{
		cout<<"Enter the elements of the first array : ";
		for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		cin>>*(*(arr1+i)+j);

		cout<<"Enter the elements of the second array : ";
		for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
		cin>>*(*(arr2+i)+j);
	}

	void addition()
	{
		int i,j;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				*(*(arr+i)+j)= *(*(arr1+i)+j) +  *(*(arr2+i)+j);
			}
		}

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<*(*(arr+i)+j)<<" ";
			}
			cout<<endl;
		}

	}

	void subtract()
	{
		int i,j;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				*(*(arr+i)+j)= *(*(arr1+i)+j) -  *(*(arr2+i)+j);
			}
		}

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<*(*(arr+i)+j)<<" ";
			}
			cout<<endl;
		}

	}

	void multiply()
	{
		int i,j,k,sum;
		for(i=0;i<2;i++)
		{
		   for(j=0;j<2;j++)
		   {
			sum=0;
			for(k=0;k<2;k++)
	        {
	         sum = sum + *(*(arr1+i)+k) * (*(*(arr2 + k)+j));
	        }
	        *(*(arr+i)+j)=sum;
	       }
	    }

	   for(i=0;i<2;i++)
	   {
	     for(j=0;j<2;j++)
	     {
	       cout<<*(*(arr+i)+j)<<" ";
	     }
	     cout<<endl;
	   }

	}

	void diagonal()
	{
		int i,j,sum=0;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				if(i==j)
				{
					sum = sum + *(*(arr1+i)+j);
				}
			}
		}

		cout<<"Sum of diagonal elements of first matrix is "<<sum<<endl;
	}

};

int main()
{
	matrix m;
	m.input();
	m.addition();
	m.subtract();
	m.multiply();
	m.diagonal();
}



