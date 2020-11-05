#include<iostream>
#include<vector>
using namespace std;


class Permuation{
    public: 
    
    vector<string> allPossibleCombos(string str){
        //
        vector<string> temp;
        return temp;
    }

    vector<int> josephus(vector<int> items, int k){
        vector<int> result;
        int count = 1;
        int i = 0;
        while(items.size() > 0){
            if(i >= items.size()){
                i = 0;
            }else{
            if (count % k == 0)
            {
                cout << items[i] << endl;
                result.push_back(items[i]);
                items.erase(items.begin() + (i));
                count = 1;
                i--;
                
            }
            else{
            
                count++;
            }
            i++;
            }
        }
        return result;
    }


    int josephusSurvivor(int n, int k) {
        // your code here
        int survivor = 0;
        for (int i = 2; i < n + 1; i ++) {
            survivor = (survivor + k)%i;
        }
        return survivor + 1;
    }

    /* BEST PRACTICE
    
    std::vector <int> josephus(std::vector <int> items, int k) {
    std::vector< int > result;
    int pos = k-1;
    
    while (items.size())
    {
        pos %= items.size();
        result.push_back(items[pos]);
        items.erase(items.begin()+pos);
        pos += k-1;
    }

    return result;
}
     */
};