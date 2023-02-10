#include "Translator.h"
#include "Model.h"
#include <string>
#include <iostream>

//all header files needed are listed above

Translator::Translator(){ //default constructor

}
Translator::~Translator(){ //default destructor

}

std::string Translator::translateEnglishword(std::string word){ //function tht takes in a whole phrase or sentence and applies the Model class
    std::string phrase;
    Model translate;
        for(int i = 0; i < phrase.length(); i++) {
            std::cout << translate.translateSingleVowel(phrase.at(i)) << translate.translateSingleConsonant(phrase.at(i));
        }
        return phrase; //because something needs to be returned, it made sense to me that I output ""
    } 

std::string Translator::translateEnglishsentence(std::string sentence){ // function tht takes in a whole phrase or sentence and applies the Model class
    std::string phrase;
    Model translate;
        for(int i = 0; i < phrase.length(); i++) {
            std::cout << translate.translateSingleVowel(phrase.at(i)) << translate.translateSingleConsonant(phrase.at(i));
        }
        return phrase;
    }