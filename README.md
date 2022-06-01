# OOPInit
Contient des exemples de code d'**initiation à la Programmation Orientée Objet** pour les étudiants du parcours mécatronique de l'ISET de Béja. Un premier exemple concerne la gestion des rectangles. Un deuxième concerne la gestion du temps.

Ces exemples cherchent à familiariser l'apprenant avec points suivants :
- **_La modélisation par objet_** où l'apprenant peut identifier et dégager les différents objets figurant dans l'énoncé du problème.
- **_L'implémentation des constructeurs_** où l'apprenant est capable d'instancier des objets avec différentes méthodes. Il doit discerner le rôle de chaque constructeur en l'occurrence le _constructeur par défaut_ et les _constructeurs paramétrés_.
- **_L'implémentation des fonctions membres_** où l'apprenant peut développer la logique de la `class` par des fonctions membres.
- **_La redéfinition des opérateurs_** où l'apprenant peut adapter les opérateurs usuels à des applications spécifiques impliquant le nouveau type créé.
- **_La création des bibliothèques personnalisées_** où l'apprenant peut personnaliser ses propres bibliothèques en fonction du problème.

# Préparation de l'environnement de travail
Afin de tester les différents exemples, l'installation de plusieurs utilitaires est exigée.
- [git] - permet la gestion des versions de la solution 
- [github] - permet le partage du code source
- [mingw] - permet la compilation des programmes C++
- [vscode] - permet l'édition des programmes

Ainsi, les apprenants sont appelés à :
1. Installer [git] et créer un compte sur [github]. Plusieurs tutoriels ([1](https://www.youtube.com/watch?v=eXF0epLeCgo), [2](https://www.youtube.com/watch?v=yqA4Q6jHnfc), ...) peuvent aider à se familiariser avec ces différentes fonctionnalités. La connexion en utilisant le `SSH` pour automatiser l'accès de [git] (en local) au [github] (distant) est fortement recommandée. Le [lien](https://docs.github.com/en/authentication/connecting-to-github-with-ssh) suivant décrit les différentes étapes de configuration de cette connexion.
2. Le premier [lien](https://code.visualstudio.com/docs/languages/cpp) montre les différentes étapes afin d'installer [vscode] et le compilateur [mingw] et les configurations soujascentes permettant l'édition, la compilation et l'exécution d'un programme C++ dans [vscode]. Le deuxième [lien](https://code.visualstudio.com/docs/cpp/config-mingw) montre, étape par étape, comment éditer, compiler et débuguer un programme C++. Ces deux tutoriels sont recommandés pour valider l'environnement de développement. D'autres extensions peuvent être ajoutées à [vscode]. Ces extensions apportent plusieurs fonctionnalités facilitant par la suite, les tâches du développeur. A titre indicatif, les extensions [Code Runner] et [Doxygen Documentation Generator] permettent, respectivement, l'exécution automatique du programme courant et la génération automatique d'une documentation personnalisée pour le code en question. Et les extensions [Git Graph], [Git History Diff], [GitLens], [gitignore], ... facilitent énormément l'intégration du [git] dans [vscode] et offrent des rapports décrivant l'état d'avancement du travail.

# Personnalisation des bibliothèques
Les bibliothèques favorisent la réutilisation du code. Par exemple, les fonctions gérant les entrées sorties standard sont regroupées dans la bibliothèque `iostream`. Il suffit de la charger à l'aide de la directive `#include <iostream>` pour pouvoir utiliser toutes les fonctions de la bibliothèque. Ainsi, dans le cas présent, transformer une classe en une bibliothèque doit respecter les étapes suivantes :
1. La création d'un fichier _nom\_classe.hpp_ contenant la définition de la classe, généralement portant le même nom de la classe. Aucune implémentation des méthodes membres n'est recommandée. Ce fichier doit commencer par **un guard** qui informe le compilateur de la façon de l'inclusion de la `class`. Deux façons peuvent définir les **guards** : en utilisant la directive `#pargma once` ou la directive `#ifndef`. Ce fichier est appelé conventionnellement **l'interface**.
2.  La création d'un fichier _nom\_classe.cpp_ portant le même nom du fichier _nom\_classe.hpp_. Ce fichier doit commencer par l'inclusion du fichier _nom\_classe.hpp_ avec la directive `#include "nom_classe.hpp"`. Ce fichier est appelé conventionnellement **l'implémentation**.
3.  Il faut inclure l'interface à l'aide de la directive `#include "nom_classe.hpp"`.
4.  Selon le type du compilateur, d'autres configurations peuvent être recommandées afin de préciser les fichiers à inclure durant la compilation.

[//]: #

   [git]: <https://git-scm.com/>
   [github]: <https://github.com/>
   [vscode]: <https://code.visualstudio.com/>
   [mingw]: <https://sourceforge.net/projects/mingw/>
   [helpgitgithub]: <https://www.youtube.com/watch?v=eXF0epLeCgo>
   [Code Runner]: <https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner>
   [Doxygen Documentation Generator]: <https://marketplace.visualstudio.com/items?itemName=cschlosser.doxdocgen>
   [Git Graph]: <https://marketplace.visualstudio.com/items?itemName=mhutchie.git-graph>
   [Git History Diff]: <https://marketplace.visualstudio.com/items?itemName=huizhou.githd>
   [GitLens]: <https://marketplace.visualstudio.com/items?itemName=eamodio.gitlens>
   [gitignore]: <https://marketplace.visualstudio.com/items?itemName=codezombiech.gitignore>

