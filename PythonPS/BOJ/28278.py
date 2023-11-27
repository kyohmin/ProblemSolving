"""
Problem Name: 스택 2
Date        : Nov-25,2023
Link        : https://www.acmicpc.net/problem/28278
Difficulty  : Silver 4
"""

# Import
import sys

# Solution
stack = []
repeat= int(sys.stdin.readline())
for i in range(repeat):
    # Command Input
    cmd = sys.stdin.readline().rstrip()

    # Push to the stack -> None
    if len(cmd) > 1:
        val = int(cmd[2:])
        stack.append(val)

    # Pop stack -> Int
    elif cmd == '2':
        if len(stack) == 0: print(-1)
        else:
            print(stack.pop())

    # Size of Stack -> Int
    elif cmd == '3':
        print(len(stack))

    # Is empty -> Int (bool)
    elif cmd == '4':
        if len(stack) == 0: print(1)
        else: print(0)

    # Top value in Stack
    elif cmd == '5':
        if len(stack) == 0: print(-1)
        else:
            print(stack[-1])

"""
Note:
    PS for implementing stack.
    Used 'int(sys.stdin.readline())' for faster input speed.

"""