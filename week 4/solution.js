class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

function Solution(array) {
   current_node = Node(array[0])

    for (let i = 1; i < array.length; i++) {
        current_node.next = Node(array[i])
        current_node = current_node.next
    }

    current_node.next = Node(array[0])

    return current_node
}