// factorial.h
#ifndef FACTORIAL_H
#define FACTORIAL_H


#include <cstdio.> //incluir la libreria para printf
#include "factorial.h" //Incluir la libreria factorial

int main(){
//Declaracion de variables locales
int num, resultado;

//solicitar al usuario que ingrese un numero
print("Ingrese un numero para calcular el factorial: ");
scanf("%d",&num);

//Llamada a la funcion factorial desde la libreria
resultado = calcularFactorial(num);

//Mostrar el resultado
printf("El factorial de %d es: %d\n", num, resultado);
return 0;
}