#include <cstdlib>
#include <iostream>

using namespace std;
struct Empleado{
char cod[5];
char nombre[50];
int edad;
float salbase;
float salliquido;
float isss;
float afp;
float renta;
float totalprestamo;
char departamento[60];
char puesto[60] ;
};
struct Sucursal{
int numsucursal;
char nombresucursal[60];

};
float calisss(float sal,float tope)
{
int isss=0;
if(sal>=600)
isss=30;
else
isss=sal*0.03;
return isss;
}

/*crear las funciones para calcular el isss,afp y renta del empleadp*/
float calafp(float sal,float isss)
{
}
float calrenta(float sal,float isss,float afp)
{
}

int main(int argc, char *argv[])
{ 
int n;
cout << "cuantos empleados tiene?"<<endl;
cin>>n;
Empleado e[n];
Sucursal s;
int cp;
int contador;
for(int i=0; i<n;i++)
{
cout << "Cod:"<<endl;
cin>>e[i].cod;
cout << "Nombre:"<<endl;
cin>>e[i].nombre;
cout << "Edad:"<<endl;
cin>>e[i].edad; 
cout << "Salbase:"<<endl;
cin>>e[i].salbase; 
e[i].isss=calisss(e[i].salbase,0.03);
//*** afp
//***renta
cout << "Cantidad de prestamos del empleado:"<<endl;
cin>>cp;
contador=0;//contador
float totpres=0;//acumulador
float pres;
while(contador<cp)
{
cout << "monto a descontar:"<<endl;
cin>>pres;
if(e[i].salbase*0.2>(e[i].salbase-totpres))
{
totpres=totpres+pres;

}
contador++;
}


}
for(int i=0; i<n;i++)
{
cout <<e[i].cod<<"\t";
cout <<e[i].nombre<<"\t";
cout<<e[i].edad<<"\t";
cout<<e[i].salbase<<"\t";
cout<<e[i].isss<<"\t";
cout<<endl;

}


system("Pause");
}

