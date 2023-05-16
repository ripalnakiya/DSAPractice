count = 0

pairs = []

n = int(input())

for _ in range(n):
  x,y = input().split()
  x = int(x)
  y = int(y)
  pairs.append((x,y))
  
for pair in pairs:
  x , y = pair
  if (x > 0 and y > 0):
    count += 1
    
perc = float(count / n)

formatted_perc = "{:.6f}".format(perc)

print(formatted_perc)