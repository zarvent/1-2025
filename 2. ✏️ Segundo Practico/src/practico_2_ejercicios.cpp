
//Incluire las librerias necesarias
#include <cmath>  // Biblioteca para funciones matemáticas
#include <iostream>  // Biblioteca para entrada/salida estándar

using namespace std;  // Permite usar nombres como cout sin el prefijo std::


/*============================
  ------- EJERCICIO 1 -------
==============================
--- ENUNCIADO ---
Para buscar documentos, debe poder dividir el texto en palabras. Inicialmente, 
lo haremos de una forma no estandar: escriba su propio algoritmo. 
Las palabras están separadas por espacios. Se garantiza exactamente un espacio entre palabras. 
La línea comienza con una palabra (no un espacio) y termina con el final de la línea (\n). 
Solo se ingresa una línea, el final de la línea también es uno, y alguna palabra siempre termina antes. 
Lea toda la línea desde la terminal hasta una nueva línea. 
Para cada palabra, imprima el índice después del último carácter de la palabra. 
Recuerde, la indexación comienza desde cero.

Restricciones Hay un espacio entre las palabras. 
No hay espacios al principio o al final de la cadena. Hay exactamente una línea en la consulta.


--- ENTRADA  ---
green parrot
Salida

--- SALIDA ---
5
12

> Entra una linea de texto con palabras separadas por un solo espacion
> No hay espacios al inicio ni al final
> Termina con \n (salto de linea)


--- SU RELACION ---
Posición: 0 1 2 3 4 5 6 7 8 9 10 11
Carácter: g r e e n   p a r r o  t
          ^-------^   ^-----------^
          palabra 1   palabra 2

> Palabra 1 ("green"): termina en posición 4
> Palabra 2 ("parrot"): termina en posición 11
> Patrón: El último carácter de cada palabra está justo antes de un espacio o al final de la cadena  


--- PSEUDOCODIGO / DIAGRAMA DE FLUJO ---
INICIO
    LEER cadena_texto

    PARA zarvent = 0 HASTA longitud(cadena_texto) - 1
        SI cadena_texto[zarvent] == ' ' ENTONCES
            IMPRIMIR zarvent - 1
        FIN SI
    FIN PARA

    IMPRIMIR longitud(cadena_texto) - 1
FIN


--- IMPLEMENTACION ---     // Logica del ejercicio 1 del practico 2 */
void ejercicio_1(string s1) {
    int index = 0; //El Indice Actual
    for( int zarvent = 0; zarvent < s1.length(); zarvent++){
      if (s1[zarvent] == ' '){
        cout << zarvent << endl; 
      }
    }
    cout << s1.length() << endl;
}

/*============================
  ------- EJERCICIO 2  -------
==============================
Ahora escriba las palabras encerradas entre corchetes. Por ejemplo, si la entrada fue un green parrot, la salida debería ser:

[green]
[parrot]

Puedes reutilizar el algoritmo del problema anterior. Allí ibas a lo largo de la línea y verificaste si el caracter era un espacio. Si el carácter no era un espacio, simplemente lo saltabas y seguía adelante. Ahora este caso tendrá que ser procesado.
Cree una variable de cadena, word, en la que agregará carácter por carácter de la cadena original, si este carácter no es un espacio. Si se encuentra un espacio, muestre [, la palabra acumulada y] y asigne una cadena vacía a la variable, word, para reiniciar el proceso con la siguiente palabra de la cadena.
Restricciones Lo mismo que en el ejercicio anterior:
• Hay un espacio entre las palabras.
• Una línea comienza con una palabra y termina con el final de una línea.
• Hay exactamente una línea en la consulta.

Perfecto, resolvamos el Ejercicio 2 siguiendo los 5 pasos:

## 1. Encontrar las Entradas y Salidas

### **Entradas:**
- Una línea de texto con palabras separadas por un solo espacio
- No hay espacios al inicio ni al final
- La línea comienza con una palabra y termina con `\n`
- Ejemplo: `"green parrot"`

### **Salidas:**
- Cada palabra encerrada entre corchetes, una por línea
- Ejemplo:
  ```
  [green]
  [parrot]
  ```

## 2. Entender su Relación

### Análisis del proceso:
```
Entrada: "green parrot"
         ^----^  ^-----^
         word1   word2

Proceso:
1. Leer 'g' → word = "g"
2. Leer 'r' → word = "gr"
3. Leer 'e' → word = "gre"
4. Leer 'e' → word = "gree"
5. Leer 'n' → word = "green"
6. Leer ' ' → Imprimir "[green]", reiniciar word = ""
7. Leer 'p' → word = "p"
8. Leer 'a' → word = "pa"
9. Leer 'r' → word = "par"
10. Leer 'r' → word = "parr"
11. Leer 'o' → word = "parro"
12. Leer 't' → word = "parrot"
13. Fin de cadena → Imprimir "[parrot]"
```

### **Relación clave:**
- Acumulamos caracteres hasta encontrar un espacio
- Al encontrar un espacio, imprimimos la palabra acumulada
- Al final de la cadena, imprimimos la última palabra

## 3. Pseudocódigo / Diagrama de Flujo

### **Pseudocódigo:**

INICIO
    LEER cadena_texto
    word = ""  // cadena vacía
    
    PARA i = 0 HASTA longitud(cadena_texto) - 1
        SI cadena_texto[i] != ' ' ENTONCES
            word = word + cadena_texto[i]
        SINO
            IMPRIMIR "[" + word + "]"
            word = ""  // reiniciar palabra
        FIN SI
    FIN PARA
    
    // Imprimir la última palabra
    IMPRIMIR "[" + word + "]"
FIN

 **Análisis paso a paso con "green parrot
i=0: s1[0]='g' → word="g"
i=1: s1[1]='r' → word="gr"
i=2: s1[2]='e' → word="gre"
i=3: s1[3]='e' → word="gree"
i=4: s1[4]='n' → word="green"
i=5: s1[5]=' ' → Imprime "[green]", word=""
i=6: s1[6]='p' → word="p"
i=7: s1[7]='a' → word="pa"
i=8: s1[8]='r' → word="par"
i=9: s1[9]='r' → word="parr"
i=10: s1[10]='o' → word="parro"
i=11: s1[11]='t' → word="parrot"
Fin del bucle → Imprime "[parrot]"
*/

void ejercicio_2(string s1) {
  string word = "";
    // TODO: Implementar lógica para el ejercicio 2
    //Procesamos cada caracter y el final
    for(int i = 0; i <= s1.length(); i++) {
      //Si llegamos al final o encontramos un espacio [IF]
      if(i == s1.length() || s1[i] == ' '){
        if(!word.empty){ //Solo si word tiene contenido [IF !]
          cout << "[" << word << "]" << endl;
          word = "";
    }
    else{
      word += s1[i]; /* Si el caracter no es espacio, lo agregaremos a la palabra
                        += siginifica "agregar al final"
                        word += s1[i] es lo mismo que word = word + s1[1]
                      */
      }
    }
}
}

void ejercicio_3(string s1) {
    // TODO: Implementar lógica para el ejercicio 3
}

void ejercicio_4(int n) {
    // TODO: Implementar lógica para el ejercicio 4
}

void ejercicio_5(int n, int k) {
    // TODO: Implementar lógica para el ejercicio 5
}

int ejercicio_6(int n) {
    // TODO: Implementar lógica para el ejercicio 6
    return 0;  // Devuelve un entero como resultado
}

void ejercicio_7(int n) {
    // TODO: Implementar lógica para el ejercicio 7
}

void ejercicio_8(string s) {
    // TODO: Implementar lógica para el ejercicio 8
}

void ejercicio_9(string s) {
    // TODO: Implementar lógica para el ejercicio 9
}

int ejercicio_10(int a, int b) {
    // TODO: Implementar lógica para el ejercicio 10
    return 0;  // Devuelve un entero como resultado
}

void ejercicio_11() {
    // TODO: Implementar lógica para el ejercicio 11
}

void ejercicio_12() {
  // TODO: Implementar lógica para el ejercicio 12
}

long ejercicio_13(int n, int k) {
  // TODO: Implementar lógica para el ejercicio 13
  return 0;
}

string ejercicio_14(int n) {
  // TODO: Implementar lógica para el ejercicio 14
  return "";
}

void ejercicio_15(int decimal) {
  // TODO: Implementar lógica para el ejercicio 15
}

void ejercicio_16(int divident, int divider) {
  // TODO: Implementar lógica para el ejercicio 16
}

void ejercicio_17(int n) {
  // TODO: Implementar lógica para el ejercicio 17
}

void ejercicio_18_19(int debut, int fin) {
  // TODO: Implementar lógica para el ejercicio 18 y 19
}