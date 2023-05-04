#include<bits/stdc++.h>
using namespace std;

string InsertarCaracter(string palabra);

int main()
{
	string Cadena;
	
	cout<<"ingresar una Cadena"<<endl;
	cin>>Cadena;
	
	cout<<InsertarCaracter(Cadena)<<endl;
	
	return 0;
}
string InsertarCaracter(string palabra)
{
	for(int i = 0 ; i < palabra.size() ; i++)
	{
		if(i!=0 && i % 3 == 0)
		{
            palabra[i]+='.';		
		} 	
	}
	return palabra;
}
