#include<bits/stdc++.h>
using namespace std;

 string Japonizar(string palabra);

int main()
{
	int n, i = 1;
	string nombre;
	
	cout<<"ingresar la Cantidad de Nombres a Ingresar"<<endl;
	cin>>n;
	
	while(i < n)
	{
		getline(cin,nombre);
		cout<<"Konichi Wa, "<<Japonizar(nombre)<<"-san"<<endl;
	    i++;
	}
	
	return 0;
}
 string Japonizar(string palabra)
 {
 	string japonizar;
    for(int i = 0 ; i < palabra.size(); i++)
    {
	    japonizar+=palabra[i];
	    if(palabra[i]!='a' && palabra[i]!='e' && palabra[i]!='i' && palabra[i]!='o' && palabra[i]!='u' && palabra[i]!=' ')
	   {
		    if(palabra[i+1]!='a' && palabra[i+1]!='e' && palabra[i+1]!='i' && palabra[i+1]!='o' && palabra[i+1]!='u'&& palabra[i]!=' ')
	        {
		        japonizar+='u';
	        }    
	   }
	}
	
    return japonizar; 
 }

