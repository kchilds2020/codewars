#include<iostream>
#include"Permutation.h"

int main(){
    Permuation perm;

    vector<int> temp = perm.josephus({1,2,3,4,5,6,7,8,9,10}, 3);
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << ", ";
    }
    return 0;
}