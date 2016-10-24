// Steven Romeiro
// U16803837
// Homework 4
// COP 3331
// Polynomials.h

#ifndef POLYNOMIALS_H
#define POLYNOMIALS_H
#include <vector>

class Polynomials
{
  private:
    int size, terms;
    std::vector<int> Polynomial;

  public:
    Polynomials();
    Polynomials(int);
    void Set();
    void Get();
    void Print();
    Polynomials operator+();
    Polynomials operator-();
    Polynomials operator*();
    Polynomials &operator=(Polynomials &);
    Polynomials &operator+=(Polynomials &);
    Polynomials &operator-=(Polynomials &);
    Polynomials &operator*=(Polynomials &);
    ~Polynomials();

};
#endif
