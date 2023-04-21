#include<bits/stdc++.h>
using namespace std;

int ContarLetraA(string f);

int main()
{
	int a;
	string frase;
	
	cout<<"ingrese frase"<<endl;
	getline(cin,frase);
	
	a=ContarLetraA(frase);
	
	cout<<"  se encontraron "<<a<<" a "<<endl;
	
	return 0;
}
ContarLetraA(string f)
{
	int cont=0;
	
	for(int pos=0; pos <= f.size(); pos++)
	{
		if(f[pos] == 'a')
		{
			cont++;
		}
	}
	
	return cont;
}
