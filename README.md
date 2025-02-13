# Encryption and Decryption Tool

## Overview
This C++ program offers multiple encryption and decryption techniques to enhance data security. It allows users to protect and decode their messages using well-known cryptographic methods.

## Features
- **Caesar Cipher** (Encrypt/Decrypt) - A substitution cipher that shifts characters by a fixed value.
- **Reverse Cipher** - A simple method that reverses the input text.
- **Vigenère Cipher** (Encrypt/Decrypt) - A polyalphabetic substitution cipher using a keyword.
- **Atbash Cipher** - A letter substitution cipher that reverses the alphabet.

## How It Works
1. The user enters the text to be processed.
2. Selects an action:
   - **1**: Encrypt
   - **2**: Decrypt
3. Chooses an encryption/decryption method:
   - **1**: Caesar Cipher (requires a shift value)
   - **2**: Reverse Cipher
   - **3**: Vigenère Cipher (requires a keyword)
   - **4**: Atbash Cipher
4. The program processes the text according to the selected method.
5. The output is displayed to the user.
6. The user can decide to run another encryption/decryption or exit the program.

## System Requirements
- A C++ compiler such as **G++**, **MSVC**, or **Clang**.
- A command-line interface (CLI) to compile and execute the program.

## Installation and Usage
### Compilation:
```sh
 g++ encryption_tool.cpp -o encryption_tool
```

### Execution:
```sh
 ./encryption_tool
```

## Example Usage
### Example 1: Encrypting a Message Using Caesar Cipher
```
Enter text: Hello
Choose an action:
1. Encrypt
2. Decrypt
Enter your choice (1-2): 1
Choose a method:
1. Caesar Cipher
2. Reverse Cipher
3. Vigenere Cipher
4. Atbash Cipher
Enter your choice (1-4): 1
Enter shift value: 3

Original text: Hello
Processed text: Khoor
```

## Future Enhancements
- Implement additional encryption algorithms such as AES and RSA.
- Enhance user experience with a graphical interface.
- Support file encryption and decryption.
- Improve error handling and input validation.

## Contribution Guidelines
We welcome contributions to enhance this project! Feel free to fork the repository, create feature branches, and submit pull requests with improvements or bug fixes.

## License
This project is open-source and released under the **MIT License**. You are free to use, modify, and distribute it as per the license terms.

## Author
Developed by **[Your Name]**. 
For inquiries or contributions, please reach out via GitHub or email.

