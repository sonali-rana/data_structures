from Heap.max_heap import MaxHeap
from binary_tree import BinaryTree
from node import Node


def test_binary_tree():
    """
        Function to generate a tree and perform its methods
    """
    root_node = Node(data=10)
    tree = BinaryTree(root_node=root_node)
    tree.insert(node=Node(data=5))
    tree.insert(node=Node(data=16))
    tree.insert(node=Node(data=18))
    tree.insert(node=Node(data=15))
    tree.print_preorder()
    return "BinaryTree Tester Completed"


def test_max_heap():

    heap = MaxHeap(2)
    heap.insert(3)
    print("heap is :  ", heap)

    heap.insert(5)
    print("heap is :  ", heap)

    heap.insert(1)
    print("heap is :  ", heap)

    heap.delete()

    print("heap is after deleting root:  ", heap)

    heap.delete()
    print("heap is after deleting root:  ", heap)
