counter, tmp, s = 0, 0, 0
num = int(input())
while num != s:
    if num < 10:
        num *= 2
        counter += 1
        s = num
    elif num >= 10:
        tmp = num % 10
        num = tmp + num // 10
        num = num + tmp
        counter += 1
        s = num

print(counter)