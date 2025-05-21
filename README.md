# Caesar Cipher Encryption

A simple program that performs **Caesar Cipher** encryption on a given input string.

---

## About

Caesar Cipher is one of the earliest and simplest methods of encryption. It works by shifting each letter in the plaintext by a fixed number of positions down the alphabet. This project demonstrates a basic implementation of Caesar Cipher in both C and C++.

---

## Features

- Encrypts only alphabetic characters (A-Z, a-z).
- Preserves the case of letters.
- Wraps around the alphabet (e.g., shifting 'Z' by 1 becomes 'A').
- Takes user input for both the string and the shift value.
- Outputs the encrypted string.

---

## Code Overview

The program:

1. Prompts the user to enter a string.
2. Prompts the user to enter the number of shifts.
3. Applies the Caesar Cipher shift to each character.
4. Displays the encrypted string.

---

## How to Run

### For C:

```bash
gcc caesar_cipher.c -o caesar_cipher
./caesar_cipher


### For C++:

```bash
g++ caesar_cipher.cpp -o caesar_cipher
./caesar_cipher
