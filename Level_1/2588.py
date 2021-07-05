A = input()
B = input()
A, B = int(A), int(B)

print(A*(B%10))
print(A*(B%100 // 10))
print(A*(B//100))
print(A*B)