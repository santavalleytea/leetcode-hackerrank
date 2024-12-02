class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # Initialize dictionary that maps each opening bracket with its closing bracket
        char_map = {')': '(', ']': '[', '}': '{'}
        stack = []

        for char in s:
            if char in char_map.values():
                # Opening bracket, append
                stack.append(char)
            elif char in char_map:
                # Check if stack non-empty and the top of the stack corresponds to its paired bracket 
                if stack and stack[-1] == char_map[char]:
                    stack.pop()
                else:
                    return False
        # Checks if stack is empty, empty means all brackets paired
        return not stack
