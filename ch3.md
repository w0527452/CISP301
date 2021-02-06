# Chapter 3

## True or False

1\. The phrase “divide and conquer” means that all of the programmers on a team should be divided and work in isolation.

  False

2\. Modules make it easier for programmers to work in teams.

  True - in general

3\. Module names should be as short as possible.

  False

4\. Calling a module and defining a module mean the same thing.

  False

5\. A flowchart shows the hierarchical relationships between modules in a program.

  False

6\. A hierarchy chart does not show the steps that are taken inside a module.

  True

7\. A statement in one module can access a local variable in another module.

  False

8\. In most programming languages, you cannot have two variables with the same name in the same scope.

  True

9\. Programming languages typically require that arguments be of the same data type as the parameters that they are passed to.

  True

10\. Most languages do not allow you to write modules that accept multiple arguments.

  False

11\. When an argument is passed by reference, the module can modify the argument in the calling part of the program.

  True

12\. Passing an argument by value is a means of establishing two-way communication between modules.

  False (unless it's required for the module's return. I guess that could be considered two-way communication)

## Short Answer

1\. How do modules help you to reuse code in a program?

A module can perform a repetitive task removing the need to repeat code every time the task needs to be completed.

2\. Name and describe the two parts that a module definition has in most languages.

* Header - includes the module name, accepted parameters and possibly the value type returned.  It's used to call the module.
* Body - includes any tasks the module performs.

3\. When a module is executing, what happens when the end of the module is reached?

The computer returns to the section of the program where the module was called.

4\. What is a local variable? What statements are able to access a local variable?

A local variable is limited to the scope in which it was created.  It is only accessible by code in the same scope.  If a local variable was created in a module, only other code within that module can access it.

5\. In most languages, where does a local variable’s scope begin and end?

Its scope begins and ends with the module in which it was created.  The variable does not exist outside of the module.

6\. What is the difference between passing an argument by value and passing it by reference?

* Passing by value provides that module with a value to work with. The original variable remains unaffected. 
* Passing by reference allows the module to change the value stored in the variable used to call the module.

7\. Why do global variables make a program difficult to debug?

* It's not always easy to tell where they are defined and what their expected value is.
* Any code anywhere can change the value of a global variable.

