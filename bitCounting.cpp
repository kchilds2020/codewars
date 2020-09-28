//Write a function that takes an integer as input, and returns the number of bits that are equal to 
//one in the binary representation of that number.You can guarantee that input is non - negative.

//Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
#include <iostream>

int numberOfBits(int n) {
    //convert number to binary representation

    std::cout << "Number: " << n << std::endl << "Binary Representation: ";

    int a[10], i;
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }

    //print out binary array and count the ones
    int count = 0;
    for (i = i - 1; i >= 0; i--) {
        std::cout << a[i];
        if (a[i] == 1) {
            count++;
        }
    }
    std::cout << std::endl;

    return count;
}

int main()
{
    int x;
    std::cout << "Enter Number: ";
    std::cin >> x;
    int test = numberOfBits(x);
    std::cout << "Number of 1s: " << test << std::endl;
}

