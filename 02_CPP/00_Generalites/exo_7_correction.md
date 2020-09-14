# Correction de l'exercice 7

```cpp
void fct (int);         // fonction A 
void fct (float); 		// fonction B
void fct (int,float); 	// fonction C
void fct (float,int); 	// fonction D

int main () {
    
    int n, p;
    float x, y;
    char c;
    double z;

    /*
    Les appels suivants des fonctions sont ils corrects ? 
    Si oui, quels sont les fonctions appelées et quelles sont éventuellement les conversions mises en place ?
    */

    fct (n);    // Correct, appel de la fonction A
    fct (x);    // Correct, appel de la fonction B
    fct (n,x);  // Correct, appel de la fonction C
    fct (x,n);  // Correct, appel de la fonction D
    fct (c);    // Correct, appel de la fonction A, conversion implicite de char en int
    fct (n,p);  // Incorrect, conflit entre C et D
    fct (n,c);  // Incorrect, conflit entre C et D 
    fct (n,z);  // Correct, appel de la fonction C, conversion implicite de double en float
}
```