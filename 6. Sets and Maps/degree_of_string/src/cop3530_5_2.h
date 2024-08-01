/*
	Degree of a String

	Given a string `str`, the degree of this string is defined 
	as the maximum frequency of any one of its characters.

	Your task is to find the minimum length of a contiguous 
	substring of `str`, that has the same degree as `str`.

	Sample Test Case

	Input: str = “fl1pthat”
	Output: 4
	Explanation: The maximum frequency is 2, and the smallest contiguous 
	substring that has frequency 2 is “that” which has length 4.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits>
#include <string>
using namespace std;

int degreeOfString(std::string str)
{
    // your code here

    if(str.empty()) return 0; // checks for empty string

    unordered_map<char, int> frequency;
    unordered_map<char, int> firstOccurrence;
    unordered_map<char, int> lastOccurence;

    int maxFrequency = 0;

    // 1. Calculate frequency and first and last occurrences
    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        frequency[c]++;
        maxFrequency = max(maxFrequency, frequency[c]);

        if(firstOccurrence.find(c) == firstOccurrence.end()){
            firstOccurrence[c] = i;
        }

        lastOccurence[c] = i;
    }

    // 2. Find the min length of contiguous substring with same degree
    int minLength = numeric_limits<int>::max();
    for(const auto& entry : frequency){
        char c = entry.first;
        if(entry.second == maxFrequency){
            int length = lastOccurence[c] - firstOccurrence[c] + 1;
            minLength = min(minLength, length);
        }
    }

    return minLength;
}