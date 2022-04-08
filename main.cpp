#include <iostream>
#include "registro.h"
#include "estudiante.h"
using namespace std;
string nom, ape, dir;
int main()
{
	int opc;
	registro registro;
	do {
		system("cls");
		cout << "1. Ingresar Estudiante" << endl;
		cout << "2. Ver Estudiante" << endl;
		cout << "3. Modificar Estudiante" << endl;
		cout << "4. Eliminar Estuidante" << endl;
		cout << "5. Cerrar" << endl;
		cin >> opc;

		switch (opc) {
		case 1:{
			system("cls");
			int cod, tel;
			cout << "Ingrese codigo: ";
			cin >> cod;
			cout << "Ingrese nombre: ";
			cin >> nom;
			cout << "Ingrese apellido: ";
			cin >> ape;
			cout << "Ingrese direccion: ";
			cin >> dir;
			cout << "Ingrese telefono: ";
			cin >> tel;
			Estudiante nuevo = Estudiante();
			nuevo.actualizar(cod, _strdup(nom.c_str()),_strdup(ape.c_str()),_strdup(dir.c_str()),tel);
			registro.guardar(nuevo);
			system("pause");
			break;
		}

		case 2:{
			system("cls");
			cout << " |DATOS| " << endl;
			registro.mostrar();
			system("pause");
			break;
		}

		case 3:{
			system("cls");
			int id;
			cout << "Codigo del estudiante a modificar: ";
			cin >> id;
			registro.modificar(id);
			system("pause");
			break;
		}

		case 4:{
			system("cls");
			int id;
			cout << "Codigo del estudiante a eliminar: ";
			registro.eliminar(id);
			system("pause");
			break;

		}
		}
	} while (opc != 5);
}


