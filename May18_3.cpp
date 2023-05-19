/*
Maximum Number of Vowels in a Substring of Given Length
Problem Statement:

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
1 <= k <= s.length

Example:

Input:
bytexlistoogood
4
Output:
3
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    string s;
    int k,count= 0,flag = 0;
    
    vector<int> vowCount;
    vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
    
    getline(cin,s);
    cin>>k;
    
    for(int i=0; i<s.length(); ++i){
      for(char a : vowels){
        if( s[i] == a){
          flag = 1;
          break;
        }
      }
      if(flag == 1){
        count = 0;
        for(int j=i; j<(k+i) && j < s.length(); ++j){
          for(char a : vowels){
            if(s[j] == a){
              count++;
            }
          }
        }
      }
      if(count > 0)
        vowCount.push_back(count);
    }
    
    int max = 0;
    for(int num : vowCount)
      if(num > max)
        max = num;
        
    cout << max;
  
    return 0;
}