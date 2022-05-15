/*Autor Oscar Eduardo FLetes Ixta, creado 21/02/22
	programa que pida 20 numeros y calcule su suma usando el ciclo for
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo for
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo for
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo for, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa inicia el ciclo for, despues pide como entrada 1 variable de tipo float (valor del numero),
	El programa pide 20 numeros y calcula su suma usando el ciclo for. 
	*/


#include<stdio.h>

int main(){
	//Variables 
	float numero, suma=0;//variable con decimal
	for(int i=1;i<=20;i++){//Ciclo que es para que se repita el numero de veces que uno inserte
		//Entrada
		printf("Introduce el valor numero %d: ",i);//imrpime mensaje
		scanf("%f",&numero);//lee el numero insertado por el teclado
		//Proceso
		suma=suma+numero; //Ecuacion 
	}
	//Salida
	printf("La suma es %.2f",suma);//imrpime la salida de la suma
	return 0;
}
