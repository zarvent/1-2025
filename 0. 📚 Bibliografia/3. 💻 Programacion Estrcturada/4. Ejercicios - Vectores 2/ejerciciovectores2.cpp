// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v);
int sumElements(vector<int> v);
float calculateMedia(vector<int> v);
float calcularMedia(int sum, int elements);

int main() {
    vector<int> vec = {2, 3, 1, 3, 5, 7, 8, 9, 10, 12};
    printVector(vec);
    int result = sumElements(vec);
    cout << result << endl;
    
    int media = calculateMedia(vec);
    cout << media << endl;
    
    int media2 = calcularMedia(result, vec.size());
    cout << media2 << endl;
    
    return 0;
}

float calcularMedia(int sum, int elements) {
    float media = sum / elements;
    return media;
}


void printVector(vector<int> v) {
    for(int idx = 0; idx < v.size() - 1; idx++) {
        cout << v[idx] << " -> ";
    }
    // cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;
    
}

int sumElements(vector<int> v)  {
    int sum = 0;
    for(int idx = 0; idx < v.size(); idx++){
        sum += v[idx];
    }
    return sum;
}   

float calculateMedia(vector<int> v) {
    int sum = sumElements(v);
    float media = sum / v.size();
    return media;
}
