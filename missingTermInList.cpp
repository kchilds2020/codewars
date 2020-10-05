/* 
An Arithmetic Progression is defined as one in which there is a constant difference between the consecutive terms of a given series of numbers. You are provided with consecutive elements of an Arithmetic Progression. There is however one hitch: exactly one term from the original series is missing from the set of numbers which have been given to you. The rest of the given series is the same as the original AP. Find the missing term.

You have to write a function that receives a list, list size will always be at least 3 numbers. The missing term will never be the first or last one.

Example
findMissing([1, 3, 5, 9, 11]) == 7
PS: This is a sample question of the facebook engineer challenge on interviewstreet. I found it quite fun to solve on paper using math, derive the algo that way. Have fun!
 */

#include<iostream>
#include<vector>
#include<cstdlib>

static long findMissing(std::vector<long> list){
    long numerator = (list[list.size()-1] - list[0]);
    long distBetween = abs(numerator) / list.size();
  
    std::cout << list[list.size()-1] << " - " << list[0] << " = " << list[list.size()-1] - list[0] << std::endl;
    std::cout << (list[list.size()-1] - list[0]) << " / " << list.size() << " = " << (list[list.size()-1] - list[0]) / list.size() << std::endl; 
  
    for(int i = 0; i < list.size(); i++)
      std::cout << list[i] << std::endl;  
  
  if(numerator < 0){
    distBetween -= distBetween*2;
  }
  
  std::cout << "dist between: " << distBetween << ", list size: "<< list.size() << std::endl;
  
    for(int i = 0; i < list.size(); i++){
      if(list[i+1] - list[i] != distBetween){
        return list[i] + distBetween;
      }    
    }
  
    
    return 0;
}

int main(){
    long temp = findMissing({1,3,5,9,11});
    std:: cout << "Missing Num = " << temp << std::endl;
    return 0;
}