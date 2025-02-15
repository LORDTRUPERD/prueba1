#include <stdio.h>
#include <iostream>
using namespace std;
// multiplicacion de un número
void Multiplicador(int num) {
    cout << "Tabla de multiplicar del: " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
//factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
// serie Fibonacci
void fib(int n) {
    int a = 0, b = 1, c;
    cout << "Serie de Fibonacci:\n";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}
// número primo
bool Primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
//verificar de número par
bool esPar(int num) {
    return num % 2 == 0;
}
int main() {
    int num, opcion;
    // Mostrar tablas de multiplicar del 4 y 6
    Multiplicador(4);
    cout << endl;
    Multiplicador(6);
    cout << endl;
    // número factorial
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    cout << endl;

    // serie de Fibonacci
    cout << "Ingresa un numero para la serie de Fibonacci: ";
    cin >> num;
    fib(num);
    cout << endl;

    // Verificar si es primo
    cout << "Ingrese un numero para verificar si es primo: ";
    cin >> num;
    if (Primo(num))
        cout << num << " es un numero primo.\n";
    else
        cout << num << " no es un numero primo.\n";
    cout << endl;

    // Verificar si es par
    cout << "Ingrese un numero para verificar si es par: ";
    cin >> num;
    if (esPar(num))
        cout << num << " es un numero par.\n";
    else
        cout << num << " es un numero impar.\n";
    cout << endl;

    // tabla de multiplicacion ingresando un numero
    cout << "Ingrese un numero para hacer la tabla de multiplicar: ";
    cin >> num;
    Multiplicador(num);

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.