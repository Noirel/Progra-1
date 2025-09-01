
#ifndef COLECCION_H
#define COLECCION_H

class Coleccion {
private:
    int **v;
    int** vBingo;
    int ***m;
    int sizeV, rowscolsM, rowsM, colsM;
public:
    Coleccion(int sizeV, int rowscolsM);
    ~Coleccion();

    void inicializarVectorEnCero();
    void ordenarVectorAscendente();
    int contarParesEnVector();
    int buscarElementoEnVector(int valor);
    int sumaDiagonalPrincipal();
    int sumaDiagonalSecundaria();
    void transponerMatriz(int ***resultado);
    int encontrarMaximoEnMatriz();
    int contarOcurrenciasEnMatriz(int valor);
    int sumaTotalMatriz();
    double promedioVector();
    void invertirVector();
    void copiarVector(int **destino);
    bool esVectorPalindromo();
    void multiplicarMatrizPorEscalar(int escalar);
    int sumarFilaMatriz(int fila);
    int sumarColumnaMatriz(int col);
    bool esSimetrica();
    void llenarMatrizEnEspiral();
    void llenarVectorSecuencia();

	bool buscarBingoRow();
	bool buscarBingoColumn();
	bool buscarBingoDiagonal();
	bool buscarDiagonalInversa();
	void buscarBingo();
};

#endif
