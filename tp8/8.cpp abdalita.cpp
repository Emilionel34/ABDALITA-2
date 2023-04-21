#include<bits/stdc++.h>
using namespace std;

int ValorLetras(string frase);
//a e =1 - o s =2  - d i n r =3 - c l t u =4 - m p =5 - b f g h j q v x y z =6 - k w =7; 

int main()
{
	string Frase;
	
	cout<<"iNGRESAR SOLO MINISCULAS"<<endl;
	cout<<"ingresar frase: "<<endl;
	getline(cin, Frase);
	
	
	cout<<"el valor de tu frase es de : "<<ValorLetras(Frase)<<endl;
	
	return 0;
}
int ValorLetras(string frase)
{
	int cont = 0;
	
	for(int i = 0; i < frase.size() ; i++)
	{
        if(frase[i] == 'a' || frase[i] == 'e')
		{
			cont = cont + 1;
		}
		else if(frase[i]=='s' || frase[i]=='o')
		{
		    cont = cont + 2;
		}
		else if(frase[i]=='d'||frase[i]=='i'||frase[i]=='n'||frase[i]=='r')
		{
			cont = cont + 3;
		}
		else if(frase[i]=='c'||frase[i]=='l'||frase[i]=='t'||frase[i]=='u')
		{
			cont= cont + 4;
		}
		else if(frase[i]=='m'||frase[i]=='p')
		{
			cont = cont + 5;
		}
		else if(frase[i]=='b'||frase[i]=='f'||frase[i]=='g'||frase[i]=='h'||frase[i]=='j'||frase[i]=='q'||frase[i]=='v'||frase[i]=='x'||frase[i]=='y'||frase[i]=='z')
		{
			cont = cont + 6;
		}
		else if(frase[i]=='k' || frase[i]=='w')
		{
			cont = cont + 7;
		}
	}
	
	return cont;
}
