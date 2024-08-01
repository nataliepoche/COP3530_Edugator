/*
    Are permutations

    In this problem, you are given an array of strings strs such that each string only consists of lowercase letters. 
    Two strings strs[i] and strs[j] are permutations of each other if all the characters of strs[j] can be rearranged
    such that strs[i] == strs[j]. Write a method that returns true if all the strings in strs are permutations of each other.

    Example 1:
        Input: strs = ["abba", "bbaa", "aabb"]
        Output: true
        Explanation: Each string can be rearranged to match another

    Example 2:
        Input: strs = ["abc", "abbc"]
        Output: false
        Explanation: “abc” cannot be rearranged to “abbc” because it only has one ‘b’

    Example 3:
        Input: strs = ["gator", "rotag", "sator"]
        Output: false
    
    Example 4:
        Input: strs = ["shoes", "sheso", "hesos", "shooes", "shoe"]
        Output: false

    Example 5:
        Input: strs = [""]
        Output: true
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to sort string using bubble sort
void bubble_sort(string &str){
    int n = str.length();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(str[j] > str[j + 1]){

                // Swap str[j] and str[j + 1]
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

bool arePermutations(std::vector<std::string> strs) {
    // Your code here

    if(strs.empty()) return true; // checks if the string is empty

    // Create vector to store versions of the strings
    vector<string> sorted = strs;

    // Sort each string in sorted
    for(string& str : sorted){
        bubble_sort(str);
    }

    // Compare all sorted strings to the first sorted string
    for(size_t i = 1; i < sorted.size(); i++){
        if(sorted[i] != sorted[0]){
            return false;
        }
    }
    return true;
}