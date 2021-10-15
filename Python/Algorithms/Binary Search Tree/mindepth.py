class TreeNode:
    """
    Basic Tree Node Class
    """
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def minDepth(root:TreeNode):
    if root == None:
        return 0
    else:
        return minDepthHelper(root)

def minDepthHelper(root):
    """
    Traversing the BST recursively and increasing depth on each level
    """
    if root == None:
        return 0
    if root.left == None and root.right == None:
        return 1
    depth = 10000
    if root.left != None:
        depth =  min(minDepth(root.left),depth)
    if root.right != None:    
        depth =  min(minDepth(root.right),depth)

    return depth + 1


