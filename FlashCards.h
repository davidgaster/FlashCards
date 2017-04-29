#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include "WordDef.h"

class FlashCards {
	
  public:
    WordDef * getWordDefs();
    void addWordDef(WordDef * newEntry);

  private:
    WordDef * dict;
};

#endif
