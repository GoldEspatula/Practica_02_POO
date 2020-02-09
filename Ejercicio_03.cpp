// Muestra de la declracion de un constructor
// un destructor de la clase Gato
#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial,int pesoInicial);
~Gato();
int ObtenerEdad() const;//Nos permite acceder a los valores guardados en suEdad
void AsignarEdad(int edad);//Esta funcion o metodo nos permite asignar una edad desde fuera de la clase a los valores privados dentro de esta misma
void Maullar();//Funcion obliga al gato hacer miau
int ObtenerPeso() const; //Nos permite acceder a los valores guardados en suPeso
void AsignarPeso(int peso);//lo mismo 
private:
int suEdad;
int suPeso;
};


//Constructor de Gato
Gato::Gato(int edadInicial,int pesoInicial){
suEdad = edadInicial;
cout << "Se ha creado un objeto Gato que tiene " << edadInicial <<" anios"<< endl;
cout << "Y el gordo pesa "<< pesoInicial <<"kg"<< endl;
}


Gato::~Gato(){
cout << "El objeto Gato se destruira en 3...2...1 .... "<<" Capum!"<<endl;
}

int Gato::ObtenerPeso() const{
	return suPeso;
}
	
	
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad
int Gato::ObtenerEdad() const{
return suEdad;
}


// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}

void Gato::AsignarPeso(int peso){
	suPeso = peso;
}

// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miauuuu" << endl;
}


// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato Pelusa(5,20);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene "<< Pelusa.ObtenerEdad() <<" anios de edad" << endl;
cout << "Pesa " << Pelusa.ObtenerEdad()<<"kg"<<endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
cout << "Ahora pelusa tiene "<< Pelusa.ObtenerEdad() <<" anios de edad" << endl; 
Pelusa.AsignarPeso(5);
cout <<"Pelusa adelgazo y ahora pesa "<< Pelusa.ObtenerPeso() <<"kg"<<endl;
return 0;
}



