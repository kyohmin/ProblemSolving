"""
Problem Name: 도키도키 간식드리미
Date        : Nov-26,2023
Link        : https://www.acmicpc.net/problem/12789
Difficulty  : Silver 3
"""

import sys

repeat = int(sys.stdin.readline())
command = sys.stdin.readline()

stack1 = command.split()
stack2 = []

stack1.reverse()
order = 1
possible = False

while True:
    if len(stack1) == 0 and len(stack2) == 0:
        possible = True
        break
    elif len(stack1) == 0 and int(stack2[-1]) != order:
        possible = False
        break
    elif len(stack1) != 0 and int(stack1[-1]) == order:
        stack1.pop()
        order += 1
    elif len(stack2) != 0 and int(stack2[-1]) == order:
        stack2.pop()
        order += 1
    else:
        stack2.append(int(stack1[-1]))
        stack1.pop()

if possible:
    print("Nice")
else:
    print("Sad")

"""
Note:
    First trial: Algorithm was right, but the input method was wrong.
                 Because I used string[0], the digit was limited to one digit.
    
    First, escape statent when all stack is empty.
    Second, escape statement when the action cannot be done.
    Third, check first stack.
    Fourth, check second stack.
    Fifth, pop stack1 and push it to stack2
"""