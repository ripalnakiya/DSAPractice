/*
Isomorphic Strings
Problem Statement:

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.

Example:

Input:
S = “dag”
T = “faq”

Output:
true (case-sensitive print in lowercase only)
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isIsomorphic(string s, string t){
  int max_chars = 256;
  
  int arr1[max_chars] = {0};
  int arr2[max_chars] = {0};
  
  for(int i = 0; i < s.length(); ++i){
    char c1 = s[i];
    char c2 = t[i];
    
    if(arr1[c1] == 0 && arr2[c2] == 0){
      arr1[c1] = c2;
      arr2[c2] = c1;
    }
    else if (arr1[c1] != c2 && arr2[c2] != c1){
      return false;
    }
  }
  return true;
}

int main() 
{
    string s,t;
    getline(cin, s);
    getline(cin, t);

    bool val = isIsomorphic(s,t);
    
    if(val)
      cout<<"true";
    else
      cout<<"false";
    return 0;
}