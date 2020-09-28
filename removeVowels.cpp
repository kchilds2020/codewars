/* Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel. */

#include<iostream>
#include<string>
#include<regex>


//my attempt
std::string removeVowels(std::string str){
    std::cout << str << std::endl;
    std::string vowels = "aeiouAEIOU";
    for(int i = 0; i < str.length(); i++){
        
        for(int j = 0; j < vowels.length(); j++){
            if(str[i] == vowels[j]){
                str.erase(i,1);
                i--;
            }
        }

    }
    return str;
}

//best practice
std::string solution(std::string str){
    std::regex vowels("[aeiouAEIOU]");    
    return std::regex_replace(str, vowels, "");
}

int main(){
    std::string str;
    std::cout << "Input String: " << std::endl;
    std::getline (std::cin,str);
    std::string vowelsRemoved = solution(str);
    std::cout << vowelsRemoved << std::endl;
}
