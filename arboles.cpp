#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo* izq,*der;
};

int main(){
	nodo *raiz=NULL;
	
	nodo *aux=raiz;
	raiz= new nodo();
	raiz->dato=9;
	raiz->izq=new nodo();
	raiz->der=new nodo();
	aux=raiz->der;
	aux->dato=5;
	aux->der=new nodo();
	aux->izq=new nodo();
	aux=aux->der;
	aux->dato=2;
	aux->der=NULL;
	aux->izq=NULL;
	aux=raiz->der;
	aux=aux->izq;
	aux->dato=6;
	aux->der=NULL;
	aux->izq=NULL;
	aux=raiz->izq;
	aux->dato=3;
	aux->der=new nodo();
	aux->izq=new nodo();
	aux=aux->der;
	aux->dato=7;
	aux->der=NULL;
	aux->izq=NULL;
	aux=raiz->izq;
	aux=aux->izq;
	aux->dato=8;
	aux->der=NULL;
	aux->izq=NULL;
	
	cout<<raiz->dato<<endl;
	cout<<raiz->izq->dato<<" , "<<raiz->der->dato<<endl;
	cout<<raiz->izq->izq->dato<<" , "<<raiz->izq->der->dato<<" , "<<raiz->der->izq->dato<<" , "<<raiz->der->der->dato<<endl;
	return 0;
}
