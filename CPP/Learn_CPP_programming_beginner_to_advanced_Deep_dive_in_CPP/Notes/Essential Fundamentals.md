How coputer works?

I/P -> [ Main memory / CPU (ALU/CU) ] | [ Files / HDD ]-> Output

ALU -> Basic math operators (+ - / * %) and Logic operators (< > = AND OR NOT) 
CU -> Utilize resources for manage the devices like keyboard, mouse.
Files -> Programs (notepad.exe) and data (mytext.txt)
I/P - O/P -> Input buffer | Output buffer

Computer works on binary system (voltages) / low -> 0 | high -> 1

| 0 - 0 | 1 - 1 | 2 - 10 | 3 - 11 | 

Number systems

binary -> 0,1 
octal -> 0 to 7
decimal -> 0 to 9
hexadecimal -> 0 to 9 and A to F

What is a program?

Collection of data and the set of instructions to use that data

NL ->  PL/CI (Integrated circuit) -> ML/CPU

Low level -> Machine Language and Assembly language (communication with hardware)

High level -> C, C++, Java, Python, etc. (similar to natural language)

Compiler vs interpreter

Compiler/Interpreter:
1. Check errors -> Compiler can't run with errors, Interpreter can launch the code before the error. 
2. Convert into machine code -> Compiler convert into ML, Interpreter need always translation line by line.
3. Execution -> Compiler app don't need a dependency, Interpreter always need the translate.

Operating system

Start at main memory and communicate with the CPU (Kernel). Also execute programs, so Windows for example have access to programs and this programs start with the operating system in the memory. Not be independent run with the OS because program do syscalls for communicate with services and process. 

Programming paradigm

Basic -> Write a program in lines (actually spaghetti code)

---------------
----------------------
----
Procedural -> Write programs by sets of process 

function1(){

}
function2(){

}

Modular -> Write code reusable and easy to scale

structure info {
	data1;
	data2;
	data3;
}

function1(info){

}

function2(info){

}
main(){
	structure info i
	function1(i);
	function2(i);
}
OOP -> Advanced programming with object and classes

class info{
	data1;
	data2;
	data3;
	function(){
	}
	function2(){
	}
}

main(){
	info i;
	i.function();
	i.function2();
}

Algorithm

Set of instructions which have start and end point.
Pseudocode

Flowcharts

start/end
input/output
process
condition
flow

Steps for program development and execution

1. Editing
2. Compiling
3. Linking Library
4. Loading
5. Execution


Stack -> Store variables and local data that are needed during the program execution
Heap -> Long lists, images. You don't know how much data. Flexible storing or dynamic memory allocation. Free space in memory. 
Code section -> Machine code section (loading).

Workflow is 

code -> compiler -> execute
hello.cpp -> g++ hello.cpp -o hello -> ./hello
g++ hello.cpp -o hello && ./hello






