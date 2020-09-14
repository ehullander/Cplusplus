#include <cstdio>
#include "hw.h"

/*
int step_function(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}
*/
int main(){
    printf("Hello, wolrd!\n");
    int value1 = step_function(100);
    printf("%d\n", value1);
    return 0;

}