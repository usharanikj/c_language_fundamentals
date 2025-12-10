/*

lvalue: lvalue simply means an object that has an identifiable location in memory (i.e. having an address).

In any assignment statement "lvalue" must have the capability to store the data.
lvalue cannot be a function, expression (like a+b) or a constant (like 3 , 4 , etc.).


r-value: r-value simply means, an object that has no identifiable location in memory (i.e. having an address).

Anything that is capable of returning a constant expression or value.
Expression like a+b will return some constant.

Assignment Rule:
LHS of assignment must be an lvalue
RHS can be anything (lvalue or rvalue)

VALID:
a = 5;
a = a + 2;
arr[0] = a * 3;
*p = 10;

INVALID:
These cause compiler errors:
5 = a;
a + 3 = 10;
a * i = a;

HERE IS WHAT I GOT WRONG:

Why a * i = a; is invalid:
a * i is a computed value, not a variable.
It has no storage location, so the compiler cannot assign to it.
Correct version:
a = a * i;

Closure Property:
Closure property is the property that deals with the operations and their results within a certain set of numbers. This property states that if a set of numbers is closed under any arithmetic operation like addition, subtraction, multiplication, and division, i.e. the operation is performed on any two numbers of the set the answer of the operation is in the set itself.

*/
