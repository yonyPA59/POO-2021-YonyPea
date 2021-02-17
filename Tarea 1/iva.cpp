/*Escriba un programa que lea el precio de un producto y muestre el precio del producto al aplicarle el IVA.
Defina una función que calcule el IVA y retorne el valor. */

#include<iostream>
using namespace std;

int calcularIva(int precio,float iva){
    float precioIva;
    precioIva = (precio*iva)+precio;
    return precioIva;
}

int main(){
    int precio = 0;
    float iva = 0.19, precioIVa = 0;
    cout<<"Ingrese el precio del producto: "; cin>>precio;
    precioIVa = calcularIva(precio,iva);
    cout<<"El precio con iva del producto es: "<<precioIVa;
    return 0;
}