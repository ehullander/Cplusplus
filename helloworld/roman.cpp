#include <iostream>
using namespace std;

void getRomans(int dec) {
    int divisors[] = {1000, 500, 100, 50, 10, 5, 1};
    char romans[] = "MDCLXVI";
    for (int i = 0; i < 7; i++) {
        int multiplier = dec/divisors[i];
        for (int k = 0; k < multiplier; k++) {
            cout << romans[i];
        }
        dec = dec % divisors[i];
    }
    cout << endl;
}

int main() {
    int years[] = {1066, 1492, 1776, 1812, 1865, 1914, 1944, 1977, 1982, 2000, 2001, 2019, 2020};
    int L = sizeof(years)/sizeof(years[0]);
    for (int i = 0; i < L; i++) {
        getRomans(years[i]);
    }
    return 0;
}