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



# C++ STL `list` Built-in Functions & Complexity

This document summarizes the built-in functions of the C++ STL `list` and their time complexities.

---

## **Constructor**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `list<type> myList;` | Construct a list with 0 elements. | O(1) |
| `list<type> myList(N);` | Construct a list with N elements, values are garbage. | O(N) |
| `list<type> myList(N, V);` | Construct a list with N elements, all set to V. | O(N) |
| `list<type> myList(list2);` | Construct a list by copying another list. | O(N) |
| `list<type> myList(A, A+N);` | Construct a list by copying elements from array A of size N. | O(N) |
| `list<type> myList(v.begin(), v.end());` | Copy elements from vector v. | O(N) |

---

## **Capacity**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `myList.size()` | Returns number of elements. | O(1) |
| `myList.max_size()` | Returns the max possible size. | O(1) |
| `myList.clear()` | Clears all elements. | O(N) |
| `myList.empty()` | Checks if list is empty. | O(1) |
| `myList.resize()` | Changes size of list. | O(K), K = change in size |

---

## **Modifiers**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `myList = ...`<br>`myList.assign(list2.begin(), list2.end())` | Assign another list. | O(N) |
| `myList.push_back()` | Add element to tail. | O(1) |
| `myList.push_front()` | Add element to head. | O(1) |
| `myList.pop_back()` | Delete tail element. | O(1) |
| `myList.pop_front()` | Delete head element. | O(1) |
| `myList.insert()` | Insert at specific position. | O(N+K), K = # inserted |
| `myList.erase()` | Erase at specific position. | O(N+K), K = # erased |
| `replace(myList.begin(), myList.end(), value, replace_value)` | Replace all `value` with `replace_value`. *(Not STL list method)* | O(N) |
| `find(myList.begin(), myList.end(), V)` | Find value V. *(Not STL list method)* | O(N) |

---

## **Operations**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `myList.remove(V)` | Remove all occurrences of V. | O(N) |
| `myList.sort()` | Sort ascending. | O(NlogN) |
| `myList.sort(greater<type>())` | Sort descending. | O(NlogN) |
| `myList.unique()` | Remove duplicates (sorted list). | O(N), sorting: O(NlogN) |
| `myList.reverse()` | Reverse the list. | O(N) |

---

## **Element Access**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `myList.back()` | Access tail element. | O(1) |
| `myList.front()` | Access head element. | O(1) |
| `next(myList.begin(), i)` | Access ith element. | O(N) |

---

## **Iterators**

| Name | Details | Time Complexity |
|------|---------|----------------|
| `myList.begin()` | Iterator to first element. | O(1) |
| `myList.end()` | Iterator to past last element. | O(1) |

---

> **Note:**  
> - `replace` and `find` are not list member functions; they are generic STL algorithms.
> - `N`: Number of elements in the list.  
> - `K`: Number of elements inserted/erased when applicable.
