//Programa creado por: Enrique Antonio Mendez Caceres
//Ultima fecha de Actualizacion: 25/09/2018

/*Una empresa de telefonia necesita calcular el total a pagar por cada cliente*/
//-----------------------------------------------------------------------------

//librerias
#include <iostream> //Libreria de entradas y salidas
#include <windows.h> //Libreria de funciones de windows 
#include <iomanip> //Manipular espasio de salida entrada

using namespace std; //Simplificar el codigo

void titulo (); //Declaracion de funcion 1, no retorna, no recibe parametros

bool validn (string entrada) { //Validar entrada de numeros
	bool valid = true; ////Variable de validacion
	int tam = entrada.size (); //Variable para definir tamaño
	
	for (int i = 0; i < tam; i++) { //Reconocer caracteres numericos
		if (entrada [i] <= 47 || entrada [i] >= 57) { //Toma los digitos numericos
			valid = false; //Cambiar valor a falso del booleano
			break; //Terminar proceso
		}
	}
	return valid; //Retornar la variable
}

//Desarrollo del codigo
int main(int argc, char** argv) {
	string minut; //Cadena para variable de minutos
	float pre; //Variable de presio
	int x; //Variable para condiciones
	
	
	system ("color 4F"); //Cambiar color fondo/texto
	
	error: //Punto de reinicio en caso de error
	do { //Repeticion de ciclo en caso de no ser un valor admitido
		titulo (); //Ejecutar funcion 1
		cout << "Ingrese tienpo de llamada: "; //Imprime mensaje en pantalla
		cin >> minut; //Introducir dato
		
		
	}
	while (! validn (minut)); //Mientras no se ingrese un valor numerico
	
	x = atoi(minut.c_str()); //Obtener dato del string y agregarlo a variable n
	
	while (x <= 0) { //En caso que el valor sea igual o menor a cero
		goto error; //Volver al punto de condicion do while
	}
	
	titulo (); //Ejecutar de funcion 1
	
	if (x <= 10) { //Mientras este entre 1 a 10 min
		pre = x * 0.05; //Agregar el dato a la variavle tarifa
	}
	else if (x <= 15) { //Mientras este entre 11 a 15 min
		pre = x * 0.08; //Agregar el dato a la variavle tarifa
	}
	else if (x > 15) { //Mientras sea mayor a 15 min
		pre = x * 0.10; //Agregar el dato a la variavle tarifa
	}
	
	
	
	titulo (); //Limpiar pantalla
	cout << "Coste total llamada: $" << fixed << setprecision (2) << pre << endl; //Imprimir resultado
	cout << endl; //Espacio de linea
	system ("pause"); //Pausa el programa, para continuer persionar tecla enter
	return 0; //Retorno de valores a cero
}

//Acciones a ejecutar por la funcion 1
void titulo() {
system ("cls"); //Limpia el contenido en pantalla
cout<<setw(50)<<"__________________________________"<<endl;
cout<<setw(50)<<"             CLARO               "<<endl;
cout<<setw(50)<<"__________________________________"<<endl;
cout<<setw(50)<<" "<<endl; //Espacio de linea
}
