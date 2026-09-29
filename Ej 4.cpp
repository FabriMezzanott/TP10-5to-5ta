#include <iostream>
#include <string>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() : nombre(""), antiguedad(0) {
        cout<<"Digite el nombre del socio: "; cin >>nombre;
        cout<<"Digite la antiguedad del socio en el club (en años): ";
        cin>>antiguedad;
    }

    string getNombre() const {
        return nombre;
    }

    int getAntiguedad() const {
        return antiguedad;
    }
};

class Club {
private:
    Socio socio1;
    Socio socio2;
    Socio socio3;

public:
    Club() {}

    void imprimirAntiguo() const {
        cout<<"Socio con mayor antiguedad: ";
        if(socio1.getAntiguedad() >= socio2.getAntiguedad() && socio1.getAntiguedad() >= socio3.getAntiguedad()) {
            cout<<socio1.getNombre()<<" ("<<socio1.getAntiguedad()<<" años)"<<endl;
        } else if (socio2.getAntiguedad() >= socio3.getAntiguedad()) {
            cout<<socio2.getNombre()<<" ("<<socio2.getAntiguedad()<<" años)"<<endl;
        } else {
            cout<<socio3.getNombre()<<" ("<<socio3.getAntiguedad()<<" años)"<<endl;
        }
    }
};

int main() {
    cout<<"CARGA DE LOS TRES SOCIOS DEL CLUB"<<endl;
    Club club1;

    cout<<endl;
    club1.imprimirAntiguo();

    return 0;
}
