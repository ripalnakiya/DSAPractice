/*
Find First and Last Position of Element in Sorted Array
Problem Statement:

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If the target is not found in the array, return [-1, -1].

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109

Example:
5
1 2 2 2 5
2

Output:
1 3
*/

#include <iostream>
using namespace std;

int main() 
{
    int n, target, startp = -1, endp = -1, fs = 0,counter = 0;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; ++i)
      cin>>arr[i];
      
    cin>>target;
    
    for(int i=0; i<n; ++i){
      if(arr[i] == target && fs != 1){
        startp = i;
        fs = 1;
      }
      if(arr[i] == target)
        counter++;
    }
    if(startp != -1)
      endp = counter - 1 + startp;

    cout<<startp<<" "<<endp;
    return 0;
}