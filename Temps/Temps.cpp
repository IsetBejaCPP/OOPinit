#include "Temps.hpp"

Temps::Temps()
{
  s = 0;
  m = 0;
  h = 0;
}
Temps::Temps(int ss, int mm, int hh)
{
  if (ss < 0)
  {
    s = 0;
  }
  else
  {
    if (ss > 59)
    {
      s = 59;
    }
    else
    {
      s = ss;
    }
  }
  if (mm < 0)
  {
    m = 0;
  }
  else
  {
    if (mm > 59)
    {
      m = 59;
    }
    else
    {
      m = mm;
    }
  }
  if (hh < 0)
  {
    hh = 0;
  }
  else
  {
    h = hh;
  }
}
int Temps::toSec()
{
  return h * 3600 + m * 60 + s;
}
void Temps::affiche()
{
  cout << h << ":" << m << ":" << s;
}
Temps Temps::operator+(const Temps t) const
{
  int ss;
  int sm;
  int sh;

  ss = (s + t.s) % 60;
  sm = (m + t.m + ((s + t.s) / 60)) % 60;
  sh = h + t.h + ((m + t.m + ((s + t.s) / 60)) / 60);

  Temps res(ss, sm, sh);

  return res;
}