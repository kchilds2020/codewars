/* Given the triangle below
             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...

Calculate the row sums of this triangle from the row index (starting at index 1) */


#include<iostream>

long long rowSumOddNumbers(unsigned n){
    int odd = 1;
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        sum = 0;
        for(int j = 0; j < i; j++){
                sum += odd;
                odd += 2;

        }
    }
    return sum;
}

//best solution: return n*n*n;

int main(){
    long long x;
   x = rowSumOddNumbers(42);
   std::cout << x << std::endl;
}

