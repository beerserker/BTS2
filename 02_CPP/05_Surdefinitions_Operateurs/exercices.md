# Surdéfinitions d'opérateurs :fire:

## Exercice 1

Soit une classe Vector3d :

```cpp
class Vecteur3d {
    private:
        float x,y,z;
    public:
        Vecteur3d (int vx = 0, int vy = 0, int vz = 0) {
            x = vx;
            y = vy;
            z = vz;
        }
}
```

1. Surdéfinir l'opérateur == en utilisant une fonction membre inline.
2. Surdéfinir l'opérateur != en utilisant une fonction membre inline (trouver un moyen "malin" ne pas utiliser x, y, z pour la surcharge de cet opérateur).

## Exercice 2

On considère la classe Tableau suivante :

```cpp
class Tableau {
    private :
        // Tableau tab de nbele elements
        int *tab, nbElements;
    public :
        // Remplit le tableau avec une valeur
        void remplir(int valeur);
        // Remplit le tableau avec une valeur à un indice donné
        void remplir(int valeur, int indice);
        // Affiche le tableau
        void afficher();
};
```


1. Ecrivez les constructeurs et le destructeur de cette classe pour permettre une instanciation d’objets de la manière suivante :
```cpp
Tableau t1(10);
```
2. Ecrivez les méthodes remplir et afficher .
3. Surdéfinir l'opérateur = pour que l'affectation soit possible entre deux objets Tableau.

```cpp
Tableau t1(10), t2(5);
t2 = t1;
```

4) Surdéfinir l'opérateur [] pour remplacer la fonction remplir(valeur, indice) et indiquer un débordement d'indice du tableau. Dans ce cas, on lancera une exception.

```cpp
Tableau t1(10);
t1[5] = 7;      // OK !
t1[11] = 8;     // Hors-limite !
```