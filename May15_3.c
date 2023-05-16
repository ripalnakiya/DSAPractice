// Problem Statement:

// Bunny has a string. Bunny likes vowel and dislikes consonants so he would like to know what percentage of the characters in the string are vowels.

// Input Format:
// Only one line of input that contains one string.

// Constraints:
// One string that only contains lowercase or uppercase letters. The length of this string will not be greater than 100.

// Output Format:
// Output the required percentage upto 4 decimal places.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertLower(char *str)
{
  for(int i = 0; str[i] != '\0'; i++)
    str[i] = tolower(str[i]);
}

int counter(char *str)
{ 
  int count = 0;
  for(int i = 0; str[i] != '\0'; i++)
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      count++;
  return count;
}

float calPercent(int count, char *str)
{
  int total = strlen(str);
  float percent = (float)count/total *  100;
  return percent;
}


int main()

{
    char str[100];
    int count;
    float percent;
    
    scanf("%s", str);
    
    convertLower(str);
    
    count = counter(str);
    
    percent = calPercent(count,str);
    
    printf("%.4f", percent);
}
