#include<iostream>
#define maxf 3
#define maxc 5
using namespace std;

int main(int argc, char* argv[])
{
    float a[maxf][maxc];
    int f, c;

    // Leer el array
    cout << "Ingresa los elementos de la matriz (" << maxf << "x" << maxc << "):" << endl;
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++) {
            cin >> a[f][c];
        }
    }

    // Escribir el array
    cout << "Matriz ingresada:" << endl;
    for (f = 0; f < maxf; f++)
    {
        for (c = 0; c < maxc; c++)
        {
            cout << a[f][c] << " ";  // Imprime los elementos de la fila en la misma línea
        }
        cout << endl;  // Salto de línea después de cada fila
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

