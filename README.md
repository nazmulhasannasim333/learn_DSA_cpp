# Singly Linked List Operations Complexity

Below is a summary of the time complexity for various operations on a singly linked list:

| Operation            | Scenario                | Complexity                       |
|----------------------|-------------------------|----------------------------------|
| **Insertion**        | At Head                 | O(1)                             |
|                      | At Tail (no tail ptr)   | O(N)                             |
|                      | At Tail (with tail ptr) | O(1)                             |
|                      | At Any Position         | O(N)                             |
| **Deletion**         | At Head                 | O(1)                             |
|                      | At Tail                 | O(N)                             |
|                      | At Any Position         | O(N)                             |
| **Printing**         | Forward                 | O(N)                             |
|                      | Backward (recursion)    | O(N)                             |
| **Input**            | With tail tracking      | O(N)                             |
|                      | Without tail tracking   | O(N*N)                           |
| **Sorting**          | Selection Sort          | O(N*N)                           |

**Notes:**
- "N" is the number of nodes in the linked list.
- "Tail tracking" means maintaining a pointer/reference to the last node in the list, which optimizes certain operations.
- Printing backward in a singly linked list typically requires recursion since there are no backward links.

---