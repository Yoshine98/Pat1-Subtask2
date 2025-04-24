#include <iostream>
#include <string>
using namespace std;

// Convert decimal to binary (non-negative)
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

// Convert binary string to decimal (non-negative)
int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; ++i) {
        if (binary[length - 1 - i] == '1') {
            decimal += (1 << i); // Use bit shifting instead of pow()
        }
    }
    return decimal;
}

// Check if binary string is valid (only contains 0 and 1)
bool isValidBinary(string binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

int main() {
    int choice;
    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "Choose option (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter a non-negative decimal number: ";
        cin >> decimal;
        if (decimal < 0) {
            cout << "Error: Only non-negative numbers are allowed.\n";
        } else {
            cout << "Binary: " << decimalToBinary(decimal) << endl;
        }
    } 
    else if (choice == 2) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        if (!isValidBinary(binary)) {
            cout << "Error: Invalid binary number. Only 0s and 1s are allowed.\n";
        } else {
            cout << "Decimal: " << binaryToDecimal(binary) << endl;
        }
    } 
    else {
        cout << "Invalid choice. Please select 1 or 2.\n";
    }

    return 0;
}
