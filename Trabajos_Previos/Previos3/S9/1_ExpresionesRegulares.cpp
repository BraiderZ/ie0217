#include <iostream> 
#include <regex> //Pata poder usar las expresiones

int main(){
    auto const regex = std::regex("(my|your) regex"); //siempre tiene que decir my o your y después regex

    auto const myText = std::string("A piece of text that contains my regex.");
    bool const myTextContainsRegex = std::regex_search(myText,regex); //Usamos el comando para que verifique que en mi texto se cumpla el regex por medio de un booleano

    auto const yourText = std::string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText,regex);

    auto const theirText = std::string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText,regex);

    std::cout << std::boolalpha
            << myTextContainsRegex << "\n"
            << yourTextContainsRegex << "\n"
            << theirTextContainsRegex << "\n";

    return 0;
}