/******************************************************************************************************
*                                   Universidad Politecnica deTulancingo
*                                   Ing.Electronica y Telecominicaciones
*                                     Programacion de Perefericos
*                                        David Angeles Sanchez
********************************************************************************************************
*   Este programa ejecuta el 
********************************************************************************************************/
// cadena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string cadena,token;
		cout << "captura una cadena: ";
	getline(cin, cadena);
	//cout << "La cadena mide: " << cadena.length <<"bytes. " << endl;
	string delimita = " ";
	size_t pos = 0;
	while((pos=cadena.find(delimita))!=string::npos) {
		token = cadena.substr(0, pos);
		cout << token << endl;
		cadena.erase(0, pos + delimita.length);
	}
	cout << cadena;


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
