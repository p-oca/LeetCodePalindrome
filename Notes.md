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
    Convert x to a string and store it in a variable called 'str_x'
    Set 'start' to 0
    Set 'end' to the length of 'str_x' minus 1

    while 'start' is less than or equal to 'end':
        if 'str_x' at index 'start' is not equal to 'str_x' at index 'end':
            return false
        increment 'start' by 1
        decrement 'end' by 1

    return true
```
## Explanation
1. The variable `end` represents the position after the last element in the `digits` vector. It is obtained using the `end()` function, which returns an iterator pointing to the position after the last element.
2. To compare elements in the `digits` vector from both ends, the code sets up two iterators: `i` for iterating from the beginning of the vector, and `j` for iterating from the end.
3. To start iterating from the end, we need to position `j` at the last element. Since `end` points to the position after the last element, subtracting 1 from `end` gives the index of the last element.
4. By setting `j = end - 1`, the iterator `j` is initialized to point to the last element in the `digits` vector, allowing us to compare elements in a symmetrical manner.

By using `j` as an iterator initialized with the index of the last element, the code can effectively compare elements from both ends of the vector during the palindrome check.
