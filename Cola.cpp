#include <bits/stdc++.h>
using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
};

void insertar(nodo *& ,nodo *& , int);
bool vacio(nodo *);
void eliminar(nodo *&, nodo *&, int &);

int main(){
	nodo *frente = NULL;
	nodo *fin = NULL;
	int dato;
	
	cout<<"Ingresa un valor a la cola"<<endl;
	cin>>dato;
	insertar(frente,fin,dato);
	cout<<"Ingresa un valor a la cola"<<endl;
	cin>>dato;
	insertar(frente,fin,dato);	
	cout<<"Ingresa un valor a la cola"<<endl;
	cin>>dato;
	insertar(frente,fin,dato);
	
	while(frente != NULL){
		 eliminar(frente,fin,dato);
		 
		 if (frente !=NULL){
		 	cout<<dato<<" , ";
		 }else
		 cout<<dato<<" , ";
	}
	return 0; 
}


void insertar(nodo *&frente, nodo *&fin, int n){
	nodo *nuevo = new nodo();
	nuevo -> siguiente = NULL;
	nuevo -> dato = n;
	if (vacio(frente)){
		frente = nuevo;
	}else{
		fin -> siguiente = nuevo;
	}
	fin = nuevo;
}
bool vacio(nodo *frente){
	return (frente == NULL)? true:false;
}
void eliminar(nodo *&frente, nodo *&fin, int &n){
	n = frente->dato;
	nodo *aux = frente;
	
	if (frente == fin){
		frente = NULL; 
		fin = NULL;
	}else{
		frente=frente->siguiente;
	}
	delete aux;
}
