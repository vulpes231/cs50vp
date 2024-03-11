class MyStack {
  constructor(capacity) {
    this.capacity = capacity;
    this.stack = []; // Initialize an empty array to store stack elements
  }

  push(item) {
    if (this.stack.length < this.capacity) {
      this.stack.unshift(item);
    } else {
      throw new Error("Stack overflow");
    }
  }

  pop() {
    if (!this.isEmpty()) {
      return this.stack.shift();
    } else {
      throw new Error("Stack underflow");
    }
  }

  peek() {
    if (!this.isEmpty()) {
      return this.stack[0];
    } else {
      throw new Error("Stack is empty");
    }
  }

  size() {
    return this.stack.length;
  }

  isEmpty() {
    return this.stack.length === 0;
  }
}

const fruitStack = new MyStack(5);

fruitStack.push("mango");
fruitStack.push("guava");
fruitStack.push("apple");
fruitStack.push("cinammon");

console.log(fruitStack);

fruitStack.push("ganta");

console.log(fruitStack);

console.log(fruitStack.peek());
