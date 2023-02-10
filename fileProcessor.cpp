#include "Translator.h"
#include "fileProcessor.h"
#include "Model.h"
#include <string>
#include <iostream>
#include <fstream>

//all header files needed are listed above
fileProcessor::fileProcessor(){ //default constructor

}
fileProcessor::~fileProcessor(){ //default destructor
}
void fileProcessor::processFile(std::string myfile, std::string HTML){
    std::ifstream input;
    std::ofstream result(HTML);
    input.open(myfile);
    result << "<!DOCTYPE html>"<< std::endl;
    result << "<html>"<< std::endl;
    result << "<head>"<< std::endl;
    result << "<title>" << "Robber Language Project" << "</title>"<< std::endl;
    result << "</head>"<< std::endl;
    result << "<body>"<< std::endl;

    std::string stuff;
    while (getline(input, stuff)) {
        result << "<p><b>" << stuff << "</b><br></p>"<< std::endl;
    }

    input.close();
    input.open(myfile);
    while (getline(input, stuff)){
        Translator Translate;
        std::string translation;
        translation = Translate.translateEnglishsentence(stuff);
        result << "<p><i>" << translation << "</p></i><br>"<< std::endl;
        result << "</body>" << std::endl;
        result << "</html>"<< std::endl;
    }
    result.close();
    input.close();
}

