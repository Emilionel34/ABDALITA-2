#include<bits/stdc++.h>
using namespace std;

int ContarPalabras(string frase);

int main()
{
	string Frase;
	cout<<"ingrese una frase"<<endl;
	getline(cin, Frase);
	
	cout<<"hay "<<ContarPalabras(Frase)<<" palabras"<<endl;
	
	return 0;
}
int ContarPalabras(string frase)
{
	int cont=1;
	
	for(int i=0; i<frase.size(); i++)
	{
		if(frase[i]==' ')
		{
			cont++;
		}
	}
	return cont;
}
