/*
    Suffix count

    In this problem, you will write a function that returns the count of a string’s suffix in a given string, S. 
    A suffix is a combination of one or more symbols appended at the end of the string. 
    You will be given the length, L of the suffix as a parameter to the function

    Sample Input:
        et tu, brute
        1
    
    Sample Output:
        2 
*/

#include <iostream>
#include <string>
using namespace std;

int suffixCount(std::string S, int L) {
    // Length(S) >=0 L > 0
    if(S.length() < L || L < 0){ // excludes if S is less than L or if L is less than 0
        return 0;
    }

    // Extract suffix from S based on L
    string suffix = S.substr(S.length() - L); // removes the characters not in suffix

    // Count suffix occurrences in S
    int count = 0; // keeps track of count
    for(int i = 0; i < S.length(); i++){ // goes through each position in S
        // checks the sectioned string starting with character in position i
        if(S.substr(i, L) == suffix){
            count++; // adds to count if suffix is same
        }
    }
    return count; // returns the count
}