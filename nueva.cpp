/******************************************************************************************************
*                                   Universidad Politecnica deTulancingo
*                                   Ing.Electronica y Telecominicaciones
*                                     Programacion de Perefericos
*                                        David Angeles Sanchez
********************************************************************************************************
*   Este programa muestra el volumen y area total de un paralelepipedo
********************************************************************************************************/
// nueva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>


using namespace std;


class Rectangulo {
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double area();
	double getladoH();
	double getladoL();

};
class Volumen : public Rectangulo {
	double longitud;
public:
	Volumen(double, double, double);
	double vol();
	double areaTotal();
};
Rectangulo::Rectangulo(double h, double l) {
	alto = h;
	ancho = l;	
}
Volumen::Volumen(double h, double l, double x) : Rectangulo(h,l) {
	longitud = x;
}
 double Rectangulo::getladoH() {
	return alto;
 }
 double Rectangulo::getladoL() {
	 return ancho;
 }
 double Rectangulo::area() {
	 return alto * ancho;
 }
 double Volumen::vol() {
	 return area() * longitud;
 }
 double Volumen::areaTotal() {
	 return 2 * ((getladoH() * getladoL()) + (getladoL() * longitud) + (getladoH() * longitud));
 }
 int main()
 {
	 double base, ancho, altura;
	 cout << "introducir las medidas para la figura: " << endl;
	 cout << " BASE: ";
	 cin >> base;
	 cout << " ANCHO: ";
	 cin >> ancho;
	 cout << "ALTURA: ";
	 cin >> altura;

	 Volumen figura(base, ancho, altura);
	 Rectangulo lado(base, ancho);
	 cout << endl;
	 cout << "el area de la base= " << lado.area() << " cm2 " << endl;
	 cout << "el volumen= " << figura.vol() << " cm3 " << endl;
     cout << "el area= "<< figura.areaTotal() << " cm2 " <<  endl;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
