#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

// Function to convert string to int
int string_to_int(const string &str){
    int num = 0;
    for(char c : str){
        num = num * 10 + (c - '0');
    }

    return num;
}

// Backtrack to generate permutations
void generatePermutations(const string &digits, string current, vector<bool> &used, set<int> &results){
    if(current.length() == 4){
        if(current[0] != '0' && (current[3] - '0') % 2 != 0){
            results.insert(string_to_int(current));
        }
        return;
    }

    for(int i = 0; i < digits.length(); i++){
        if(!used[i]){
            used[i] = true;
            generatePermutations(digits, current + digits[i], used, results);
            used[i] = false;
        }
    }
}

// function to find unique integers
std::vector<int> fourDigitNumbers(std::string &str)
{
    //code here :)

    set<int> results;
    vector<bool> used(str.length(), false);
    generatePermutations(str, "", used, results);

    return vector<int>(results.begin(), results.end());
}