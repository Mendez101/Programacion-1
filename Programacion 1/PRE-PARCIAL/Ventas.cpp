//Programa creado por: Enrique Antonio Mendez Caceres
//Ultima fecha de Actualizacion: 25/09/2018

//Librerias
#include <iostream> //Libreria principal para entradas y salidas
#include <iomanip> //Libreria para corregir errores de decimales
#include<stdio.h> //Libreria para cambiar el estilo del programa
#include <windows.h> //Libreria para utilizar funciones sytem

//Espacio de nombre
using namespace std;

//CEstructura del programa
int main (){
	
cout<<setw(50)<<"************AVON************"<<endl;
cout<<setw(50)<<"*********************************"<<endl;
cout<<setw(50)<<" "<<endl;

system ("COLOR F5"); //Color de fondo/Texto

float v; //Variable para las ventas
float s; //Variable para el sueldo

//El numero ingresado tiene que ser > 0
do {
	cout << "Ingrese cantidad de la venta: $"; //Imprime mensaje en pantalla al usuario
	cin >> v; //Asigna el dato a la variable de ventas


}
 
while( v < 0 ); //Repetir mientras seamenor a cero

//Condiciones para el sueldo
	if(v <= 500000 ){ //Ventas entre 0 y 500000
        s = 80000; //Asigna dato al sueldo
    }
    else if(v <= 1000000){ //Ventas entre 500001 y 1000000
        s = 160000; //Asigna dato al sueldo
    }
    else if (v  <= 1500000){ //Ventas entre 1000001 y 1500000
        s = 320000; //Asigna dato al sueldo
    }
    else if (v  <= 2500000){ //Ventas entre 1500001 y 2500000
        s = 450000; //Asigna dato al sueldo
    }
    else if (v  <= 4000000){ //Ventas entre 2500001 y 4000000
        s = 550000; //Asigna dato al sueldo
    }
    else if (v > 4000000 ){ //Ventas mayores a 4000000
        s = v * 0.20; //Calcula el 20% de las ventas
    }
   
   //Resultado en pantalla
   cout << "El sueldo es de: $" << fixed << setprecision (2) << s; //Imprime resultado en pantalla
   cout << endl;
   Beep(523,500);
   system("pause"); //Pausar pantalla del programa
   
   return 0; //Retornar valor cero
}



