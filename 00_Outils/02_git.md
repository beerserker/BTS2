# Git

## Présentation

![Logo Git](img/git-logo.png "Logo Git")

Git est un logiciel de gestion de versions décentralisé. C’est un logiciel libre créé par Linus Torvalds, auteur du noyau Linux, et distribué selon les termes de la licence publique générale GNU version 2 (Wikipedia).

## Fonctionnement de base

![Fonctionnement de Git](img/git-operations.png "Fonctionnement de Git")
> *source : https://www.edureka.co/blog/git-tutorial/*

## Installation

Téléchargement depuis : https://git-scm.com/

## Utilisation locale

Démarrer un nouveau repo Git (dans le répertoire courant)
```git
git init
```

Démarrer à partir d'un repo Git distant
```git
git clone [url du repo]
```

Afficher l'état des fichiers locaux
```git
git status
```

Ajouter des fichiers à l'index
```git
# Ajouter un fichier
git add [chemin relatif du fichier]

# Ajouter un dossier
git add [chemin relatif du dossier]

# Ajouter tous les fichiers modifiés hors index
git add -A
```

Sauvegarder un "instantané" des fichiers indexés 
```git
# Commiter les fichiers indexés
git commit -m [description du commit]
```

## Travailler avec un dépôt distant

Gérer l'URL du dépôt distant (inutile si clone)
```git
# Afficher l'URL du dépôt distant
git remote -v

# Initialiser l'URL du dépôt distant
git remote add origin [url du dépôt distant]

# Modifier l'URL du dépôt distant
git remote set-url origin [url du dépôt distant]
```

Récupérer les modifications du dépôt distant
```git
git pull origin [nom de la branche, master par défaut]
```

> Git tente de fusionner (merge) les fichiers modifiés à la fois localement et à distance. 

> Si des modifications ont été apportées au même fichier au même endroit par deux auteurs différents, un conflit peut apparaître (merge conflict). Dans ce cas, Git demande à l'auteur de réaliser lui-même la fusion.

```
 # Visualiser la liste des fichiers avec des conflits de fusion
 git status

 # Modifier le fichier avec un éditeur pour visualiser les lignes en conflits 
 nano [fichier à modifier]

 <<<<<<< HEAD
 open an issue
 =======
 ask your question in IRC.
 >>>>>>> branche
```

> Il faudra commiter les fichiers modifiés avant de pouvoir pousser les modifications vers le dépôt distant

Pousser les modifications du dépôt local vers le dépôt distant
```git
git push origin [nom de la branche, master par défaut]
```

## Utiliser les branches

![Exemples de workflow Git](img/git-workflow.png "Exemples de workflow Git")
> *source : https://medium.com/@OVHUXLabs/la-puissance-des-workflows-git-12e195cafe44*

Créer une branche
```git
git branch [nom de la branche]
```

Changer de branche courante
```git
git checkout [nom de la branche]
```

> A partir d'ici, les commit se feront sur la branche choisie

Fusionner une branche dans la branche courante
```git
git merge [nom de la branche à fusionner]
```

Supprimer une branche
```git
git branch -d [nom de la branche]
```