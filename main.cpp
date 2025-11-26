#include "MyStack.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    myStack::Stack<int> numbers;

    numbers.showStack();
    cout << "======================\n";
    numbers.push_back(6);
    numbers.push_back(-2);
    numbers.push_back(1);
    numbers.push_back(8);
    numbers.showStack();
    cout << "======================\n";

    //Розвантаження стеку
    while (!numbers.isEmpty()) {
        cout << "TOP: " << numbers.top() << endl;
        numbers.showStack();
        cout << endl;
        numbers.pop_back();
    }
    numbers.showStack();

    return 0;
}