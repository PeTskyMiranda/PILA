#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
};

void ingresar(nodo *&pila, int n){
	nodo *nuevo = new nodo();
	nuevo -> dato = n;
	nuevo -> siguiente = pila;
	pila = nuevo;
}
void mostar(nodo *&pila, int &n){
	nodo *aux = pila;
	n = aux -> dato ;
	pila = aux -> siguiente;
	delete aux;
}

int main(){
	nodo *pila = NULL;
	int dato;
	
	cout<<"Ingresa un valor"<<endl;
	cin>>dato;
	ingresar(pila,dato);
	cout<<"Ingresa un valor"<<endl;
	cin>>dato;
	ingresar(pila,dato);
	cout<<"Ingresa un valor"<<endl;
	cin>>dato;
	ingresar(pila,dato);
	cout<<"Sacar los elementos de la pila"<<endl;
	while(pila != NULL){
		mostar(pila,dato);
		if (pila != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<" , ";
		}
	}	
	return 0;
}

