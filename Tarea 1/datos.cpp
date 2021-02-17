/*Realice un programa que lea los siguientes datos de una persona: 
    Edad: dato de tipo entero. 
    Sexo: dato de tipo caracter. 
    Altura en metros: dato de tipo flotante.
Muestre los datos leidos.  Desarrolle su programa usando funciones. */

#include<iostream>
using namespace std;

int main(){
    int edad; char sexo; float altura;
    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo(M/F): "; cin>>sexo;
    cout<<"Ingrese su altura en metros: "; cin>>altura;
    cout<<"Su edad es "<<edad<<" su  sexo es "<<sexo<<" su altura es "<<altura<<" metros"<<endl;
    return 0;
}