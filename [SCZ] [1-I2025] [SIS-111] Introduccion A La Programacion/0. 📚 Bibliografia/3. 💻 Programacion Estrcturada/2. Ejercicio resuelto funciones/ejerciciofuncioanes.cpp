// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void display_instructions();
int get_user_input();
int calcular_sum(int n);
void display_output(int sum);

int main() {
    display_instructions();
    int user_input = get_user_input();
    int sum = calcular_sum(user_input);
    display_output(sum);
    return 0;
}

void display_instructions() {
    cout << "Este programa calcula la suma desde 1 hasta n" << endl;
    cout << "Es decir 1+2+3+..+n" << endl;
    cout << "Introduce un numero n mayor a cero" << endl;
} 

int get_user_input() {
    int num = 0;
    cin >> num;
    while(num <= 0) {
        cout << "El numero debe ser mayor a cero" << endl;
        cin >> num;
    }
    return num;
} 

int calcular_sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

void display_output(int sum) {
    cout << "La suma de los numeros es " << sum << endl;
}
