#include <iostream>
#include <unordered_map>
using namespace std;

/*
int main() {
    int numbers[] = {1,2,3,1,3,4,5,4,2,0};
    int target = 6;
    int L = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < L; i++) {
        for (int j = i + 1; j < L; j++) {
            if (numbers[i] + numbers[j] == target) {
                cout << "{" << numbers[i] << "," << numbers[j] << "}";
            }
        }
    }
    return 0;
}
*/

int main() {
    int numbers[] = {1,2,3,1,3,4,5,4,2,0};
    int target = 6;
    int L = sizeof(numbers)/sizeof(numbers[0]);
    std::unordered_map<int, int> mateMap = {};
    for (int i = 0; i < L; i++) {
        mateMap[numbers[i]] = 1;
    }

    for (int j = 0; j < L; j++)
    {
        if (mateMap[target - numbers[j]] == 1) {
            cout << numbers[j] << "," << target - numbers[j] << endl;
        }
    }
    return 0;
}