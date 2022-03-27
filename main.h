#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>

/**
 * complex - Represents an imaginary number
 * @re: Real part of the imaginary number
 * @im: Imaginary part of the imaginary number
 *
 * Description: Imaginary number
 */

typedef struct complex
{
  double re;
  double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);

#endif /* MAIN_H */
