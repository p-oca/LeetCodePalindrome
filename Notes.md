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
### Code
The code is written in C++ and defines a class `Solution` with a member function `isPalindrome` that checks if a given integer `x` is a palindrome number.

1. The function `isPalindrome` takes an integer `x` as input and returns a boolean value indicating whether `x` is a palindrome number.
2. The code first performs a check to determine if `x` is negative or if `x` is a non-zero number ending with a 0 (which would not be a palindrome). If either condition is true, it immediately returns `false`.
3. If the above conditions are not met, the code proceeds to check if `x` is a palindrome number. It does this by converting `x` into a sequence of digits and comparing the digits from the beginning and end of the sequence.
4. To convert `x` into a sequence of digits, the code initializes an empty vector called `digits`. It then enters a loop where it repeatedly extracts the last digit of `x` using the modulus operator `%` and adds it to the `digits` vector using the `insert` function to maintain the order.
5. After the loop completes, the `digits` vector contains the digits of `x` in reverse order.
6. The code then uses two iterators, `i` and `j`, to compare the digits from the beginning and end of the `digits` vector. The iterator `i` starts at the beginning of the vector, while the iterator `j` starts at the end of the vector.
7. The code iterates over the elements of the `digits` vector using a loop. In each iteration, it compares the elements pointed to by `i` and `j`. If they are not equal, it means the number is not a palindrome, and the function returns `false`.
8. If the loop completes without finding any mismatches, it means the number is a palindrome, and the function returns `true`.
The code effectively checks if a given number `x` is a palindrome by converting it into a sequence of digits and comparing the digits from both ends.
### Why `end() - 1`?
1. The variable `end` represents the position after the last element in the `digits` vector. It is obtained using the `end()` function, which returns an iterator pointing to the position after the last element.
2. To compare elements in the `digits` vector from both ends, the code sets up two iterators: `i` for iterating from the beginning of the vector, and `j` for iterating from the end.
3. To start iterating from the end, we need to position `j` at the last element. Since `end` points to the position after the last element, subtracting 1 from `end` gives the index of the last element.
4. By setting `j = end - 1`, the iterator `j` is initialized to point to the last element in the `digits` vector, allowing us to compare elements in a symmetrical manner.

By using `j` as an iterator initialized with the index of the last element, the code can effectively compare elements from both ends of the vector during the palindrome check.
