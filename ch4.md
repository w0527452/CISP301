# Chapter 4

## True or False

1\. You can write any program using only sequence structures.

  False

2\. A program can be made of only one type of control structure. You cannot combine structures.

  False

 3\. A single alternative decision structure tests a condition and then takes one path if the condition is true, or another path if the condition is false. 

   False

4\. A decision structure can be nested inside another decision structure.

  True

5\. A compound Boolean expression created with the AND operator is true only when both subexpressions are true.

  True

## Short Answers

1\. Explain what is meant by the term conditionally executed.

  Executed only when a condition is true.

2\. You need to test a condition and then execute one set of statements if the condition is true. If the condition is false, you need to execute a different set of statements. What structure will you use?

  Dual Alternative Decision

3\. If you need to test the value of a variable and use that value to determine which statement or set of statements to execute, which structure would be the most straightforward to use?

  Case Structure

\pagebreak

4\. Briefly describe how the AND operator works.

  Compares the boolean value of two conditions and only returns true if both conditions are true.

5\. Briefly describe how the OR operator works.

  Compares the boolean value of two conditions and returns true if either of them are true.

6\. When determining whether a number is inside a range, which logical operator is it best to use?

  AND.  As in IF x < 20 AND x > 10

7\. What is a flag and how does it work?

  A variable that signals when a condtion exists.  It's usually set to false until the condition exists.

## Algorithm Workbench #6

   Rewrite the following If-Then-Else If statement as a Select Case statement.

```
If selection == 1 Then
  Display "You selected A."
Else If selection == 2 Then
  Display "You selected 2."
Else If selection == 3 Then
  Display "You selected 3."
Else If selection == 4 Then
  Display "You selected 4."
Else
  Display "Not good with numbers, eh?"
End If
```

==========================================


Continued on next page...

\pagebreak

```
std::string output;

switch(selection) {
	case 1:
	  output = "You selected A.";
	  break;
	case 2:
	  output = "You selected 2.";
	  break;
	case 3:
	  output = "You selected 3.";
	  break;
	case 4:
	  output = "You selected 4.";
	  break;
	default:
	  output = "Not good with numbers, eh?";
}

std::cout << output << std::endl;
```

