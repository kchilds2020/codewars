/* 
Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be rearranged to match str2, otherwise returns false.

Notes:

Only lower case letters will be used (a-z). No punctuation or digits will be included.
Performance needs to be considered
Input strings s1 and s2 are null terminated.
Examples
scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False
 */

#include<iostream>


bool scramble(const std::string& s1, const std::string& s2){
  //your code here
  bool ret = false;
  std::string temp = s1;
  for(int i = 0; i < s2.length(); i++){
    std::cout << s2[i] << std::endl;
    ret = false;
    for(int j = 0; j < temp.length(); j++){
      if(s2[i] == temp[j] && ret == false){
        temp.replace(j,1,"~");
        ret = true;
      }
    }
    if(ret == false){
      return false;
    }
  }
  return true;
}
//best practice


int main(){
    bool works = scramble("rkqodlw", "world");
    std::cout << works << std::endl;
    return 0;
}