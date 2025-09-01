
#include "Coleccion.h"
#include <random>
#include <iostream>
using namespace std;

Coleccion::Coleccion(int sizeV, int rowscolsM) {
    this->sizeV = sizeV;
    this->rowscolsM = rowscolsM;
    colsM = rowscolsM;
    rowsM = rowscolsM;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, 9);

    v = new int* [sizeV];
    for (int i = 0; i < sizeV; ++i)
        *(v + i) = new int(0);

    vBingo = new int* [rowscolsM];
	
    for (int i = 0; i < rowscolsM; ++i) {
        srand(time(NULL));
    int randomValue = distr(gen);
    *(vBingo + i) = new int(randomValue);
    cout << *(*(vBingo + i)) << " ";
}
	cout << endl;
    m = new int**[rowsM];
    for (int i = 0; i < rowsM; ++i) {
        *(m + i) = new int*[colsM];
        for (int j = 0; j < colsM; ++j) {
            srand(time(NULL));
            int randomValue2 = (distr(gen));
            *(*(m + i) + j) = new int(randomValue2);
			cout << *(*(*(m + i) + j)) << " ";
        }
    }
}

Coleccion::~Coleccion() {
    for (int i = 0; i < sizeV; ++i)
        delete *(v + i);
    delete[] v;

    for (int i = 0; i < rowsM; ++i) {
        for (int j = 0; j < colsM; ++j)
            delete *(*(m + i) + j);
        delete[] *(m + i);
    }
    delete[] m;
}

void Coleccion::inicializarVectorEnCero() {
    for (int i = 0; i < sizeV; ++i)
        *(*(v + i)) = 0;
}

void Coleccion::ordenarVectorAscendente() {
    for (int i = 0; i < sizeV - 1; ++i) {
        for (int j = i + 1; j < sizeV; ++j) {
            if (*(*(v + i)) > *(*(v + j))) {
                int temp = *(*(v + i));
                *(*(v + i)) = *(*(v + j));
                *(*(v + j)) = temp;
            }
        }
    }
}

int Coleccion::contarParesEnVector() {
    int cont = 0;
    for (int i = 0; i < sizeV; ++i)
        if (*(*(v + i)) % 2 == 0)
            cont++;
    return cont;
}

int Coleccion::buscarElementoEnVector(int valor) {
    for (int i = 0; i < sizeV; ++i)
        if (*(*(v + i)) == valor)
            return i;
    return -1;
}

int Coleccion::sumaDiagonalPrincipal() {
    int suma = 0;
    for (int i = 0; i < rowsM && i < colsM; ++i)
        suma += *(*(*(m + i) + i));
    return suma;
}

int Coleccion::sumaDiagonalSecundaria() {
    int suma = 0;
    for (int i = 0; i < rowsM && i < colsM; ++i)
        suma += *(*(*(m + i) + (colsM - i - 1)));
    return suma;
}

void Coleccion::transponerMatriz(int ***resultado) {
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            *(*(*(resultado + j) + i)) = *(*(*(m + i) + j));
}

int Coleccion::encontrarMaximoEnMatriz() {
    int max = *(*(*(m + 0) + 0));
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            if (*(*(*(m + i) + j)) > max)
                max = *(*(*(m + i) + j));
    return max;
}

int Coleccion::contarOcurrenciasEnMatriz(int valor) {
    int cont = 0;
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            if (*(*(*(m + i) + j)) == valor)
                cont++;
    return cont;
}

int Coleccion::sumaTotalMatriz() {
    int suma = 0;
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            suma += *(*(*(m + i) + j));
    return suma;
}

double Coleccion::promedioVector() {
    int suma = 0;
    for (int i = 0; i < sizeV; ++i)
        suma += *(*(v + i));
    return sizeV > 0 ? (double)suma / sizeV : 0;
}

void Coleccion::invertirVector() {
    for (int i = 0; i < sizeV / 2; ++i) {
        int temp = *(*(v + i));
        *(*(v + i)) = *(*(v + sizeV - i - 1));
        *(*(v + sizeV - i - 1)) = temp;
    }
}

void Coleccion::copiarVector(int **destino) {
    for (int i = 0; i < sizeV; ++i)
        *(*(destino + i)) = *(*(v + i));
}

bool Coleccion::esVectorPalindromo() {
    for (int i = 0; i < sizeV / 2; ++i)
        if (*(*(v + i)) != *(*(v + sizeV - i - 1)))
            return false;
    return true;
}

void Coleccion::multiplicarMatrizPorEscalar(int escalar) {
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            *(*(*(m + i) + j)) *= escalar;
}

int Coleccion::sumarFilaMatriz(int fila) {
    int suma = 0;
    for (int j = 0; j < colsM; ++j)
        suma += *(*(*(m + fila) + j));
    return suma;
}

int Coleccion::sumarColumnaMatriz(int col) {
    int suma = 0;
    for (int i = 0; i < rowsM; ++i)
        suma += *(*(*(m + i) + col));
    return suma;
}

bool Coleccion::esSimetrica() {
    if (rowsM != colsM) return false;
    for (int i = 0; i < rowsM; ++i)
        for (int j = 0; j < colsM; ++j)
            if (*(*(*(m + i) + j)) != *(*(*(m + j) + i)))
                return false;
    return true;
}

void Coleccion::llenarMatrizEnEspiral() {
    int val = 1, top = 0, bottom = rowsM - 1, left = 0, right = colsM - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            *(*(*(m + top) + i)) = val++;
        top++;
        for (int i = top; i <= bottom; i++)
            *(*(*(m + i) + right)) = val++;
        right--;
        for (int i = right; i >= left; i--)
            *(*(*(m + bottom) + i)) = val++;
        bottom--;
        for (int i = bottom; i >= top; i--)
            *(*(*(m + i) + left)) = val++;
        left++;
    }
}

void Coleccion::llenarVectorSecuencia() {
    for (int i = 0; i < sizeV; ++i)
        *(*(v + i)) = i + 1;
}

bool Coleccion::buscarBingoRow()
{
    int q;
    for (int i = 0; i < rowsM; i++) {
        for (int j = 0; j < colsM; j++) {
            if (*(*(*(m + i) + j)) == *(*(vBingo))) {
                for (int k = 1; k <= colsM; k++) {
                    if(k== colsM) return true;
					else if(*(*(*(m + i) + j + k)) != *(*(vBingo + k))) {
                        break;
					}
                    q = k;
                }
            }
        }
    }
    for (int i = 0; i < rowsM; i++) {
        for (int j = colsM-1; j > 0; j--) {
            if (*(*(*(m + i) + j)) == *(*(vBingo))) {
                for (int k = 1; k <= colsM; k++) {
                    if (*(*(*(m + i) + j - k)) != *(*(vBingo + k))) {
                        break;
                    }
                    q = k;
                }
            }
        }
    }
	return false;
}

bool Coleccion::buscarBingoColumn()
{
    int q;
    for (int j = 0; j < colsM; j++) {
        for (int i = 0; i < rowsM; i++) {
            if (*(*(*(m + j) + i)) == *(*(vBingo))) {
                for (int k = 1; k < rowsM; k++) {
                    if (*(*(*(m + i) + j + k)) != *(*(vBingo + k))) {
                        break;
                    }
                    q = k;
                }
				if (q == rowsM) return true;
            }
        }
    }
    for (int j = 0; j < colsM; j++) {
        for (int i = rowsM-1; i > 0; i--) {
            if (*(*(*(m + j) + i)) == *(*(vBingo))) {
                for (int k = 1; k <= rowsM; k++) {
                    if (*(*(*(m + i) + j - k)) != *(*(vBingo + k))) {
                        break;
                    }
                    q = k;
                }
                if (q == rowsM) return true;
            }
        }
    }
	return false;
}

bool Coleccion::buscarBingoDiagonal()
{
    int q;
    for (int i = 0,j = 0; i < rowsM && j < colsM;i++,j++) {
            if (*(*(*(m + i) + j)) == *(*(vBingo))) {
                for (int k = 1; k < colsM; k++) {
                    if (*(*(*(m + i + k) + j + k)) != *(*(vBingo + k))) {
                        break;
                    }
					q = k;
                }
                if (q == rowsM) return true;
            }
        }
    for (int i=0, j = colsM-1; i < rowsM && j > 0; i++, j--) {
        if (*(*(*(m + i) + j)) == *(*(vBingo))) {
            for (int k = 1; k < colsM; k++) {
                if (*(*(*(m + i + k) + j - k)) != *(*(vBingo + k))) {
                    break;
                }
				q = k;
            }
            if (q == rowsM) return true;
        }
    }
	return false;
}

bool Coleccion::buscarDiagonalInversa()
{
	int q;
    for (int i = rowsM-1, j = colsM-1; i > 0 && j > 0; i--, j--) {
        if (*(*(*(m + i) + j)) == *(*(vBingo))) {
            for (int k = 1; k < colsM; k++) {
                if (*(*(*(m + i - k) + j - k)) != *(*(vBingo + k))) {
                    break;
                }
				q = k;
            }
            if (q == rowsM) return true;
        }
    }
    for (int i = rowsM-1, j = 0; i > 0 && j < colsM; i--, j++) {
        if (*(*(*(m + i) + j)) == *(*(vBingo))) {
            for (int k = 1; k < colsM; k++) {
                if (*(*(*(m + i - k) + j + k)) != *(*(vBingo + k))) {
                    break;
                }
				q = k;
            }
            if (q == rowsM) return true;
        }
    }
	return false;
}

void Coleccion::buscarBingo()
{
    if (buscarBingoRow() == true || buscarBingoColumn() == true || buscarBingoDiagonal() == true || buscarDiagonalInversa() == true)
		cout<<"BINGO!";
	else if(buscarBingoRow() == false && buscarBingoColumn() == false && buscarBingoDiagonal() == false && buscarDiagonalInversa() == false)
        cout<<"No hay bingo :(";
}

