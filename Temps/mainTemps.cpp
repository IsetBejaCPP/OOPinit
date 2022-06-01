/**
 * @file mainTemps.cpp
 * 
 * toSec() convertit un temp en secondes
 * fromSec() construit un temps à partir du nombre de secondes
 * 01:01:01 + 00:00:59 = 01:02:00
 * 
 */
#include <iostream>
#include "Temps.hpp"

using std::cout;

int main(){
  Temps t1(59, 58, 00);
  Temps t2(01, 01, 01);
  Temps t3;

  t1.affiche();
  cout << "\n";
  t2.affiche();
  cout << " = " << t2.toSec() << " s";

  t3 = t1 + t2;
  cout << "\nt3 = ";
  t3.affiche();

  return 0;
}