//Programa creado por: Enrique Antonio Mendez Caceres
//Ultima fecha de Actualizacion: 25/09/2018

/*Una empresa necesita calcular la produccion diaria de bebidas y 
los insumos requeridos para la elaboracion de refrescos*/
//--------------------------------------------------------------

//librerias
#include <iostream> //Libreria de entradas y salidas
#include <windows.h> //Libreria de funciones de windows en consola
#include <iomanip>//Manipular espacios de salida y entrada
//Espacion de nombre
using namespace std; //Simplificar el codigo

void titulo (); //Declaracion de funcion 1, no retorna, no recibe parametros

bool validn (string entrada) { //Validar entrada de numeros
	bool valid = true; ////Variable de validacion
	int tam = entrada.size (); //Variable para definir tamaño
	
	for (int i = 0; i < tam; i++) { //Reconocer caracteres numericos
		if (entrada [i] <= 47 || entrada [i] >= 57) { 
			valid = false; //Cambiar valor a falso del booleano
			break; //Romper proceso
		}
	}
	return valid; //Retornar la variable
}

//Desarrollo del codigo
int main(int argc, char** argv) {
	
	int water; //Variable de cantidad de agua
	int azu; //Variable de cantidad de azucar
	int y; //Variable para seleccion de bebida
	int z; //Variable para condiciones
	string can; //Cadena para variable de cantidad
	string opcio; //Variable para las opciones
	
	system ("color 4F"); // color fondo/texto
	
	error: //Reinicio en caso de no cumplir condiciones
	//Validacion para ingresar tipo de bebida
	do {
		titulo (); //Limpia la pantalla
		cout << "Seleccione Tipo de bebida a calcular insumos:" << endl; // indicacion al usuario
		cout << "-Sodas  (1)" << endl; //Imprime opcion 1
		cout << "-Jugos  (2)" << endl; //Imprime opcion 2
		cout << endl; //Espacio de linea
		cout << "Digite el numero correspondiente a la bebida a producir: "; //Pide al usuario que ingrese el codigo
		cin >> opcio; //Agregar dato a variable de opciones
		
		
	}
	while (! validn (opcio)); //Mientras se encuentre entre los numeros de seleccion
	
	y = atoi(opcio.c_str()); //Obtener dato del string y agregarlo a variable y
	
	while (y < 1 || y > 2) { //Mientras sea diferente de los numeros de selccion
		goto error; //Regresar al punto do while
	}
	
	
	//Repeticion de ciclo en caso de no ser un valor admitido
	do {
		titulo (); //Ejecutar funcion 1
		cout << "Ingrese cantidad a producirse: "; //Imprime mensaje en pantalla
		cin >> can; //Introducir dato
	
		
	}
	while (! validn (can)); //Mientras no se ingrese un valor numerico
	
	titulo (); //Limpia la pantalla
	
	z = atoi(can.c_str()); //Obtener dato del string y agregarlo a variable n
	
	if (y <= 1) { //En caso de seleccionar la bebida soda
		water = z * 500; //Agregar calculo a variable agua
		azu = z * 800; //Agregar calculo a variable azucar
	}
	else { //En caso de seleccionar la bebida jugo
		water = z * 600; //Agregar calculo a variable agua
		azu = z * 700; //Agregar calculo a variable azucar
	}
	
	titulo (); //Limpia la pantalla
	cout << "Cantidad requeria de agua: " << water << "ml" << endl; //Imprime cantidad de agua
	cout << "Cantidad requeria de azucar: " << azu << "g" << endl; //Imprime cantidad de azucar
	
	cout << endl; //Espacio de linea
	system ("pause"); //Pausar pantalla
	return 0; //Retornar valores a cero
}

//Acciones a ejecutar por la funcion 1
void titulo() {
	system ("cls"); //Limpia el contenido en pantalla
cout<<setw(50)<<"__________________________________"<<endl;
cout<<setw(50)<<"             COCA-COLA               "<<endl;
cout<<setw(50)<<"__________________________________"<<endl;
cout<<setw(50)<<" "<<endl;
}
