# stack.py

class Stack:
    def __init__(self):
        # Initialize an empty stack
        self.stack = []

    def is_empty(self):
        # Check if the stack is empty
        return len(self.stack) == 0

    def push(self, item):
        # Add an item to the stack
        self.stack.append(item)
        print(f"Pushed {item} to stack.")

    def pop(self):
        # Remove and return the top item from the stack
        if not self.is_empty():
            popped_item = self.stack.pop()
            print(f"Popped {popped_item} from stack.")
            return popped_item
        else:
            print("Stack is empty. Cannot pop an item.")

    def peek(self):
        # Return the top item without removing it
        if not self.is_empty():
            return self.stack[-1]
        else:
            print("Stack is empty. No item to peek.")

    def size(self):
        # Return the size of the stack
        return len(self.stack)

    def display(self):
        # Display the entire stack
        if not self.is_empty():
            print("Stack:", self.stack)
        else:
            print("Stack is empty.")

# Example usage
if __name__ == "__main__":
    stack = Stack()
    
    stack.push(10)
    stack.push(20)
    stack.push(30)

    stack.display()  # Stack: [10, 20, 30]

    print(f"Top item is {stack.peek()}")  # Top item is 30

    stack.pop()  # Popped 30 from stack

    stack.display()  # Stack: [10, 20]

    print(f"Stack size is {stack.size()}")  # Stack size is 2
