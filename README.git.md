# EPSI Battle Royale project

## Getting started

Les liens :
* L'organisation : https://github.com/GBO-Org
* La team : https://github.com/orgs/GBO-Org/teams/epsi-b2-2022
* Le projet : https://github.com/GBO-Org/epsi-br

Les règles :
* Une branche par développeur tirée depuis le master (piloté par Ghislain) et rebasée régulièrement : `student/VOTRE_NOM_DE_FAMILLE`
* Pull request en cas de demande d'intégration de contenu


## Ressources documentaires :
* Commencer avec GitHub : https://docs.github.com/en/get-started/quickstart/set-up-git#setting-up-git
* Cloner le dépôt : `git clone https://github.com/GBO-Org/epsi-br`
* Gérer les branches : https://docs.github.com/en/github/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-and-deleting-branches-within-your-repository


## La démo
Notre poste possède le client Git et est configuré comme indiqué dans la [documentation plus haut](https://docs.github.com/en/get-started/quickstart/set-up-git#setting-up-git).

```sh
# Cloner un dépôt
 $ git clone https://github.com/GBO-Org/epsi-br-2022.git
Cloning into 'epsi-br-2022'...
remote: Enumerating objects: 23, done.
remote: Counting objects: 100% (23/23), done.
remote: Compressing objects: 100% (20/20), done.
remote: Total 23 (delta 0), reused 23 (delta 0), pack-reused 0
Receiving objects: 100% (23/23), 6.40 KiB | 3.20 MiB/s, done.

# Se placer dans le répertoire qu'on vient de créer
 $ cd epsi-br-2022
 
# Configuration son user.name & user.email . . .
# Ajouter le --global pour faire la conf à l'échelle de l'utilisateur et non du repo
 $ git config user.name GBO
 $ git config user.email "ghislain.bouchet@gmail.com"
 
# Faire quelques changements
 $ vi README.md
 
# Ajouter le fichier à la liste des fichiers à commiter
 $ git add README.md
 
# Commiter avec le message "Test commit"
 $ git commit -m"Test commit"
[master 9ff8dcd] Test commit
 1 file changed, 2 insertions(+)
 
# Pusher sur le dépôt distant (envoyer ses commits sur le dépôt distant)
 $ git push
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 289 bytes | 289.00 KiB/s, done.
Total 3 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/GBO-Org/epsi-br-2022.git
   c758684..9ff8dcd  master -> master
```

## Créer sa branche

```shell

# Basculer sur la branche master
 $ git checkout master

# Tirer les changements
 $ git pull --rebase

# Créer la branche et switcher dessus (-b pour créer la branche si elle n'existe pas)
 $ git checkout -b student/bouchet
```

## Synchroniser avec la branche master

```shell

# Basculer sur la branche master (tout doit être commité avant)
 $ git checkout master

# Tirer les changements
 $ git pull --rebase

# Retourner sur sa branche
 $ git checkout student/bouchet

# Lancer un rebase sur le master
 $ git rebase master

# Lancer un rebase interactif sur le master
 $ git rebase -i master
```
