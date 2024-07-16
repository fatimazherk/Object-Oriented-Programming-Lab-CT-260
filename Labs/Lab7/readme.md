# Lab 7

# Q1.

Create a class for 2D dynamic Array, of type integer, by using a double pointer, that
is, a pointer to the array of pointers. The class must have the following methods.
- Default, parameterized, and copy constructor
- Overloaded assignment operator
- Overloaded +, -, and * operator
- Overloaded indexing operator
- Destructor.
Write a test program for verifying the working of the designed class.

# Q2.

By using the 2D Array class that you created in Problem 1, solve the following problem. Given a
2D Array (matrix) of integers of size m x n with the following two properties:
- Each row is sorted in non-decreasing order
- The first integer of each row is greater than the last integer of the previous row and
an integer target, return true if the target is in the matrix otherwise false otherwise.
Hint: Apply binary search algorithm.

# Q3. 

A company has decided to update the salaries of the employees for which updation
is required in the payroll system so that employees can be paid according to the
revised budget. How can you implement the concept of friend class here? Consider
there are 2 classes. One is “Employee” having private data members (name, id,
designation, salary etc.) and the other is “Payroll”. The function for updating
salaries can be made inside the “Payroll” class that can access the private member
“salary” of the “Employee” class and allow the required updation. Implement this
scenario.

# Q4.

Repeat Q3 and implement this scenario using the friend function.
