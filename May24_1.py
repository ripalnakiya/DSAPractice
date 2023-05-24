# Favorite Number
# Nishita is having fun with bits. She has a number n (base 10).
# But she wants the bits of her number in descending order.
# Help her to find that number.

# Constraints:
# 1<=n<=2^31

# Sample Input:
# 9
# Sample Output:
# 12

# Explanation:
# 9 -> 1010
# Sorted bits
# 1100 (12)

n = int(input())

bits = bin(n)

bits = str(bits)

bits = bits[2:]

zeroes = 0
ones = 0

for digit in bits:
  if digit == "0":
    zeroes +=1
  else:
    ones += 1

string = "" + "1" *ones + "0" *zeroes

dec =  int(string, 2)

print(dec)
