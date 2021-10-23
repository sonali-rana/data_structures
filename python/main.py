from binary_tree import BinaryTree
from node import Node


root_node = Node(data=10)
tree = BinaryTree(root_node=root_node)
tree.insert(node=Node(data=5))
tree.insert(node=Node(data=16))
tree.insert(node=Node(data=18))
tree.insert(node=Node(data=15))


tree.print_preorder()
