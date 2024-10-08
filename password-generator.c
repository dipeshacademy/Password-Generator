#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>


void randomPasswordGeneration(int N) 
{
    int i = 0; 
    int randomizer = 0; 

    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789"; 
    char letter[] = "abcdefghijklmnoqprstuvwyzx"; 
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX"; 
    char symbols[] = "!@#$^&*?"; 
    char password[N + 1]; 
    randomizer = rand() % 4; 
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
    password[N] = '\0';
    printf("Your password is: %s\n", password); 
}


int main() 
{ 
    int N = 10;
    randomPasswordGeneration(N); 

    return 0; 
}
