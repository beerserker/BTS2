```
Début main      // Début du main
C : 1, 0        // Création de a, passage dans le constructeur
R : 1, 0        // Recopie de c dans a, passage dans le constructeur de recopie
C : 3, 3        // Création d'un nouvel objet *adr, passage dans le constructeur
R : 1, 0        // Passage par valeur de a dans d, passage dans le constructeur de recopie
Entrée fct      // Entrée dans la fonction
D !             // Suppression de l'objet stocké à l'adresse adr via add, passage dans le destructeur
Sortie fct      // Sortie de la fonction
D !             // Suppression de d, passage dans le destructeur
C : 5, 5        // Création d'un objet temporaire, passage par le constructeur
D !             // Suppression immédiate de l'objet temporaire après l'affectation, passage par le destructeur
Fin main        // Fin du main
D !             // Destruction de c
D !             // Destruction de a, pas besoin de supprimer adr supprimé dans la fonction fct
```