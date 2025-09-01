
#include "Interfaz.h"
#include "Coleccion.h"
#include <iostream>
using namespace std;

void Interfaz::menu() {
    int tam, filasCols;
    cout << "Tamaño del vector: "; cin >> tam;
    cout << "Filas y Columnas de la matriz: "; cin >> filasCols;

    Coleccion col(tam, filasCols);
    int opcion;
    do {
        cout << "\n--- MENU DE OPERACIONES ---\n";
        cout << "1. Bingo?\n";
        cout << "2. Ordenar vector ascendente\n";
        cout << "3. Contar pares en vector\n";
        cout << "4. Buscar elemento en vector\n";
        cout << "5. Suma diagonal principal\n";
        cout << "6. Suma diagonal secundaria\n";
        cout << "7. Maximo en matriz\n";
        cout << "8. Contar ocurrencias en matriz\n";
        cout << "9. Suma total matriz\n";
        cout << "10. Promedio del vector\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: col.buscarBingo(); break;
            case 2: col.ordenarVectorAscendente(); break;
            case 3: cout << "Pares: " << col.contarParesEnVector() << endl; break;
            case 4: {
                int val;
                cout << "Valor a buscar: "; cin >> val;
                int pos = col.buscarElementoEnVector(val);
                if (pos == -1) cout << "No encontrado\n";
                else cout << "Encontrado en posicion: " << pos << endl;
                break;
            }
            case 5: cout << "Suma diagonal principal: " << col.sumaDiagonalPrincipal() << endl; break;
            case 6: cout << "Suma diagonal secundaria: " << col.sumaDiagonalSecundaria() << endl; break;
            case 7: cout << "Máximo en matriz: " << col.encontrarMaximoEnMatriz() << endl; break;
            case 8: {
                int x;
                cout << "Valor a contar: "; cin >> x;
                cout << "Ocurrencias: " << col.contarOcurrenciasEnMatriz(x) << endl;
                break;
            }
            case 9: cout << "Suma total matriz: " << col.sumaTotalMatriz() << endl; break;
            case 10: cout << "Promedio del vector: " << col.promedioVector() << endl; break;
        }
    } while (opcion != 0);
}
