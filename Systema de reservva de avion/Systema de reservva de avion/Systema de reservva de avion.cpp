// Systema de reservva de avion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//En que extencio de archivo se guarda la extencion de c++: en el .h
//Stream flujo de bytes
//ss strream stringstream
// metoods de accebilidad o mutabilidad Set and Get
//& direccion de memoria
//* contenido de la memoria
//Constructor El metodo se llama igual que la clase
// destrucctor : Su fundion es limpiar la memoria
#include <iostream>
#include <vector>
#include <Windows.h>
#include "Usuario.h"
#include "Menu.h"

using namespace std;

class SistemaPrincipal
{
public:
	//atributos
	int op;
	Usuario usuario;
	string nombre, correo, password;

public:
	//metodos
	SistemaPrincipal()
	{
		cout << "1 - Iniciar Sesion\n2 - Registrar Usuario" << endl;
		cin >> op;
		system("cls");
		switch (op)
		{
		case 1:
			if (usuario.IniciarSesion())
		{
			Menu menu;
			menu.MostrarMenu();
		}
			else
				cout << "Error al iniciar sesion." << endl;
			break;
		case 2:cout << "Introduce el nombre, el correo y el password del usuario" << endl;
			cin >> nombre;
			cin >> correo;
			cin >> password;
			if (usuario.RegistrarUsuario(nombre, correo, password))
			{
				Menu menu;
				menu.MostrarMenu();
			}
			else
				cout << "No se pudo registar al usuario." << endl;
			break;
		default:
			break;
		}
	}

	void SonidoDeInicio();
};

int main()
{
	SistemaPrincipal();
	
}