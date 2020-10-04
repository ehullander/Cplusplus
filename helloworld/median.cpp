#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int arr1[] = {-4,-6, -1, -1, -1, 0, 2, 15};
    int arr2[] = {-50,-20, 25, 45};
    int length1 = sizeof(arr1)/sizeof(arr1[0]);
    int length2 = sizeof(arr2)/sizeof(arr2[0]);
    int medianIndex = ceil((length1 + length2)/2);
    //cout << medianIndex << length1 << length2;
    int arr1Iterator = 0;
    int arr2Iterator = 0;
    int median;
    for (int i = 0; i < medianIndex; i++) {
        if (arr1[arr1Iterator] <= arr2[arr2Iterator]) {
            median = arr1[arr1Iterator];
            arr1Iterator++;
        }
        else {
            median = arr2[arr2Iterator];
            arr2Iterator++;
        }
    }
    cout << median;
    return 0;
}