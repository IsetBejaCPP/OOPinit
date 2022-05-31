/**
 * @file mainTemps.cpp
 * 
 * toSec() convertit un temp en secondes
 * fromSec() construit un temps à partir du nombre de secondes
 * 01:01:01 + 00:00:59 = 01:02:00
 * 
 */
#include <iostream>

using std::cout;

class Temps{
private:
  int s;
  int m;
  int h;
public:
  Temps(){
    s = 0;
    m = 0;
    h = 0;
  }
  Temps(int ss, int mm, int hh){
    if(ss < 0){
      s = 0;
    }else{
      if(ss > 59){
        s = 59;
      }else{
        s = ss;
      }
    }
    if(mm < 0){
      m = 0;
    }else{
      if(mm > 59){
        m = 59;
      }else{
        m = mm;
      }
    }
    if(hh < 0){
      hh = 0;
    }else{
      h = hh;
    }
  }
  int toSec(){
    return h * 3600 + m * 60 + s;
  }
  void affiche(){
    cout << h << ":" << m << ":" << s;
  }
  Temps operator+(const Temps t) const{
    int ss;
    int sm;
    int sh;

    ss = (s + t.s) % 60;
    sm = (m + t.m + ((s + t.s) / 60)) % 60;
    sh = h + t.h + ((m + t.m + ((s + t.s) / 60)) / 60);

    Temps res(ss, sm, sh);

    return res;
  }
};

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