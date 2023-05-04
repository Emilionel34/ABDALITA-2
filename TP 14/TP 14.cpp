#include<bits/stdc++.h>
using namespace std;

string InsertarCaracter(string palabra);

int main()
{
	string Palabra;
	
	cout<<"ingresar una palabra"<<endl;
	cin>>Palabra;
	
	cout<<InsertarCaracter(Palabra)<<endl;
	
	return 0;
}
string InsertarCaracter(string palabra)
{
	string np;
	
	for(int i = 0 ; i < palabra.size() ; i++)
	{
		np += palabra [i];
		np += '/'; 	
	}
	return np;
}
