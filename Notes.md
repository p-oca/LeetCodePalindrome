# Notes
## Vectors and Iterators

In C++, vectors are dynamic arrays that provide a flexible and efficient way to store and manipulate collections of elements. They can be resized dynamically and offer various built-in functions to facilitate common operations.

### Vectors

- Vectors are declared and used by including the `<vector>` header.
- They can store elements of any data type, such as integers, strings, or custom objects.
- Vectors automatically handle memory allocation and deallocation.
- Key operations on vectors include:
  - `push_back(element)`: Adds an element to the end of the vector.
  - `size()`: Returns the number of elements in the vector.
  - `at(index)`: Accesses the element at the specified index.
  - `insert(iterator, element)`: Inserts an element at a specified position.
  - `erase(iterator)`: Removes an element at a specified position.
  - `clear()`: Removes all elements from the vector.

### Iterators

- Iterators provide a way to access and manipulate elements within a container.
- They are declared based on the container type and provide operations specific to that container.
- Common iterator operations include:
  - `begin()`: Returns an iterator pointing to the first element.
  - `end()`: Returns an iterator pointing to the position after the last element.
  - `++`: Moves the iterator to the next element.
  - `--`: Moves the iterator to the previous element.
  - `*`: Dereferences the iterator to access the element.

Both vectors and iterators are powerful tools that simplify working with collections of data in C++. They enable dynamic storage and efficient traversal, making them widely used in various algorithms and data structures.
# Pseudocode
```
isPalindrome(x):
    if x < 0 or (x != 0 and x % 10 == 0):
        return false
    else:
        digits = []
        if x == 0:
            return true
        else:
            while x > 0:
                digits.insert(0, x % 10)
                x = x / 10
            j = digits.length - 1
            for i = 0 to digits.length - 1:
                if digits[i] != digits[j]:
                    return false
                j = j - 1
            return true
```
