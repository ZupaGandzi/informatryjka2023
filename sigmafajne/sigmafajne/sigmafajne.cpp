#include<iostream>
using namespace std;

int  pot_fast(int z,int b)
{
	int  w = 1;

	while (b>0)
	{
		if (b%2==1)
			w*=z;
			z*=z;  
			b/=2; 
	}
	return w;
}

int main()
{
	int b; 
	int z;

	cout<<"Podstawa: ";
	cin>>z;
	cout<<"Wykladnik: ";
	cin>>b;
	cout<<z<< " do pot. " <<b<< " rowna sie " <<pot_fast(z,b);

	return 0;
}

