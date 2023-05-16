// A string is called a pString if it can be represented as p concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time a 1String, a 2String and a 4String, but it is not a 3String, a 5String, or a 6String and so on. Obviously any string is a 1String.

// You are given a string s, consisting of lowercase English letters and a positive integer p. Your task is to find if it is possible to reorder the letters in the string s in such a way that the resulting string is a pString.

// Input Format:
// The first input line contains integer p.
// The second line contains s, all characters in s are lowercase English letters.

// Output Format:
// Print "YES" if it is possible to rearrange the letters in string s in such a way that the result is a pString. Print the result on a single output line. If it is not possible print "NO". (without quotes).

#include <stdio.h>
#define MAX_CHARS 256
int main()
{
  char str[100];
  int p,count[MAX_CHARS] = {0},flag = 0;
  scanf("%d", &p);
  scanf("%s", str);
  
  for(int i=0; str[i] != '\0'; i++)
    count[str[i]]++;
    
  for (int i=0; i< MAX_CHARS; i++)
  {  if((count[i]>0) && ((count[i] % p)==0))
    { printf("YES");
      flag = 1;
      break;
    }
  }
  if(flag == 0)
    printf("NO");

  return 0;
}