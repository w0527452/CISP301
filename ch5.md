# Chapter 5

## True or False

1\. A condition-controlled loop always repeats a specific number of times.

False

2\. The While loop is a pretest loop.

True

3\. The Do-While loop is a pretest loop.

False

4\. You should not write code that modifies the contents of the counter variable in the body of a For loop.

True

5\. You cannot display the contents of the counter variable in the body of a loop.

False

6\. It is not possible to increment a counter variable by any value other than 1.

False

7\. The following statement decrements the variable x: Set x = x - 1.

True

8\. It is not necessary to initialize accumulator variables.

False

9\. In a nested loop, the inner loop goes through all of its iterations for every single iteration of the outer loop.

True

10\. To calculate the total number of iterations of a nested loop, add the number of iterations of all the loops.

False

## Short Answer

1\. Why should you indent the statements in the body of a loop?

Makes it easier to read, debug

2\. Describe the difference between pretest loops and posttest loops.

Pretest only performs the loop if test is true.  Posttest always performs loop at least once.

3\. What is a condition-controlled loop?

Loop is performed as long as a condition is true.

4\. What is a count-controlled loop?

Loop is performed a certain number of times.

5\. What three actions do count-controlled loops typically perform using the counter variable?

Initialize, test, increment

6\. What is an infinite loop? Write the code for an infinite loop.

A loop that does not end, such as ```while(true){ do_something() }```

7\. A For loop looks like what other loop in a flowchart?

It's the same as a while loop, only one is condition based and one is count based.

8\. Why is it critical that accumulator variables are properly initialized?

You can't properly count if you don't know where you're starting from.

9\. What is the advantage of using a sentinel?

Don't have to know how many times the loop needs to iterate.

10\. Why must the value chosen for use as a sentinel be carefully selected?

It's useless if it can be mistaken for a valid value.

\pagebreak

## Algorithm Workbench #7

Convert the While loop in the following code to a Do-While loop:

```
Declare Integer x = 1
While x > 0
  Display "Enter a number."
  Input x
End While
```

Converted:

```
Declare Integer x
Do
  Display "Enter a number:"
  Input x
While x > 0
```
