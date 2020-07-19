https://www.learn-c.org/

/////GUIDE/////
>return statement e.g. return 0; - ends the execution of a function, and returns control to the calling function. (https://docs.microsoft.com/en-us/cpp/c-language/return-statement-c?view=vs-2019)

/////FUNCTIONS/////
>printf = prints to the screen



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












