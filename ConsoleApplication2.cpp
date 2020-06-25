// while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// The same function is used to encrypt and 
// decrypt 
void encryptDecrypt(char inpString[])
{
    // Define XOR key 
    // Any character value will work 
    char xorKey = 'J';

    // calculate length of input string 
    int len = strlen(inpString);

    // perform XOR operation of key 
    // with every caracter in string 
    for (int i = 0; i < len; i++)
    {
        inpString[i] = inpString[i] ^ xorKey;
        printf("%c", inpString[i]);
    }
}

// Driver program to test above function 
int main()
{
    char sampleString[] = "javadjahangiri";

    // Encrypt the string 
    printf("Encrypted String: ");
    encryptDecrypt(sampleString);
    printf("\n");

    // Decrypt the string 
    printf("Decrypted String: ");
    encryptDecrypt(sampleString);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
