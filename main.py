# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        # Write your code here
        if root.left == None and root.right == None:
            return []
        else:
            solution = []
            if (root.left):
                solution + [root.left.val] + self.solve(root.left)
            if (root.right):
                solution + self.solve(root.right)
            return solution

