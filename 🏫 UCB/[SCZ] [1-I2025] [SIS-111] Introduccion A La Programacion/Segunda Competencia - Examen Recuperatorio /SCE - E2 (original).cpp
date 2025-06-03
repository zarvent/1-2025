//librerias
#include <iostream>
#include <vector>
using namespace std;

// --- funciones para operaciones ---
// funcion para sumar dos matrices

// entra: dos matrices (m1, m2) fijas, para no modificarlas
// sale: una nueva matriz que es la suma de m1 y m2
vector<vector<int>> sumarMatrices(const vector<vector<int>>& m1, const vector<vector<int>>& m2) {

	// obtenemos tamano 'n' de la matriz (se asume  cuadradas y del mismo tamano)
	int n = m1.size();

	// creare la matriz 'resultado' iniciando con ceros y del mismo tamano 'n'
	vector<vector<int>> resultado(n, vector<int>(n, 0));

	// se recorre cada elemento de las matrices
	// 'i' para las filas
	for (int i = 0; i < n; i++) {

		// 'j' para las columnas
		for (int j = 0; j < n; j++) {

			// se suma m1 con m2 y se guarda como resultado
			resultado[i][j] = m1[i][j] + m2[i][j];
		}
	}
	// devolvemos la matriz 'resultado'
	return resultado;
}

//------------------------------------------------
// funcion para restar dos matrices
// parecida a suna pero restando los elementos

// recibe: dos matrices (m1, m2) constantes
// devuelve: una nueva matriz que es la resta de m1 y m2
vector<vector<int>> restarMatrices(const vector<vector<int>>& m1, const vector<vector<int>>& m2) {
	int n = m1.size(); //tamano de la matriz
	vector<vector<int>> resultado(n, vector<int>(n, 0)); // matriz resultado inicializada

	// bucle para filas
	for (int i = 0; i < n; i++) {

		// bucle para columnas
		for (int j = 0; j < n; j++) {

			// restamos los elementos y guardamos
			resultado[i][j] = m1[i][j] - m2[i][j];
		}
	}
	return resultado; // devolvemos el resultado
}

//------------------------------------------------
// funcion para multiplicar dos matrices

// entra: dos matrices (m1, m2) constantes
// entra: una nueva matriz producto
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& m1, const vector<vector<int>>& m2) {
	int n = m1.size(); // tamano
	vector<vector<int>> resultado(n, vector<int>(n, 0)); // matriz resultado inicializada en ceros

	// bucle para la fila de la primera matriz (m1)
	for (int i = 0; i < n; i++) {
		// bucle para la columna de la segunda matriz (m2)
		for (int j = 0; j < n; j++) {
			// bucle interno para la multiplicacion y suma de los elementos
			// 'k' recorre columnas de m1 y filas de m2
			for (int k = 0; k < n; k++) {
				resultado[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return resultado; // devolvemos el producto
}

//------------------------------------------------
// funciones para calculos adicionales
// funcion para calcular la suma de la diagonal principal de una matriz

// entra: una matriz constante
// sale: la suma de los elementos donde fila == columna
int calcularDiagonal(const vector<vector<int>>& matriz) {
	int suma = 0; // se inicia la suma en cero

	// recorremos la matriz. solo necesitamos un indice 'i' porque es la diagonal (matriz[i][i])
	for (int i = 0; i < matriz.size(); i++) {
		suma += matriz[i][i]; // sumamos el elemento de la diagonal
	}
	return suma; // devolvemos la suma total
}

// funcion para calcular el valor medio (promedio) de todos los elementos de la matriz

// entra: una matriz constante.
// sale: el promedio como un double.
double calcularValorMedio(const vector<vector<int>>& matriz) {
	int suma = 0; // suma total de los elementos

	// calculamos el numero total de elementos (n*n para una matriz cuadrada)
	int elementos = matriz.size() * matriz.size();

	// recorremos todos los elementos para sumarlos
	for (int i = 0; i < matriz.size(); i++) { // filas
		for (int j = 0; j < matriz[i].size(); j++) { // columnas
			suma += matriz[i][j]; // acumulamos la suma
		}
	}
	// calculamos el promedio. 
	// Ni idea, en teoria deberia ser (suma) / elementos;
}

// --- funcion principal (main) ---
int main() {
	int n; // variable para guardar el tamano de las matrices

	// pedimos al usuario el tamano de las matrices
	cout << "ingrese el tamano de las matrices (nxn): ";
	cin >> n; // leemos el tamano.

	// creamos las dos matrices con el tamano 'n' especificado
	vector<vector<int>> matriz1(n, vector<int>(n));
	vector<vector<int>> matriz2(n, vector<int>(n));

	// pedimos los elementos para la primera matriz
	cout << "ingrese los elementos de la primera matriz:\n";
	// bucle para leer cada elemento.
	for (int i = 0; i < n; i++) { // filas
		for (int j = 0; j < n; j++) { // columnas
			cin >> matriz1[i][j]; // leemos el elemento
		}
	}

	// pedimos los elementos para la segunda matriz
	cout << "ingresa los elementos de la segunda matriz:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matriz2[i][j];
		}
	}

	char operacion; // con esta variable guardamos la operacion a realizar
	// se pide al usuario que ingrese la operacion
	cout << "ingresa la operacion ('+', '-', '*'): ";
	cin >> operacion; // algoritmo lee la operacion

	vector<vector<int>> resultado; // matriz para guardar el resultado de la operacion

	// verificamos que operacion se selecciono
	if (operacion == '+') {
		// si es '+' llamamos a la funcion sumarmatrices
		resultado = sumarMatrices(matriz1, matriz2);
	} else if (operacion == '-') {
		// si es '-' llamamos a restarmatrices
		resultado = restarMatrices(matriz1, matriz2);
	} else if (operacion == '*') {
		// si es '*' llamamos a multiplicarmatrices
		resultado = multiplicarMatrices(matriz1, matriz2);
	} else {
		// si la operacion no es valida mostramos un mensaje y terminamos
		cout << "operacion no valida." << endl;
		return 1; // indicamos k hubo un error
	}

	// mostramos el resultado de la operacion
	cout << "resultado de la operacion:\n";

	/* *SE SUPONE QUE* usamos un bucle para mostrar la matriz resultado
	   ni idea de como se hara :(
	  for (fila : resultado) {  (por cada fila en 'resultano')
	    for (int elemento : fila) { (por cada elemento en 'fila)
	        //cout << elemento << " "; (mostramos el elemento)
	    }
	    cout << endl; (nueva linea despues de cada fila)
	}/*

	// se calcula y se muestra la suma de la diagonal principal de la matriz resultado
	cout << "suma de la diagonal principal: " << calcularDiagonal(resultado) << endl;

	// se calcula y se muestra el valor medio de los elementos de la matriz resultado
	cout << "valor medio de los elementos: " << calcularValorMedio(resultado) << endl;

	return 0;
	// FIIIIIIIINNNNNNNNNNNNNNNNNNNNN
	//se acabo, se termino, concluyo, finalizo, chau,adios
	}