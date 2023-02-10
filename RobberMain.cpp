#include "Translator.h"
#include "Model.h"
#include "fileProcessor.h"
#include <iostream>
#include <string>
#include <fstream>

//all header files needed are listed above

int main(int argc, char** argv){ // parameters only needed if you want to take in command line arguments; also contains main method needed for runnning the program
    fileProcessor file;
    file.processFile("original.txt", "Translation.html");
    return 0;
}