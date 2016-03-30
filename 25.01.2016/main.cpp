#include <iostream>
#include "linkedlist.h"

int main(){
    OpilaneList *nimekiri = new OpilaneList();
    nimekiri->lisaOpilane("Lauri","38405226020");
    nimekiri->lisaOpilane("Jyri","11111111111");
    nimekiri->lisaOpilane("Ants","11105226020");
    nimekiri->eemaldaOpilane(2);
    nimekiri->prindiNimekiri();
}

//lallalalalaa
