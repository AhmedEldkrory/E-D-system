#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Caesar Cipher encryption function
string encryptCaesar(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            result += (c - offset + shift) % 26 + offset;
        }
        else {
            result += c;
        }
    }
    return result;
}

// Caesar Cipher decryption function
string decryptCaesar(const string& text, int shift) {
    return encryptCaesar(text, 26 - (shift % 26));
}

// Vigenère Cipher encryption function
string encryptVigenere(const string& text, const string& key) {
    string result = "";
    int keyLength = key.length(), keyIndex = 0;
    for (char c : text) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            char keyChar = isupper(key[keyIndex % keyLength]) ? 'A' : 'a';
            result += (c - offset + (key[keyIndex % keyLength] - keyChar)) % 26 + offset;
            keyIndex++;
        }
        else {
            result += c;
        }
    }
    return result;
}

// Vigenère Cipher decryption function
string decryptVigenere(const string& text, const string& key) {
    string result = "";
    int keyLength = key.length(), keyIndex = 0;
    for (char c : text) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            char keyChar = isupper(key[keyIndex % keyLength]) ? 'A' : 'a';
            result += (c - offset - (key[keyIndex % keyLength] - keyChar) + 26) % 26 + offset;
            keyIndex++;
        }
        else {
            result += c;
        }
    }
    return result;
}

// Function to reverse text
string reverseText(const string& text) {
    string result = text;
    reverse(result.begin(), result.end());
    return result;
}

// Atbash Cipher encryption/decryption function
string atbashCipher(const string& text) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            result += (offset + (25 - (c - offset)));
        }
        else {
            result += c;
        }
    }
    return result;
}

int main() {
    string inputText, processedText, key;
    int shift, choice, action;

    while (true) {
        // Prompt user to enter the text
        cout << "Enter text: ";
        cin.ignore(); // Clear the buffer before using getline
        getline(cin, inputText);

        // Ask user to choose an action (encrypt or decrypt)
        cout << "Choose an action:\n1. Encrypt\n2. Decrypt\nEnter your choice (1-2): ";
        cin >> action;

        if (action != 1 && action != 2) {
            cout << "Invalid action! Please enter 1 or 2.\n";
            continue;
        }

        // Ask user to choose an encryption method
        cout << "Choose a method:\n1. Caesar Cipher\n2. Reverse Cipher\n3. Vigenere Cipher\n4. Atbash Cipher\nEnter your choice (1-4): ";
        cin >> choice;

        cin.ignore(); // Clear input buffer to avoid issues with getline()

        switch (choice) {
        case 1: // Caesar Cipher
            cout << "Enter shift value: ";
            cin >> shift;
            processedText = (action == 1) ? encryptCaesar(inputText, shift) : decryptCaesar(inputText, shift);
            break;

        case 2: // Reverse Cipher
            processedText = reverseText(inputText);
            break;

        case 3: // Vigenère Cipher
            cout << "Enter the key for Vigenère Cipher: ";
            cin >> key;
            processedText = (action == 1) ? encryptVigenere(inputText, key) : decryptVigenere(inputText, key);
            break;

        case 4: // Atbash Cipher
            processedText = atbashCipher(inputText);
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 4.\n";
            continue;
        }

        // Output the results
        cout << "\nOriginal text: " << inputText << "\nProcessed text: " << processedText << endl;

        // Ask if the user wants to continue
        char cont;
        cout << "Do you want to run the program again? (y/n): ";
        cin >> cont;
        if (tolower(cont) != 'y') break;
    }

    return 0;
}
