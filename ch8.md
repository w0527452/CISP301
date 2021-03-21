# Chapter 8

## True or False

1\. You can store a mixture of different data types in an array.

False

2\. In most languages, an array’s size cannot be changed while the program is running.

True

3\. Array bounds checking typically occurs while a program is running.

True

4\. You can do many things with arrays, but you cannot pass one as an argument to a module or a function.

False

5\. A declaration for a two-dimensional array requires only one size declarator.

True

\pagebreak

## Short Answer

1\. What is an off-by-one error?

An error iterating one too many or one too few times when looping through an array.

2\. Look at the following pseudocode:

```
Constant Integer SIZE = 10
Declare Integer values[SIZE]
```

a\. How many elements does the array have?

10

b\. What is the subscript of the first element in the array?

0

c\. What is the subscript of the last element in the array?

9

3\. Look at the following pseudocode:

```
Constant Integer SIZE = 3
Declare Integer numbers[SIZE] = 1, 2, 3
```

a\. What value is stored in numbers[2]?

3

b\. What value is stored in numbers[0]?

1

4\. A program uses two parallel arrays named customerNumbers and balances. The customerNumbers array holds customer numbers and the balances array holds customer account balances. If a particular customer’s customer number is stored in customerNumbers[187], where would that customer’s account balance be stored?

```
balances[187]
```

5\. Look at the following pseudocode array declaration:

```
Declare Real sales[8][10]
```

a\. How many rows does the array have?

8

b\. How many columns does the array have?

10

\pagebreak

c\. How many elements does the array have?

80

d\. Write a pseudocode statement that stores a number in the last column of the last row in the array.

```
SET sales[7][9] = 5
```


## Algorithm Workbench #9

Write a pseudocode algorithm that uses the For Each loop to display all of the values in the following array:

```
Constant Integer SIZE = 10
Declare Integer values[SIZE] = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Declare Integer index
For index = 0 to SIZE - 1
  Display values[index]
End For
```
