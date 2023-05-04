#include<bits/stdc++.h>
using namespace std;

string ProcesaPalabra(string frase)
{	
    string nfrase;
	for(int i = 0 ; i < frase.size() ; i++)
	{
		if(frase[i] == 'a')
		{
			frase[i] = 'b';
		}
	}	
	nfrase = frase.size() - 1;	
	
	return nfrase;	
}

int main()
{
	string Frase;
	
	cout<<"ingresar Frase"<<endl;
	getline(cin, Frase);
	
	cout<<ProcesaPalabra(Frase)<<endl;
	
	return 0;
}
