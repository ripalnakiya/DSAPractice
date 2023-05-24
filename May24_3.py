# Find Extra
# Given a string s, consisting of only lowercase letters.
# You also have t which is a permutation of t. But while making the permutation one extra character has been added to t.

# Print that extra character.

# Constraints:
# 0 <= s.length <= 1000
# t.length == s.length + 1
# s and t consist of lowercase English letters.

# Sample Input:
# abcd
# abcde

# Sample Output:
# e

s = input()
t = input()

for alp in t :
  if alp not in s:
    print(alp)