#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

// Function to generate a random password of length N
void randomPasswordGeneration(int N) 
{
    int i = 0; 
    int randomizer = 0; 

    // Seed the random-number generator with the current time
    srand((unsigned int)(time(NULL))); 

    // Character sets for password generation
    char numbers[] = "0123456789"; 
    char letter[] = "abcdefghijklmnoqprstuvwyzx"; 
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX"; 
    char symbols[] = "!@#$^&*?"; 

    // Array to store the generated password
    char password[N + 1]; 

    // Ensure variety in the first character
    randomizer = rand() % 4; 

    // Generate a password of length N
    for (i = 0; i < N; i++) { 
        if (randomizer == 0) { 
            password[i] = numbers[rand() % 10]; 
        } 
        else if (randomizer == 1) { 
            password[i] = letter[rand() % 26]; 
        } 
        else if (randomizer == 2) { 
            password[i] = LETTER[rand() % 26]; 
        } 
        else { 
            password[i] = symbols[rand() % 8]; 
        } 
        randomizer = rand() % 4; 
    } 

    // Null-terminate the password string
    password[N] = '\0';

    // Print the generated password
    printf("Your password is: %s\n", password); 
}

// Main function to drive the program
int main() 
{ 
    int N = 10; // Define the length of the password

    // Call the function to generate the password
    randomPasswordGeneration(N); 

    return 0; 
}
