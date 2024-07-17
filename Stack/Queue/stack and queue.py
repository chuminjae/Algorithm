stack = []
stack.append(5)
stack.append(2)
stack.append(3)
stack.append(1)
stack.pop()
print(stack) #최하단 원소부터 5,2,3,1
print(stack[::-1]) # 최상단 원소부터 1,3,2,5

from collections import deque
Queue = deque()
Queue.append(2)
Queue.append(3)
Queue.append(4)
Queue.append(1)
Queue.append(0)
# 0 1 4 3 2 
Queue.popleft()
# 0 1 4 3
print(Queue)
Queue.reverse()
print(Queue)
