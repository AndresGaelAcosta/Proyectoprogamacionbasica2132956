#include <iostream>

using namespace std;

int main()
{
	char numart[10], descart[100], genart [20], clasart [20], conart[20];
	int resp;
cout << "Bienvenido al menu de alta de articulos" << endl;
cout << "1. alta de articulos" << endl;
cout << "2. Modificacion de articulos" << endl;
cout << "3. Baja de articulo" << endl;
cout << "4. Lista de articulos" << endl;
cout << "5. Limpiar pantalla" << endl;
cout << "6. salir" << endl;
cin >> resp;
switch (resp)
{
case 1:

		cout << "Ingrese numero del articulo" << endl;
		cin >> numart;
		cout << "Ingrese descripcion del articulo" << endl;
		cin >> descart;
		cout << "Ingrese genero del articulo" << endl;
		cin >> genart;
		cout << "Ingrese clasificacion del articulo" << endl;
		cin >> clasart;
		cout << "Ingrese consola del articulo" << endl;
		cin >> conart;

		cout << "Ingrese numero del articulo" << endl;
		cin >> numart;
		cout << "Ingrese descripcion del articulo" << endl;
		cin >> descart;
		cout << "Ingrese genero del articulo" << endl;
		cin >> genart;
		cout << "Ingrese clasificacion del articulo" << endl;
		cin >> clasart;
		cout << "Ingrese consola del articulo" << endl;
		cin >> conart;

		cout << "Ingrese numero del articulo" << endl;
		cin >> numart;
		cout << "Ingrese descripcion del articulo" << endl;
		cin >> descart;
		cout << "Ingrese genero del articulo" << endl;
		cin >> genart;
		cout << "Ingrese clasificacion del articulo" << endl;
		cin >> clasart;
		cout << "Ingrese consola del articulo" << endl;
		cin >> conart;
		break;
	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		system("cls");
		return main();
		break;
	case 6:
		exit(1);
		break;
}
}