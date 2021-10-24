class MaxHeap:

    def __init__(self, root: int) -> None:
        self.items: list = [root, ]
        self.len: int = 1

    def get_parent_index(self, child_index) -> int:
        return abs(child_index-2)//2

    def get_parent(self, child_index: int) -> int:
        return self.items[self.get_parent_index(child_index=child_index)]

    def get_left_child_index(self, parent_index) -> int:
        return abs((parent_index*2)+1)

    def get_right_child_index(self, parent_index) -> int:
        return abs((parent_index*2)+2)

    def get_left_child(self, index):
        return self.items[self.get_left_child_index(index)]

    def get_right_child(self, index):
        return self.items[self.get_right_child_index(index)]

    def insert(self, item: int) -> int:
        index = self.len
        self.len += 1
        self.items.append(item)
        while (self.items[self.get_parent_index(child_index=index)] < item):
            # check if the parent is smaller than its child if true then swap them
            self.items[self.get_parent_index(
                child_index=index)], self.items[index] = self.items[index], self.items[self.get_parent_index(child_index=index)]
        return item

    def delete(self) -> int:
        self.items[0] = self.items[-1]
        index: int = 0
        del self.items[-1]
        self.heapify_down(index=0)
        return

    def heapify_down(self, index: int):
        try:
            # has left child
            while self.get_left_child_index(index) < len(self.items)-1:
                if self.get_left_child(index=index) > self.get_right_child(index=index):
                    temp = index
                    index = self.get_left_child_index(index)
                    self.items[index], self.items[temp] = self.items[temp], self.items[index]
                else:
                    temp = index
                    index = self.get_right_child_index(index)
                    self.items[index], self.items[temp] = self.items[temp], self.items[index]
        except:
            pass

    def __str__(self) -> str:
        return str(self.items)
