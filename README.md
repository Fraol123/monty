Monty Interpreter   
=======================
These is monty interpreter built on C language and complient with ```ISO90```,```ISO099```. ```&ISO11```.it reads monty bytcode files
of any extension.However I prefer if you use ```.m``` extension.

monty can run as either a stack (LIFO) or queue(FIFO).Mode can be switched mid-script. the interpreter 
can handle a varity opcodes, including printing, mathmatical operations, and more all handled opcodes are listed below.

 :runner: Getting Started
----------------------------
- Ubuntu 14.04 LTS - operating system required
- GCC 4.8.4 - Compiler used

:zap: How to install
------------------------
clone these repository to your machine:
```
$ git clone https://github.com/Fraol123/monty.git
```
compile with the following:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
Run monty on file:
```
./monty file.m
```
:wrench: Monty Opcodes
-----------------------------
- push
   - Usage:```push <int>```
   - pushes an element to the stack
   - The parameter ```<int>``` must be an integer
- pall
   - prints value in stack/queus, starting fromm the top.
- pint
   - prints the top value of the stack\queus.
- pop
   - Removes the top element of the stack\queus.
- swap
   -swaps the top two element of stack\queue
- nop
  - does nothing
- add
 - Adds the top two elements of the stack\queue
 - The result is stored in the second element from the top and the top element is poped
- sub
  - subtracts the top two elements of the stack\queue
  - the result is stored in the second element from the top and the top element is poped 
- div
  - divides the top two elements of stack\queue
  - takes zero's error in considaration
- mul
  - multiplies the top two elements of stack\queue
- mod
  - modules of the top two elements of stack\queue

:postbox: opcode preceded by ```#``` are treted as comment

:blue_book: AUTHOR
-------------------
:computer:Fraol Tolera 

:trumpet: Acknowldgement
---------------------------- 

- Holberton School- for giving these challenging project and providing guidlines
- ALX- sensei 
- stack overflow - providing solution as needed

 
 