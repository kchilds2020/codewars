/* The goal of this exercise is to convert a string to a new string where each character in the new string is "(" 
if that character appears only once in the original string, or ")" if that character appears more than once in the original string. 
Ignore capitalization when determining if a character is a duplicate. */

#include<iostream>
#include<string>
#include<cstring>
#include<vector>

int countDuplicates(const char* in){
    int len = strlen(in);
    std::vector<char> temp;
    int i, j, x;

    bool exists = false;
    //search the array once
    for(i = 0; i < len; i++){
        //[t,e,s,s,t,t,t,t,t]
        // ^
        //   ^
        for(j = i+ 1; j < len; j++){
            //check if chars are the same
            //std::cout << in[i] << ", " << in[j] << std::endl;
            if(in[i] == in[j]){

                //dont push if char already exists in array
                for(x = 0; x < temp.size(); x++){
                   if(in[i] == temp[x]){
                       exists = true;
                   }
                }

                if(!exists){
                    temp.push_back(in[i]);
                }


                exists = false;
            }
        }
    }

    return temp.size();
}

//Best Practice
std::size_t duplicateCount(const char* in) {
  std::unordered_map<char, unsigned> counts;
  for (const char* c = in; *c != '\0'; ++c) {
    ++counts[tolower(*c)];
  }
  return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
      return count.second > 1;
    });
}


int main(){
    int dup = countDuplicates("teessttttt");
    std::cout << dup << std::endl;
    return 0;
}