#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int combination(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));		
}
int main()
{
	cout<<"combination is "<<combination(8,2);
}