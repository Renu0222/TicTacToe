#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an 8-bit binary number: ";
    cin >> input;

    // Check if the input length is 8
    if (input.length() != 8) {
        cout << "Please enter an 8-bit binary number." << endl;
        return 1;
    }

    // Invert each bit
    for (int i = 0; i < 8; i++) {
        if (input[i] == '1')
            input[i] = '0';
        else if (input[i] == '0')
            input[i] = '1';
        else {
            cout << "Invalid input. Only 0s and 1s are allowed." << endl;
            return 1;
        }
    }

    cout << "Output: " << input << endl;

    return 0;
}
