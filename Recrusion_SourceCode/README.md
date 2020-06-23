# Recrusion Source Code
Here you will find source code in cpp extensions with comments

# What is Recursion?
Any function which calls itself is called recursive. A recursive method solves a problem by
calling a copy of itself to work on a smaller problem. This is called the recursion step. The
recursion step can result in many more such recursive calls.

#  Why Recursion?
Recursion is a useful technique borrowed from mathematics. Recursive code is generally shorter
and easier to write than iterative code. Generally, loops are turned into recursive functions when
they are compiled or interpreted.
Recursion is most useful for tasks that can be defined in terms of similar subtasks. For example,
sort, search, and traversal problems often have simple recursive solutions

# Format of a Recursive Function
A recursive function performs a task in part by calling itself to perform the subtasks. At some
point, the function encounters a subtask that it can perform without calling itself. This case, where
the function does not recur, is called the base case. The former, where the function calls itself to
perform a subtask, is referred to as the ecursive case. We can write all recursive functions using
the format: if(test for the base case)
               return some base case value
               else if(test for another base case)
               return some other base case value
               //the recrusive case
               else
               return(some work and then a recrusive call)
               
               
            
