# Propriétés des fonctions membres

## Exercice 1

Soit la classe Article suivante :
```cpp
class Article {
    private :
        int code ;
        float price ;
}
```

### Partie 1

On désire créer des objets de la classe Article soit en fournissant explicitement les 2 données, soit en fournissant aucune, dans ce cas on initialisera les données membres à 0.

Ecrire le ou les constructeurs correspondants.
1) En utilisant la surdéfinition de fonctions membres
2) En utilisant une seule fonction membre
3) En utilisant une seule fonction en ligne. Proposer les deux écritures possibles

### Partie 2

On souhaite ajouter une méthode ```equals```, qui permet de savoir si deux articles sont identiques.

Ajoutez la déclaration et la définition de la méthode pour chacun des cas suivants :
a) en utilisant un passage de paramètre par adresse
b) en utilisant un passage de paramètre par référence

## Exercice 2

Soit la classe Voiture suivante :
```cpp
class Car {
    char brand[20] ;
    char model[20] ;
    float price;
};
```

### Partie 1

1) Ecrire le constructeur qui initialise les données membres avec des valeurs passées en paramètres.
2) Ecrire une fonction membre display
3) Introduire dans cette classe une fonction membre ```moreExpensive``` permettant d'obtenir parmi deux objets Car celle qui est la plus onéreuse. Cette fonction compare donc l'objet qui appel la fonction et un objet passé en paramètre à la fonction. On prévoira 3 situations:
    + Le résultat et l'argument sont transmis par valeur
    + Le résultat et l'argument sont transmis par référence
    + Le résultat et l'argument sont transmis par adresse

### Partie 2

Adapter la classe Car pour qu'elle dispose d'une fonction membre fournissant le nombre de Car créées à un instant donné.