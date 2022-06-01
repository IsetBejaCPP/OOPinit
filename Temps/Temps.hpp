#pragma once

#include <iostream>

using std::cout;

class Temps{
private:
  int s;
  int m;
  int h;
public:
  Temps();
  Temps(int ss, int mm, int hh);
  int toSec();
  void affiche();
  Temps operator+(const Temps t) const;
};