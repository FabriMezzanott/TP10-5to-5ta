#include <iostream>
using namespace std;

class Punto {
private:
    int x;
    int y;

public:
    Punto() : x(0), y(0) {}

    Punto(int x, int y) : x(x), y(y) {}

    void imprimir() const {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main() {
    Punto punto1;
    Punto punto2(5, 8);

    cout<<"PUNTO 1 (constructor sin parametros)"<<endl;
    punto1.imprimir();

    cout<<endl<<"PUNTO 2 (constructor con dos parametros)"<<endl;
    punto2.imprimir();

    return 0;
}
