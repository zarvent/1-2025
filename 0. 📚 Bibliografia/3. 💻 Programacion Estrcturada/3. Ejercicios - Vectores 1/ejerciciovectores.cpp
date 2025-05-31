#include <iostream>
#include <vector>

using namespace std;

int globalStart = 0;
void printNumbers(int start, int end);
void printVector(vector<int> vec); 
void printVectorString(vector<string> vec);
vector<int> sumVectors(vector<int> vec1, vector<int> vec2);

int main() {
    vector<int> nums1 = { 2, 3, 1, 2, 5, 6, 8, -2, 0 };
    vector<int> nums2 = { 2, 3, 1, 2, 5, 6, 8, -2, 0 };
    vector<int> result = sumVectors(nums1, nums2);
    printVector(result);
    return 0;
}

vector<int> sumVectors(vector<int> vec1, vector<int> vec2) {
    vector<int> sums = {};
    for(int idx = 0; idx < vec1.size(); idx++) {
        int sum = vec1[idx] + vec2[idx]; 
        sums.push_back(sum);
    }
    return sums;
}

void printVectorString(vector<string> vec) {
    for (int idx = 0; idx < vec.size(); idx++){
        cout << vec[idx] << endl;
    }
}

void printVector(vector<int> vec) {
    for (int idx = 0; idx < vec.size(); idx++){
        cout << vec[idx] << endl;
    }
}


void printNumbers(int start, int end) {
    if (start <= end) {
        for(int i = start; i <= end; i++){
            cout << i << endl;
        }    
    } else {
        for(int i = start; i >= end; i--){
            cout << i << endl;
        }           
    }
}