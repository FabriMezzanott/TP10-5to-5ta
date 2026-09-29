#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Persona{
private:
    string nombre;
    int edad;
 
public:
    Persona() : nombre(""), edad(0) {
        cout<<"Ingrese el nombre: "; cin>>nombre;
        cout<<"Ingrese la edad: "; cin>>edad;
    }
 
    void imprimir() const {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
    }
 
    void mostrarMensajeEdad() const {
        if(edad >= 18){
            cout << nombre<<" es mayor de edad"<<endl;
        } else {
            cout<<nombre<<" es menor de edad"<<endl;
        }
    }
};
 
class VectorEnteros {
private:
    vector<int> valores;
    int cantidad;
 
public:
    VectorEnteros() : cantidad(5) {}
 
    void cargar() {
        int valor;
        for (int i = 0; i < cantidad; i++) {
            cout<<"Ingrese el valor de la posicion "<<i<<": "; cin>>valor;
            valores.push_back(valor);
        }
    }
 
    void imprimir() const {
        for(int i = 0; i<cantidad; i++){
            cout<<"Posicion "<<i<<": "<<valores[i]<<endl;
        }
    }
 
    void imprimir(int hasta) const {
        if (hasta < 0 || hasta >= cantidad) {
            cout<<"La posicion "<<hasta<<" no es valida"<<endl;
            return;
        }
        for (int i = 0; i <= hasta; i++) {
            cout<<"Posicion "<<i<<": "<<valores[i]<<endl;
        }
    }
 
    void imprimir(int desde, int hasta) const {
        if(desde < 0 || hasta >= cantidad || desde > hasta) {
            cout<<"El rango "<<desde<<" a "<<hasta<<" no es valido"<<endl;
            return;
        }
        for(int i = desde; i <= hasta; i++) {
            cout<<"Posicion "<<i<<": "<<valores[i]<<endl;
        }
    }
};
 
int main() {
    cout<<"PARTE 1: PERSONA"<<endl;
    Persona persona1;
 
    cout<<endl<<"DATOS INGRESADOS"<<endl;
    persona1.imprimir();
 
    cout<<endl<<"MENSAJE"<<endl;
    persona1.mostrarMensajeEdad();
 
    cout<<endl<<"PARTE 2: VECTOR DE 5 ELEMENTOS"<<endl;
    VectorEnteros vector1;
    vector1.cargar();
 
    cout<<endl<<"IMPRIMIR TODO EL VECTOR"<<endl;
    vector1.imprimir();
 
    cout<<endl<<"IMPRIMIR DESDE EL PRINCIPIO HASTA LA POSICION 2"<<endl;
    vector1.imprimir(2);
 
    cout<<endl<<"IMPRIMIR DESDE LA POSICION 1 HASTA LA POSICION 3"<<endl;
    vector1.imprimir(1, 3);
 
    return 0;
}
 
