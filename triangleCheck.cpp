#include<iostream>

bool isTriangle(int a, int b, int c){
    std::cout << a+b;
    if(a >= b && a >= c){
        return a < b + c;
    }
    else if(b >= a && b >= c){
        return b < a + c;
    }else{
        return c < b + a;
    }
}

//best practice: return a-b<c && b-c<a && c-a<b;

int main(){
    std::cout << isTriangle(2147483647,2147483647,2147483647);
}