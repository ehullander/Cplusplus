#include <cstdio>
using namespace std;

//declare pointer passed to printArray
void printArray(int* myarray, int size) {
        //deference
        for (int i = 0; i < size; i++) {        
            printf("%d\n", *myarray + i);
        }
};

int main()
{
    int myarray[3] = {1,2,3};
    int L = sizeof(myarray)/sizeof(myarray[0]);
    //printf("%d\n", L);
    //arrays are like pointers
    printArray(myarray, L);
    return 0;
}
