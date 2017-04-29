#ifndef WORDDEF_H
#define WORDDEF_H

#include <string>
#include <iostream>

using namespace std;


typedef struct WordDef {
  string name;
  string def;
  string * relatedW;
} WordDef;

#endif
