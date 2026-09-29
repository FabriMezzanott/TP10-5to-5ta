#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona() : nombre(""), edad(0) {}

    void cargarDatos() {
        cout<<"Digite el nombre: "; cin>>nombre;
        cout<<"Digite la edad: "; cin>>edad;
    }

    void imprimirDatos() const {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
    }
};

class Empleado : public Persona {
private:
    double sueldo;

public:
    Empleado() : Persona(), sueldo(0) {}

    void cargarSueldo() {
        cout<<"Digite el sueldo: ";
        cin>>sueldo;
    }

    void imprimirSueldo() const {
        cout<<"Sueldo: "<<sueldo<<endl;
    }
};

int main() {
    Persona persona1;
    Empleado empleado1;

    cout<<"CARGA DE LA PERSONA"<<endl;
    persona1.cargarDatos();

    cout<<endl<<"CARGA DEL EMPLEADO"<<endl;
    empleado1.cargarDatos();
    empleado1.cargarSueldo();

    cout<<endl<<"DATOS DE LA PERSONA"<<endl;
    persona1.imprimirDatos();

    cout<<endl<<"DATOS DEL EMPLEADO"<<endl;
    empleado1.imprimirDatos();
    empleado1.imprimirSueldo();

    return 0;
}
