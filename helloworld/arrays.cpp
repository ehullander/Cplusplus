#include <iostream>

int main() {
    int L = 5;
    int my_array[5];
    //char16_t chinese[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";
    for(int i = 0; i <= 5; i++) {
        my_array[i] =rand();
        std::cout << my_array[i] << "\n";
    }
    return 0;
}