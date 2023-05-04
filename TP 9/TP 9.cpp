#include<bits/stdc++.h>
using namespace std;

int CambiarDictado(string frase);

int main()
{
	string palabra;
	
	cout<<"Ingresar palabra"<<endl;
	cin>>palabra;
	
	cout<<CambiarDictado(palabra)<<endl;
	
	return 0;
}

int CambiarDictado(string frase)
{
    int cont = frase.size() - 1;	
    
    return cont;
}
