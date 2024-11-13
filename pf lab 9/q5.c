#include <stdio.h>
#include <string.h>

void text_to_numbers(const char *text, int *numbers) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            numbers[i] = text[i] - 'A' + 1; 
        } else {
            numbers[i] = 20; 
        }
    }
}

void numbers_to_text(const int *numbers, char *text, int length) {
    for (int i = 0; i < length; i++) {
        text[i] = (numbers[i] + 64); 
    }
    text[length] = '\0';
}

void vigenere_encrypt(const char *plaintext, const char *key, char *ciphertext) {
    int plain_numbers[strlen(plaintext)], key_numbers[strlen(plaintext)];
    int key_length = strlen(key), cipher_numbers[strlen(plaintext)];

    text_to_numbers(plaintext, plain_numbers);
    text_to_numbers(key, key_numbers);

    for (int i = 0; i < strlen(plaintext); i++) {
        if (plaintext[i] == ' ') {
            cipher_numbers[i] = plain_numbers[i]; 
        } else {
            int sum = plain_numbers[i] + key_numbers[i % key_length];
            cipher_numbers[i] = (sum % 26 == 0) ? 26 : sum % 26; 
        }
    }

    numbers_to_text(cipher_numbers, ciphertext, strlen(plaintext));
}

int main() {
    char plaintext[] = "QUANVOLUTIONALNEURALNETWORKS";
    char key[] = "QUBIT";
    char ciphertext[strlen(plaintext) + 1];

    vigenere_encrypt(plaintext, key, ciphertext);
    printf("%s\n", ciphertext); 

    return 0;
}
