# Exercice 5 :  
 
Ecrire un programme qui permette de résoudre une équation du 2nd degré 
 (ax2+ bx +c =0) en affichant les valeurs trouvées pour les racines réelles. 
 
Attention :  
• Pour utiliser la fonction  sqrt() qui calcule la racine carrée d’un nombre passé en paramètres, il faut 
•inclure la librairie math.h dans votre fichier source par l’instruction suivante :  #include <math.h> 
• Par ailleurs pour que lors de l’étape de l’édition de liens, le compilateur puisse lier la librairie math.h 
il faut faire l’ensemble d’actions suivantes (si ce n’est pas automatiquement pris en charge avec la 
version disponible en salle machine) : 
o Placer le curseur de la souris sur le répertoire de votre projet dans eclipse et appuyer sur le 
clic droit de la souris 
o Sélectionner  Propriétés/Properties
 Cliquer sur C/C++ Build  
o Choisir Paramètres/settings 
o Cliquer sur GCC Linker puis choisir Bibliothèques/Librairies 
o Cliquer sur l’icône avec un  ‘+’ au niveau du champ Bibliothèques (Libraries (-l)) 
o Taper le caractère ‘m’ 
o Cliquer sur Apply et OK 