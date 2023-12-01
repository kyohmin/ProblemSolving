"""
Problem Name: 풍선 터트리기
Date        : Dec-01,2023
Link        : https://www.acmicpc.net/problem/2346
Difficulty  : Silver 3
"""

import sys
from collections import deque

rep = int(sys.stdin.readline()) # Read Repetition count
cmd = [int(x) for x in sys.stdin.readline().split()] # 
balloons = deque()

for i, num in enumerate(cmd):
    balloons.append([i+1,num])

for i in range(rep):
    print(balloons[0][0])
    move = balloons[0][1]
    balloons.popleft()
    if i == rep-1: break
    move = move-1 if move > 0 else move
    for j in range(abs(move)):
        if move > 0:
            tmp = balloons.popleft()
            balloons.append(tmp)
        else:
            tmp = balloons.pop()
            balloons.appendleft(tmp)

"""
Note:
    Pop and append direction is crucial.
"""