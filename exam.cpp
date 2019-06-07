/******************************************************************************************************
*                     UNIVERSIDAD POLITECNICA DE TULANCINGO
*                      ING.ELECTRONICA Y TELECOMINICACIONES
*                           DAVID ANGELES SANCHEZ
*                         PROGRAMACION DE PEREFERICOS
*******************************************************************************************************/
// exam.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
typedef class persona {
	string nambre;
	int edad;
	char genero;
	string direccion;
	string telefono;
	string email;
}alumno;
void leerArchivo() {
	ifstream archivo;
	archivo.open("C:\\Users\\ACER\\Documents\\Visual Studio 2017\\dav");
	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo" << endl;
		exit(1);
	}
	while (archivo.good())
	{
		string texto, cadena, token;
		getline(archivo, texto, ',');
		cout << texto << " ";
		string delimita = " ";
		size_t pos = 0;
		while ((pos = cadena.find(delimita)) != string::npos) {
			token = cadena.substr(0, pos);
			cout << token << endl;
			cadena.erase(0, pos + delimita.length());
		}
		cout << cadena << endl;
	}
	archivo.close();
}
int main()
{
	leerArchivo();
	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
