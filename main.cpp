#include <iostream>

#include "multitexturer.h"

int main(int argc, char *argv[]){

    Multitexturer multitex;
    multitex.parseCommandLine(argc, argv);

    multitex.loadInputData();

    multitex.evaluateCameraRatings();

    return 0;
}

