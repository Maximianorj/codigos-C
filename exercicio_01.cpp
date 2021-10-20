#include <iostream>
using namespace std;
int main () 
{
	int vetor[5], i;
	for (i=0;i<5;i++){
		cout<<" Digite um numero: ";
		cin>>(i,vetor[i]);
	}
	for (i=0;i<5;i++){
		cout<<"\nPosicao "<<i<<" : "<<vetor[i];
	}
}

