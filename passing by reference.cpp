#include<iostream>
using namespace std;

void printHi()
{
	cout<<"Hi"<<endl;
	return;
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	cout<<"the value of c is"<<c;
	return c;
}

//void swap(int a,int b)
void swap(int &a, int &b)

{
	int c;
	c=a;
	a=b;
	b=c;
	
	cout<<"the value of a and b after swapping inside a function are:"<<a<<" "<<b<<endl;
	
	return;
}
	int main()
	{
		printHi();
		int a,b;
		int c;
		a=4;
		b=6;
	//	c=25;
	//	int d;
	//	d=sum(a,b);
	//	cout<<"the sum is equal to"<<d;
//	cout<<"th value of c is"<<c;
swap(a,b);
cout<<"the value of a and b after swapping outside the function are:"<<a<<" "<<b<<endl;
		
		return 0;
	}

