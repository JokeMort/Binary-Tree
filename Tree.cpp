//
// Created by tomas on 23.05.2022.
//

#include <fstream>
#include "Tree.h"

void Tree::copyText() {
    fstream plik;
    plik.open("test.txt", ios_base::in);
    Tekst.clear();
    while (plik.good()) {
        Tekst += plik.get();
    }
    plik.close();
}

