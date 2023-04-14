class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        push_ind = 0
        pop_ind = 0
        stack = []
        if len(popped) == 0:
            return True
        if len(pushed) < len(popped):
            return False
        while True :
            if push_ind == len(pushed) and pop_ind == len(popped):
                return True
            if push_ind == len(pushed):
                if stack[-1] == popped[pop_ind]:
                    stack.pop()
                    pop_ind += 1
                else:
                    return False
            else:
                if len(stack) != 0 and stack[-1] == popped[pop_ind]:
                    stack.pop()
                    pop_ind += 1
                else:
                    stack.append(pushed[push_ind])
                    push_ind += 1