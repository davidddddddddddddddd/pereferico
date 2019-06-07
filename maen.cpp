// maen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/*************************************************************************************************************************
*                                  Universidad Politecnica de Tulancingo
*                                Ingenierìa Electrònica y Telecomuncicaciones
*                                        Programacion de perifericos
*                                         DAVID ANGELES SANCHEZ
***************************************************************************************************************************
*            Programa que muestra la lectura de un archivo 
**************************************************************************************************************************/

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

string LeeTxt(string archivo) {
	string texto, linea;
	ifstream miarchivo(archivo);
	if (miarchivo.open) {
		texto;
		while (getline(miarchivo, linea)) {
			texto += linea;
		}
		miarchivo.close();
	}
	return texto;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
