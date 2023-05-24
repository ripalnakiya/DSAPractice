# Palindromic Sum
# Given two strings of s and t consists of characters of digits only(‘0’ to ‘9’).
# Find the addition of the strings (s and t) and then check whether the resultant string is palindrome or not.

# Constraints:
# 1<=s.size(),t.size()<=200

# Sample Input:
# 100
# 1
# Sample Output:
# True (case-sensitive)

# Explanation:
# 100 + 1 => 101
# 101 is palindrome.
# Print False if not a palindrome (with capital F).

n1 = int(input())
n2 = int(input())

num = n1 + n2

num_str = str(num)
rev_str = num_str[::-1]

if num_str == rev_str:
  print("True")
else :
  print("False")

