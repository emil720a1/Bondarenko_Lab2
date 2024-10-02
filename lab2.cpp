#include <iostream>
using namespace std;

int main() {
    int number, original_num, reversed_num = 0;

    cout << "Enter number: ";
    cin >> number;

    original_num = number;

    while (number > 0) {
        int remainder = number % 10;
        reversed_num = reversed_num * 10 + remainder;
        number /= 10;
    }

    if (original_num == reversed_num) {
        cout << original_num << "Palindrom" << endl;
    }
    else {
        cout << original_num << " is not palindrom" << endl;
    }

    return 0;
}
