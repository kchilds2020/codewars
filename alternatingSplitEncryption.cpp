/* 
For building the encrypted string:
Take every 2nd char from the string, then the other chars, that are not every 2nd char, and concat them as new String.
Do this n times!

Examples:

"This is a test!", 1 -> "hsi  etTi sats!"
"This is a test!", 2 -> "hsi  etTi sats!" -> "s eT ashi tist!"
Write two methods:

std::string encrypt(std::string text, int n)
std::string decrypt(std::string encryptedText, int n)
For both methods:
If the input-string is null or empty return exactly this value!
If n is <= 0 then return the input text.

This kata is part of the Simple Encryption Series:
Simple Encryption #1 - Alternating Split
Simple Encryption #2 - Index-Difference
Simple Encryption #3 - Turn The Bits Around
Simple Encryption #4 - Qwerty

Have fun coding it and please don't forget to vote and rank this kata! :-)
 */

#include<iostream>
#include<vector>

std::string encryption(std::string encryptedText, int n){
    for(int i = 0; i < n; i++){
        std::vector<char> one, two;
        for(int j = 0; j < encryptedText.length(); j++)
            j%2 != 0 ? one.push_back(encryptedText[j]) : two.push_back(encryptedText[j]);
        
        for(int j = 0; j < one.size(); j++)
            encryptedText[j] = one[j];
        
        for(int j = 0; j < two.size(); j++)
            encryptedText[one.size() + j] = two[j];
    }

    return encryptedText;
}

std::string decryption(std::string encryptedText, int n){
   for(int i = 0; i < n; i++){
        std::vector<char> one, two;
        for(int j = 0; j < encryptedText.length(); j++)
            j < encryptedText.length() / 2 ? one.push_back(encryptedText[j]) : two.push_back(encryptedText[j]);

        for(int j = 0; j < encryptedText.length(); j++)
            encryptedText[j] = j%2 != 0 ? one[j/2] : two[j/2];
   }
    return encryptedText;
}

int main(){
    std::string temp = decryption("s eT ashi tist!", 1);
    std::cout << "encrypt: " << temp << std::endl;
    /* std::string temp2 = decryption(temp, 2);
    std::cout << "decrypt: " << temp2 << std::endl; */
    return 0;
}