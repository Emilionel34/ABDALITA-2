#include<iostream>
using namespace std;

int Factorial(int n);

int main()
{
	int n1;
	
	cout<<"ingresar numero"<<endl;
	cin>>n1;
	
	cout<<n1<<"! = "<<Factorial(n1)<<endl;
	cout<<"BANCAN CHAT?"<<endl;
	
	return 0;
}
int Factorial(int n)
{
	int factous = 1;
	
	for(int i = 1 ; i <= n ; i++)
	{
		factous = factous * i;
	}
	
	return factous;
}
