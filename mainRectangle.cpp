/**
 * @file mainRectangle.cpp
 * @author R. ALOUI (isetk.c2i@gmail.com)
 * @brief Ce programme doit donner la possibiliter de gérer des formes géométriques,
 *        en particuler les rectangles. Rappelons qu'un rectangles est une forme 
 *        géométrique caractérisée par une longueur et une largeur. Le programme doit
 *        permettre :
 *          * la création de différents types de rectangles ayant différentes dimensions
 *          * le calcul du périmètre d'un rectangle
 *          * le calcul de l'aire d'une rectangle
 *          * la construction d'un rectangle dont les dimensions sont la 
 *    			  somme d'autres rectangles
 *          * la construction d'un rectangle dont les dimensions sont la
 *    			  différence des autres rectangles
 *          * afficher les caractéristiques d'un rectangle
 * @version 0.1
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using std::cout;

// Créer le type Rectangle
class Rectangle{
private:
  float lo = 1;
  float la = 1;
public:
  Rectangle(){    // Constructeur par défaut (sans paramètres), il est utilisé lors de la création de l'objet.
    lo = 1;       // Le constructeur est une fonction particulière qui porte le même nom de la classe.
    la = 1;
    cout << "Appel du constructeur par défaut\n";
  }

  void affiche(){
    cout << "(" << lo << ", " << la << ")";
  }
};

int main(){
  Rectangle r;      // Instancier un objet de type rectangle, qui est créé avec le constructeur par défaut

  r.affiche();      // Invoquer la méthode affiche pour afficher les caractéristiques du rectangle

  return 0;
}