#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern bool error1;
extern bool error2;
double eval(char* str);
double number(char*, unsigned*);
double expr(char*, unsigned*);
double term(char*, unsigned*);
double factor(char*, unsigned*);