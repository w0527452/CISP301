# Chapter 9

## True or False

1\. If data is sorted in ascending order, it means it is ordered from lowest value to highest value.

True

2\. If data is sorted in descending order, it means it is ordered from lowest value to highest value.

False

3\. Regardless of the programming language being used, it is not possible to use the bubble sort algorithm to sort strings.

False

4\. The average number of comparisons performed by the sequential search algorithm on an array of n elements is n/2 (assuming the search values are consistently found).

True

5\. The maximum number of comparisons performed by the sequential search algorithm on an array of n elements is n/2 (assuming the search values are consistently found).

False

## Short Answer

1\. If a sequential search function is searching for a value that is stored in the last element of a 10,000-element array, how many elements will the search code have to read to locate the value?

10,000

2\. In an average case involving an array of n elements, how many times will a sequential search function have to read the array to locate a specific value?

Average for sequential search is n/2

3\. A binary search function is searching for a value that happens to be stored in the middle element of an array. How many times will the function read an element in the array before finding the value?

1

4\. What is the maximum number of comparisons that a binary search function will make when searching for a value in a 1,000-element array?

10  (log2𝑛)


5\. Why is the bubble sort inefficient for large arrays?

Because it traverses each element of the array multiple times as it sorts

6\. Why is the selection sort more efficient than the bubble sort on large arrays?

Values are moved once to their final sorted destination.

7\. List the steps that the selection sort algorithm would make in sorting the following values: 4, 1, 3, 2.

```
1,4,3,2
1,2,4,3
1,2,3,4
```

8\. List the steps that the insertion sort algorithm would make in sorting the following values: 4, 1, 3, 2. 

```
1,4,3,2
1,3,4,2
1,2,3,4
```

## Algorithm Workbench #3

What algorithm does the following pseudocode perform?

```
Declare Integer index
Declare Integer scan
Declare Integer unsortedValue
For index = 1 To arraySize − 1
  Set unsortedValue = array[index]
  Set scan = index
  While scan > 0 AND array[scan−1] < array[scan]
    Call swap(array[scan−1], array[scan])
    Set scan = scan − 1
  End While
  Set array[scan] = unsortedValue
End For
```

Insertion Sort
