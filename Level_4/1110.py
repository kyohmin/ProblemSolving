start = int(input())
tmp, counter = start, 0

while True:
    if tmp < 10:
        tmp *= 11
        counter += 1
    elif tmp >= 10:
        tmp_1 = tmp % 10
        tmp = tmp // 10 + tmp_1
        tmp = tmp_1 * 10 + tmp % 10
        counter += 1
    if tmp == start : break
print(counter)