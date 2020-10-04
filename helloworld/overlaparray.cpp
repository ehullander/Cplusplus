#include <iostream>
#include <algorithm>
using namespace std;

int getFirstBirth(int n, int birth[]) {
    int firstBirth = *std::min_element(birth, birth + n);
    return firstBirth;
}

int getLastBirth(int n, int birth[]) {
    int firstBirth = *std::max_element(birth, birth + n);
    return firstBirth;
}


int * getDeltas(int n, int birth[], int death[]) {
    int firstBirth = getFirstBirth(n, birth);
    static int deltas[500];
    for (int i = 0; i < n; i ++) 
    {
        int birthIndex = birth[i] - firstBirth;
        int deathIndex = death[i] - firstBirth;
        deltas[birthIndex]++;
        deltas[(deathIndex + 1)]--;
    };
    return deltas;
}

void getMax(int * birth, int * death, int n) {
    int * deltas = getDeltas(n, birth, death);
    int lastBirth = getLastBirth(n, birth);
    int firstBirth = getFirstBirth(n, birth);
    int maxPop = 0;
    int maxYear = 0;
    for (int i = 1; i < (lastBirth - firstBirth); i ++) 
    {
        deltas[i] = deltas[i] + deltas[i-1];
        if (deltas[i] > maxPop) {
            maxPop = deltas[i];
            maxYear = firstBirth + i;
        }
    }
    cout << maxYear << " " << maxPop;
};


int main () {
    int birth[] = {1778, 1780, 1910, 1609, 1955, 1977, 2018, 1790, 1955, 1969};
    int death[] = {1800, 1820, 1980, 1669, 1955, 1985, 2020, 1850, 2010, 2019};
    int n = sizeof(birth)/sizeof(birth[0]);
    getMax(birth, death, n);
}

