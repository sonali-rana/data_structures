from node import Node


class BinaryTree:

    def __init__(self, root_node: Node) -> None:
        self.root = root_node

    def __insert(self, node: Node, current_node: Node) -> str:
        if node.data > current_node.data:
            if current_node.right == None:
                current_node.right = node
                print(f"inserted {node.data} at right of ", current_node.data)
                return node
            else:
                return self.__insert(node, current_node.right)
        elif node.data < current_node.data:
            if current_node.left == None:
                current_node.left = node
                print(f"inserted {node.data} at left of ", current_node.data)
                return node
            else:
                return self.__insert(node, current_node.left)
        else:
            print("node value is same which is an error")

    def insert(self, node: Node):
        return self.__insert(node=node, current_node=self.root)

    def __inorder(self, node: Node):
        if node.left:
            self.__inorder(node.left)
        print(node.data)
        if node.right:
            self.__inorder(node.right)
        return

    def print_inorder(self):
        return self.__inorder(node=self.root)

    def __preorder(self, node: Node):
        print(node.data)
        if node.left:
            self.__inorder(node.left)
        if node.right:
            self.__inorder(node.right)
        return

    def print_preorder(self):
        return self.__preorder(node=self.root)
