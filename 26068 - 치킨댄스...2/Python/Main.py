N = int(input())

count = 0

for i in range(0, N):
    gift = input()
    day = int(gift[2:])
    if day <= 90:
        count += 1

print(count)