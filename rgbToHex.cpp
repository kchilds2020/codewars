/* 
The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.

The following are examples of expected output values:

rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
 */

#include<iostream>

std::string decToHex(int n){ 

    std::string hexaDeciNum = "";
    std::string reverse = n == 0 ? "00" : "";
    
    int i = 0;

    while(n != 0){
        int remainder = 0;

        remainder = n %16;
        hexaDeciNum += remainder < 10 ? remainder + 48 : remainder + 55;
        i++;

        n = n / 16;
    }

    for(int i = hexaDeciNum.length() -1; i >=0; i-- )
        reverse += hexaDeciNum[i];


    return reverse;
}

std::string RGBtoHex(int r, int g, int b){
    return decToHex(r) + decToHex(g) + decToHex(b);
}

int main(){
    std::string temp = RGBtoHex(0,0,0);
    std::cout << temp;
    return 0;
}