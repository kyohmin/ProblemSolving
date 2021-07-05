import sys
rep = int(input())
for i in range(rep):
    x,y = sys.stdin.readline().split()
    print("Case #{}:".format(i+1), int(x)+int(y))