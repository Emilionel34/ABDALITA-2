#include<bits/stdc++.h>
using namespace std;

string ReemplazarEspacio(string palabra);

int main()
{
	string frase;
	
	cout<<"Ingresar Frase"<<endl;
	getline(cin, frase);
	
	cout<<ReemplazarEspacio(frase)<<endl;
	
	return 0;
}
string ReemplazarEspacio(string palabra)
{
	for(int i = 0 ; i < palabra.size() ; i++)
	{
		if(palabra[i]==' ')
		{
			palabra[i]='_';
		}
	}
	return palabra;
}
