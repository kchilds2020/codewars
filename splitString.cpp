/* 
Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

Examples:

solution("abc") // should return {"ab", "c_"}
solution("abcdef") // should return {"ab", "cd", "ef"}
 */

#include<iostream>
#include<vector>


std::vector<std::string> splitString(const std::string &s)
{
    std::vector<std::string> temp;
    std::string str = "";
  
    for(int i = 0; i < s.length(); i+=2){
      std::string str = "";
      str += s[i];
      s[i+1] == NULL ? str += "_" : str += s[i+1];
      temp.push_back(str);
    }
    return temp; // Your code here
}

int main(){

    std::vector<std::string> split = splitString("abcde");
    for(int i = 0; i < split.size(); i++)
        std::cout << split[i];
    return 0;
}