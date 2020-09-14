#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Calculator(Operation Op) {
    // Save the operation into the op member
    op = Op;
    }
    Operation op;

    int calculate(int a, int b) {
        switch (op) {
            case Operation::Add: {
            return a + b;
            };
        };
    };
};

int main() {
  Calculator add_calc(Operation::Add);
  int x = add_calc.calculate(1,2);
  return 0;
}