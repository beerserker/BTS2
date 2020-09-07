// Exercice 2
#include <stdio.h>

#define SIZE 8

void readArray (int *, int);
int calculateParity (int *,int);
void displayParity (int);

int main (void) {
    int oddCount;
    int bitsArray[SIZE];
    readArray(bitsArray, SIZE);
    oddCount = calculateParity(bitsArray, SIZE);
    displayParity(oddCount);
}

/**
 * Read the standard input to fill an array of bits
 * @param bitsArray   The target array of bits
 * @param size        Number of bits to read
 * @return Nothing
 */
void readArray (int *bitsArray, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("Saisir le bit de rang %d : ", i);
        do
        {
            scanf("%d", bitsArray + i);
        } while (bitsArray[i] != 0 && bitsArray[i] != 1);
    }
}

/**
 * Display the rank of 1 in an array of bits and return their number
 * @param bitsArray An array of bits (integers 0 and 1)
 * @param size Number of bits to manage
 * @return Number of 1 in the array
 */
int calculateParity (int *bitsArray, int size) {
    int i;
    int oddCount = 0;

    printf("Rangs de valeur 1 : ");
    for (i = size - 1; i >= 0; i--) {
        if (bitsArray[i] == 1) {
            oddCount++;
            printf("%d ", i);
        }
    }
    printf("\n");
    return oddCount;
}

/**
 * Display the parity of an integer
 * @param number the integer 
 * @return Nothing
 */
void displayParity (int number) {
    if (number % 2 == 0) {
        printf("Parité : paire\n");
    } 
    else {
        printf("Parité : impaire\n");
    } 
}