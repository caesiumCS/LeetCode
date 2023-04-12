class Solution:
    def simplifyPath(self, path: str) -> str:
        path = '/'.join(path.split('/')).split('/')
        stack = []
        for p in path:
            if p == '.' or p == '':
                continue
            if p == '..':
                if len(stack) == 0:
                    continue
                else:
                    stack.pop()
            else:
                stack.append(p)
        return '/'+'/'.join(stack)