#include <iostream>
#include <vector>
using namespace std;

void findNoodle(vector<bool> noodle);

int main() {
    vector<bool> noodle = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
    findNoodle(noodle);
    return 0;
}

void findNoodle(vector<bool> noodle) {
    for(int pos = 0; pos < noodle.size(); pos++) {
        if(noodle[pos] == 1) {
            cout << pos << endl;
        }
    }
}