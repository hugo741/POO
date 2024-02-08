
#include <stdlib.h>
#include <iostream>
using namespace std;

class Bike{
  private: //atributos
    int rodado;
    string tipo;
  public: //metodos
    Bike(int, string);
    void datos ();
};

Bike::Bike(int _rodado,string _tipo){
    rodado = _rodado;
    tipo = _tipo;
}

class Persona : public Bike{
    private:
     float estatura;
     string nombre;
    public:
     Persona(int, string, float, string);
     void persona();

};

Persona::Persona(int _rodado,string _tipo,float _estatura, string _nombre): Bike(_rodado, _tipo){
    estatura = _estatura;
    nombre = _nombre;
}

 void Bike :: datos(){
  cout << "Rodado : " << rodado << endl;
  cout << "Tipo : " << tipo << endl;
 }

 void Persona :: persona(){
    datos();
   cout << "Estatura : " << estatura << endl;
   cout << "Nombre : " << nombre << endl;

 }

int main(){
  Persona x1 (29, "MTB", 1.80, "Pangolin");
   x1.persona();

  return 0;  
}