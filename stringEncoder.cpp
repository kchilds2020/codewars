/* The goal of this exercise is to convert a string to a new string where each character in the new string is "(" 
if that character appears only once in the original string, or ")" if that character appears more than once in the original string. 
Ignore capitalization when determining if a character is a duplicate. */

#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#include<map>

std::string encodeString(std::string str){
    int i = 0, j = 0;
    bool duplicate = false;
    //***********converst string to lowercase
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
    //***********converts string to lowercase
    for(i; i < str.length(); i++){
        for(j = 0; j < str.length(); j++){
            if(i != j && str[j] == str[i]){
                duplicate = true;
                str[j] = ')';
            }
        }

        if(duplicate){
            str[i] = ')';
        }else{
            str[i] = '(';
        }
        duplicate = false;

    }
    return str;
}

//BEST PRACTICE

std::string duplicate_encoder(const std::string& word){

    std::map<char, int> table;
    for(auto x : word) table[std::tolower(x)]++;
    
    std::string result;
    for(auto x: word) result += (table[std::tolower(x)]==1)? "(":")";
    
    return result;
}

int main(){
    std::string test = "Success";
    std::string encoded = duplicate_encoder(test);

    std::cout << test << std::endl << encoded;
    return 0;
}