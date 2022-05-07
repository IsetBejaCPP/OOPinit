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
 *    			  différence des autres rectangles (on suppose que l'utilisateur donne toujours
 *            les dimensions du premier rectangle sont supérieures à celles du second rectangle,
 *            afin d'éviter des dimensions négatives)
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
    // cout << "Appel du constructeur par défaut\n";
  }

  Rectangle(float llo, float lla){  // Constructeur paramétré (2 paramètres)
    lo = llo; 
    la = lla;
    // cout << "Appel du constructeur paramétré\n";
  }

  void affiche(){
    cout << "(" << lo << ", " << la << ") P = " << perimetre() << ", A = " << aire();
  }

  float perimetre(){
    return 2 * (lo + la);
  }

  float aire(){
    return lo * la;
  }

  // Redéfinition de l'opérateur +
  // r1 + r2
  Rectangle operator+(const Rectangle r) const{   // L'opérateur (c'est une fonction) n'a qu'un seul paramètre,
                                      // c'est l'opérande à droite de l'opérateur.
    float tmpLo, tmpLa;

    tmpLo = lo + r.lo;
    tmpLa = la + r.la;

    Rectangle res(tmpLo, tmpLa);

    return res;
  }

  // Redéfinition de l'opérateur +
  // r1 - r2
  Rectangle operator-(const Rectangle r) const{   // L'opérateur (c'est une fonction) n'a qu'un seul paramètre,
                                      // c'est l'opérande à droite de l'opérateur.
    float tmpLo, tmpLa;

    tmpLo = lo - r.lo;
    tmpLa = la - r.la;

    Rectangle res(tmpLo, tmpLa);

    return res;
  }
};

int main(){
  Rectangle r1;         // Instancier un objet de type rectangle, qui est créé avec le constructeur par défaut
  Rectangle r2(10, 10); // Instancier un objet de type rectangle, qui est créé avec le constructeur parparamétré
  Rectangle rs;
  Rectangle rd;

  r1.affiche();      // Invoquer la méthode affiche pour afficher les caractéristiques du rectangle
  cout << "\n";
  r2.affiche();

  rs = r1 + r2;

  cout << "\n";
  rs.affiche();

  rd = r2 - r1;

  cout << "\n";
  rd.affiche();

  return 0;
}