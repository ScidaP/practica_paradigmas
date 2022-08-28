#include <iostream>

using namespace std;

class Persona {
    private:
    string nombre, apellido;
    long int DNI;
    float peso, altura;
    public:
    Persona (string nombre, string apellido, long int DNI, float peso, float altura);
    void mostrarDatos();
};

Persona::Persona(string nom, string ape, long int dni, float pes, float alt) {
    nombre = nom;
    apellido = ape;
    DNI = dni;
    peso = pes;
    altura = alt;
}

void Persona::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "DNI: " << DNI << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura: " << altura << endl;
}