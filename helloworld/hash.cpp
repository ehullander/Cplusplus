#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;


int main() {

    
    char alphabet[] = "abcdefghijklmnopqrstuvwxvz";
    //char *test[] = {"eric"};
    //char test[] = "eric";
    const char *test[] = {"erick", "mark"};
    std::vector<string> names;
    names.push_back("eric");
    names.push_back("mark");
    //cout << test[0] << endl;
    //cout << sizeof(char) << endl;
    int N = sizeof(alphabet)/sizeof(alphabet[0]);
    std::unordered_map<char, int> alphabetMap = {};
    for (int i = 0; i < N; i++) {
        alphabetMap[alphabet[i]] = i;
    };

    for (int j = 0; j <  names.size(); j++) {
        for (int k = 0; k < names[j].size(); k++) {
            cout << alphabetMap[names[j][k]] << " ";
            };
            cout << endl;
        };
    return 0;
}
