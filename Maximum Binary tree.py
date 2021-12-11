# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


#its a recursive approach 
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        return self.construct_tree(nums,0,len(nums))
    def construct_tree(self,nums,l,r):
        if l == r:
            return None
        maxx = nums.index(max(nums[l:r]))
        tree_head = TreeNode(nums[maxx])
        tree_head.left = self.construct_tree(nums,l,maxx)
        tree_head.right = self.construct_tree(nums,maxx+1,r)
        return tree_head
