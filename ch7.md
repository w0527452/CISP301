# Chapter 7

## True or False

1\. The process of input validation works like this: When the user of a program enters invalid data, the program should ask the user, “Are you sure you meant to enter that?” If the user answers “yes,” the program should accept the data.

False

2\. The priming read appears inside the validation loop.

False

3\. The approach of using a posttest validation loop shown in this chapter requires a priming read.

False

## Short Answer

1\. What does the phrase “garbage in, garbage out” mean?

Bad input creates bad output.  Can't expect a cake to be edible if you use sand instead of flour.

\pagebreak

2\. Give a general description of the input validation process.

User inputs data, data is compared to expected input and if it doesn't match it's discarded and user is asked to re-enter.

3\. What is the purpose of the priming read?

To get the initial value to be tested by the validation loop.

4\. In this chapter you saw how a posttest loop can be used in input validation, as an alternative to the priming read followed by a pretest loop. Why is it typically not best to use a posttest loop approach?

It does not allow for an explanation that the data is invalid.

## Algorithm Workshop #5

Design an algorithm that prompts the user to enter a secret word. The secret word should be at
least 8 characters long. Validate the input.

```
// Get secret word
Display "Enter secret word: "
Input word
While word.length < 8
  Display "Word needs to be at least 8 characters long.  Please enter a new word: "
  Input word
End While
```
