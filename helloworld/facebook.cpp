#include <iostream>

using namespace std;

void compareAdd(int * testArray, int target, int size) {
    for(int i=0; i < size; i++) {
        for(int j=i; j < size; j++) {
            if (testArray[i] + testArray[j] == target) {
                cout << "{" << testArray[i] << "," << testArray[j] << "}\n";
            };

        };
    };
};

int main() {
    int target = 8;
    int testArray[] = {1,3,4,7,0,2,5};
    //output print {1,7}{3,5}
    //for each element i, look through the remaing elements N, add i to Nj == target?
    int N = sizeof(testArray)/sizeof(testArray[0]);
    compareAdd(testArray, target, N);
    return 0;
}