class Solution:
    def generateTrees(self, n):
        
        def generate(start, end):
            result = []

            # No nodes
            if start > end:
                return [None]

            # Try every number as root
            for i in range(start, end + 1):

                left_trees = generate(start, i - 1)
                right_trees = generate(i + 1, end)

                # Combine every left subtree with every right subtree
                for left in left_trees:
                    for right in right_trees:

                        root = TreeNode(i)
                        root.left = left
                        root.right = right

                        result.append(root)

            return result

        return generate(1, n)
