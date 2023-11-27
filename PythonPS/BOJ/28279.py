"""
Problem Name: 덱 2
Date        : Nov-27,2023
Link        : https://www.acmicpc.net/problem/28279
Difficulty  : Silver 4
"""

import sys
from collections import deque

repeat = int(sys.stdin.readline())
storage = deque()

for i in range(repeat):
    cmdList = sys.stdin.readline().split()
    command = int(cmdList[0])
    size = len(storage)
    # Push Back
    if command == 1:
        num = int(cmdList[1])
        storage.appendleft(num)
    
    # Push Front
    elif command == 2:
        num = int(cmdList[1])
        storage.append(num)

    # Deque PopFront   
    elif command == 3:
        if size != 0:
            print(storage.popleft())
        else:
            print(-1)

    # Deque PopBack
    elif command == 4:
        if size != 0:
            print(storage.pop())
        else:
            print(-1)

    # Size
    elif command == 5:
        print(size)

    # IsEmpty
    elif command == 6:
        if size > 0:
            print(0)
        else:
            print(1)

    # Peek Front
    elif command == 7:
        if size != 0:
            print(storage[0])
        else:
            print(-1)

    # Peek Back
    elif command == 8:
        if size != 0:
            print(storage[-1])
        else:
            print(-1)
            
"""
Note:
    Collection's deque is much faster compared to list.
    This problem must be solved using collections.deque and sys.stdin.readline to be in time.
"""