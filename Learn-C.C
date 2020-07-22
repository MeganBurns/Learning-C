https://www.learn-c.org/

CONTENTS:
1. Hello, World!
2. Variables and Types
3. Arrays
4. Multidimensional Arrays
5. Conditions
6. Strings
7. For loops
8. While loops
9. Functions
10. Static keyword


/////GUIDE/////
>return statement e.g. return 0; - ends the execution of a function, and returns control to the calling function. (https://docs.microsoft.com/en-us/cpp/c-language/return-statement-c?view=vs-2019)
>"\0" = a value of zero - e.g. the final value in an array of strings

/////FUNCTIONS/////
>printf() = prints to the screen
>printf("\n"); = prints next printf to a new line
>sprintf() = rather than print to console, store output on char buffer specified in sprintf 
>strlen() = returns the length of a string
>strncmp() = compares two strings 
>strncat() = String Concatenation 
>memcpy() = copy one memory location to another location



/////DATATYPES/////
>Integers (int, char, short, long, long long)
>Unsigned Integers (unsigned int, unsigned char, unsigned short, unsigned long, unsigned long long)
>Floating point numbers (float, double)
>Structures

/////FORMAT SPECIFIERS/////
>Used in the printf function to print data which is referred by an object or variable. When a value is stored in a particular variable, 
we cannot print the value stored in the variable directly with out the using format specifiers. We can retrieve the data stored in the 
variables and can print them on to the console screen by using these format specifiers in a printf function. Format specifiers start with 
a percentage(%) symbol and follows a special character to identify the type of the data. 
%d : integer values 
%f : floating values 
%c : character values
%s : string values
%u : address of a variable stored in the memory
%ld : long integer values




/////HELLO WORLD/////
#include <stdio.h>
//the int keyword indicates that the function (main) will return an integer - if integer = 0, program was successful, any other number = fail
int main() {
    printf("Hello World!");
   return 0;
}


/////DEFINING BOOLEAN/////
#define BOOL char 
#define FALSE 0
#define TRUE 1

//OR
#include <stdbool.h>
int main(){
    bool x = false; //(or true)
    if(x){
        printf("x is true.");
    }
    else{
        printf("x is false.");
    }
}


/////DEFINING VARIABLES/////
int foo;
int bar = 1;

int a = 0, b = 1, c = 2, d = 3, e = 4;
a = b - c + d * e;
printf("%d", a);
//^will print 1-2+3*4 = 11

#include <stdio.h>
int main(){
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = a + b + c;

    printf("The sum of a, b, and c is %f.", sum);
}


/////ARRAYS/////
Array = special variable that can hold more than one value under the same variable name, organised with an index.
//define an array of 10 integers
int numbers[10];
//populate the array
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;
numbers[7] = 80;
numbers[8] = 90;
numbers[9] = 100;
//print the 7th number from the array, which has an index of 6 
printf("The 7th number in the array is %d", numbers[6]);

//Find the average with arrays:
#include <stdio.h>

int main() {
  int grades[3];  
  int average;

  grades[0] = 80;
  grades[1] = 85;  
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}


/////MULTIDIMENSIONAL ARRAYS/////
An array of arrays. Data in multidimensional arrays are stored in tabular form - in row major order.

//Multidimensional array declaration:
data_type array_name [size1] [size2] [size3]...[sizeN];

//e.g. a three dimensional integer array:
int foo[1][2][3];

//Multidimensional array size:
The total number of elements that can be stored in a multidimensional array can be caluclated by multiplying the size of all of the 
dimensions. So, the multidimensional array vowels seen below can store (1*5) elements. The elements it stores are a, e, i, o, u.
char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
};

//Two-dimensional arrays:
Essentially a list of one-dimensional arrays. It can be visualised as a table. Every element in the array is identified by an element name
in the form of arrayName[x][y]. 
//e.g.
int foo[3][4];
foo will have 3 rows and 4 columns.  

        COLUMN 0  |  COLUMN 1  |  COLUMN 2  |  COLUMN 3    
      |--------------------------------------------------|
ROW 0 | foo[0][0] |  foo[0][1] |  foo[0][2] |  foo[0][3] |
----- |------------------------|-------------------------|         
ROW 1 | foo[1][0] |  foo[1][1] |  foo[1][2] |  foo[1][3] |
----- |------------------------|-------------------------|   
ROW 2 | foo[2][0] |  foo[2][1] |  foo[2][2] |  foo[2][3] |                  
      | -------------------------------------------------|

//Initialising two-dimensional arrays:
e.g. Each set of nested braces below represents one row. 
int foo[3][4] = {
    {0, 1, 2, 3},   //row 0
    {4, 5, 6, 7},   //row 1
    {8, 9, 10, 11}  //row 2
};

//Accessing two-dimensional array elements:
Elements are accessed by using the row and column indexes. 
e.g.
int value = foo[2][3] = 11
^the third row and fourth column

//find out the average marks of a group of five students for two subjects:
		#include <stdio.h>

	int main() {
		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

        //outputs the rows
		for (i = 0; i < 2; i++) {
			average = 0;
		//outputs the columns	
			for (j = 0; j < 5; j++) {
                //adds them together
				average += grades[i][j];
			}

            //average = average/5.0 - divide by 5 because you're finding the average of 5 students
			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}


/////CONDITIONS/////
Conditional statements
//If statements:
The if statement allows us to check if an expression is true or false, and execute different code according to the result. 
To evaluate whether two variables are equal, the == operator is used.
e.g.
    int target = 10;
      if (target == 10) {
    printf("Target is equal to 10");
    }

//inequality operators:
Less than, greater than
e.g.
    int foo = 1;
    int bar = 2;

    if (foo < bar) {
    printf("foo is smaller than bar.");
   }

    if (foo > bar) {
    printf("foo is greater than bar.");
   }

//else statements:
We can use the else keyword to exectue code when our expression evaluates to false.
e.g.
int foo = 1;
int bar = 2;

if (foo < bar) {
    printf("foo is smaller than bar.");
} else {
    printf("foo is greater than bar.");
}

//if else statements:
Sometimes we will have more than two outcomes to choose from. In these cases, we can "chain" multiple if else statements together.
e.g.
int foo = 1;
int bar = 2;

if (foo < bar) {
    printf("foo is smaller than bar.");
} else if (foo == bar) {
    printf("foo is equal to bar.");
} else {
    printf("foo is greater than bar.");
}

//Logical operators:
Two or more expressions can be evaluated together using logical operators to check if two expressions evaluate to true together, or at 
least one of them. To check if two expressions both evaluate to true, use the AND operator &&. To check if at least one of the expressions 
evaluate to true, use the OR operator ||.

>AND &&
>OR ||
>NOT !

e.g.
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo is smaller than bar AND moo is larger than bar.");
}

if (foo < bar || moo > bar) {
    printf("foo is smaller than bar OR moo is larger than bar.");
}

int target = 9;
if (target != 10) {
    printf("Target is not equal to 10");
}


/////STRINGS/////
Strings in C = arrays of characters. Use pointers to a character array to define strings.
e.g.
char * name = "Jane Smith";
-this method creates a string that can only use for reading. 
//define a string that can be manipulated - define it as a local character array:
char name[] = "Jane Smith";
note - empty array bracket tells the compiler to calculate the size of the array automatically. You can still explicitly state how long the 
array is.
e.g.
char name[11] = "Jane Smith";
note - although "Jane Smith" is ten characters (inlcuding the space in the middle), you need to add one to make 11 because of the 
String Termination, which is a special character of 0 that indicates the end of a string. The end of the string is marked because 
the program does not know the length of the string - only the compiler knows it according to the code. 

//String formatting with printf:
We can use the printf command to format a string together with other strings.
e.g.
char * name = "John Smith";
int age = 27;

/* prints out 'John Smith is 27 years old.' */
printf("%s is %d years old.\n", name, age);

Add a newline (\n) character so that our next printf statement will print in a new line.

//String length:
The function 'strlen' returns the length of the string which has to be passed as an argument.
e.g.
char * name = "Nikhil";
printf("%d\n",strlen(name));

//String comparison:
The function strncmp compares between two strings, returning the number 0 if they are equal, or a different number if they are different.
The arguments are the two strings to be compared, and the maximum comparison length. 
e.g.
char * name = "John";
//arguments = two strings (name, "John") and max comparison length (4)
if (strncmp(name, "John", 4) == 0) {
    printf("Hello, John!\n");
} else {
    printf("You are not John. Go away.\n");
}

//String Concatenation:
The function 'strncat' appends first n characters of src string to the destination string where n is min(n,length(src)); The arguments 
passed are destination string, source string, and n - maximum number of characters to be appended.
e.g.
char dest[20]="Hello";
char src[20]="World";
strncat(dest,src,3);
printf("%s\n",dest);
//prints "HelloWor"
strncat(dest,src,20);
printf("%s\n",dest);
//prints "HelloWorWorld"

//example of string functions:
#include <stdio.h>
#include <string.h>
int main() {
  
  char * first_name = "John";
  char last_name[] = "Doe";
  char name[100];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;
}


/////FOR LOOPS/////
A code block that runs multiple times. Require an iterator value - usually = i. Iterator can run through a
range of elements. e.g. The most obvious form of iterator is a pointer: A pointer can point to elements in 
an array, and can iterate through them using the increment operator (++).

For loops give the following functionality:

>Initialize the iterator variable using an initial value
>Check if the iterator has reached its final value
>Increases the iterator

//Iterate on a block ten times - it will print 0-9 to the console:
int i;
for (i = 0; i < 10; i++) {
    printf("%d\n", i);
}

//Sum all the values of an array:
int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
int i;

for (i = 0; i < 10; i++) {
    sum += array[i];
}

/* sum now contains a[0] + a[1] + ... + a[9] */
printf("Sum of the array is %d\n", sum);

//Calculate multiplication of all items in an array:


/////WHILE LOOPS/////
A while loop continues executing the while block as long as the condition in the while remains true.

//Execute a while loop ten times:
int n = 0;
while (n < 10) {
    n++;
}
-note: beware of infinite loops if a condition is given which always evaluates as true (non-zero):

//Loop directives:
Loop directives are used in conjunction with all loop types in C:
>break
>continue 

//break:
When a break statement is encountered inside a loop, the loop is immediately terminated, even if the while loop never finishes.

e.g.
int n = 0;
while (1) {
    n++;
    if (n == 10) {
        break;
    }
}

//continue:
Instead of forcing termination, it forces the next iteration of the loop to take place, skipping any code in between.
For the for loop, continue statement causes the conditional test and increment portions of the loop to execute. 
For the while and do...while loops, continue statement causes the program control to pass to the conditional tests.

e.g. the continue directive causes the printf command to be skipped, so that only even numbers are printed out:
int n = 0;
while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}

//code example:
If the current number which is about to printed is less than 5, don't print it.
If the current number which is about to printed is greater than 10, don't print it and stop the loop.

#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        if(array[i] < 5){
            //increment so you go to the next element in the array and avoid an infinite loop. 
            i++;
            continue;
        }

        if(array[i] > 10){
            break;
        }

        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}


/////FUNCTIONS/////
A function is a set of statements that take inputs, do some specific computation and produces output.
Functions have two (for lack of a better word) functions:
1. Functions receive either a fixed or variable amount of arguments.
2. Functions can only return one value, or return no value.

Every C program has a function called main() that is called by operating system when a user runs the program.
Functions can return any type except arrays and functions (Can get around this by returning pointer to array or pointer to function).


//Declaring a function:
e.g.

return_type function_name (parameter/argument) list){
    
    body of the function
    return 0;
}

RETURN_TYPE: Is the data type of the value the function returns. Some functions perform the desired operations without returning a value.
In this case, the return_type is the keyword void.

FUNCTION_NAME: This is the actual name of the function. The function name and the parameter list together constitute the function signature.

PARAMETER/ARGUMENT: Parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred 
to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are 
optional; that is, a function may contain no parameters.

FUNCTION BODY: Contains a collection of statements that define what the function does. Including a return statement.

e.g.
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

//Calling functions:
e.g.

/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));
}

int foo(int bar) {
    return bar + 1;
}

//function that doesn't return a value:
Empty parameter list in C mean that the parameter list is not specified and function can be called with any parameters. 
In C, it is not a good idea to declare a function like fun(). To declare a function that can only be called without any parameter, 
we should use “void fun(void)”.
e.g.
void moo(void) {
    /* do something and don't return a value */
}

int main() {
    moo();
    //return; not required but can be included
    return;
}


//Function Arguments:
If a function is to use arguments, it must declare variables that accept the values of the arguments. These variables are called the formal 
parameters of the function.
Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit.

While calling a function, there are two ways in which arguments can be passed to a function −

1. Call by value
This method copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter 
inside the function have no effect on the argument.

2. Call by reference
This method copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual 
argument used in the call. This means that changes made to the parameter affect the argument.

By default, C uses call by value to pass arguments. In general, it means the code within a function cannot alter the arguments used to call 
the function.

In the below example, 10 and 20 are actual parameters. x and y are formal parameters. 

#include <stdio.h> 
  
// An example function that takes two parameters 'x' and 'y' 
// as input and returns max of two input numbers 
int max(int x, int y) 
{ 
    if (x > y) 
      return x; 
    else
      return y; 
} 
  
// main function that doesn't receive any parameter and 
// returns integer. 
int main(void) 
{ 
    int a = 10, b = 20; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(a, b); 
  
    printf("m is %d", m); 
    return 0; 
} 

//functions and pointers:
Parameters are always passed by value in C. For example. in the below code, value of x is not modified using the function fun().

#include <stdio.h> 
void fun(int x) 
{ 
   x = 30; 
} 
  
int main(void) 
{ 
    int x = 20; 
    fun(x); 
    printf("x = %d", x); 
    return 0; 
} 

Output:
x = 20
However, in C, we can use pointers to get the effect of pass by reference. For example, consider the below program. The function fun() 
expects a pointer ptr to an integer (or an address of an integer). It modifies the value at the address ptr. The dereference operator * is 
used to access the value at an address. In the statement ‘*ptr = 30’, value at address ptr is changed to 30. The address operator & is used 
to get the address of a variable of any data type. In the function call statement ‘fun(&x)’, the address of x is passed so that x can be 
modified using its address.

# include <stdio.h> 
void fun(int *ptr) 
{ 
    *ptr = 30; 
} 
   
int main() 
{ 
  int x = 20; 
  fun(&x); 
  printf("x = %d", x); 
   
  return 0; 
} 

Output:
x = 30

//function example:
#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
void print_big(int number){
    if(number > 10){
        printf("%d is big \n", number);
        return;
    }
}


/////STATIC/////
static is a keyword in C. It is used with variables and functions.

//static variables:
Static variables have a property of preserving their value even after they are out of their scope. Hence, static variables preserve their 
previous value in their previous scope and are not initialized again in the new scope.
e.g.
static data_type var_name = var_value; 
OR
static int example = 21;

By default, variables are local to the scope in which they are defined. Variables can be declared as static to increase their scope up to 
the file containing them. As a result, these variables can be accessed anywhere inside a file.

A static int variable remains in memory while the program is running. A normal or auto variable (declared inside a block - ie local variables)
is destroyed when a function call where the variable was declared is over.
For example, we can use static int to count a number of times a function is called, but an auto variable can’t be used for this purpose.
e.g.
#include<stdio.h>
int runner()
{
    //static ensures that the count updates
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}

//static function:
By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file where it was
declared. Therefore, when we want to restrict access to functions, we make them static. Another reason for making functions static can be 
reuse of the same function name in other files.
e.g.
static void fun(void) {
   printf("I am a static function.");
}

//static example:
Below finds the sum of numbers, the static int total is preserved after each printf so that it prints 55, (+45) 100, (+50) 150.
   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }






