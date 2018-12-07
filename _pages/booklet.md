# A brief booklet for my C course

##### by Matteo Fraschini



### Introduction

Dear student, this document is for you. I know that attending the lectures may be sometime hard, sometime boring and even when it is not, there are several other reasons that make it difficult to go back home and study what you have listened.

Here you find the most significant concepts that I have discussed during the classes, with a summary and a description of what I think it is more important for you, the *take home* messagge. At the following link https://matteogithub.github.io/teaching/ you find all the slides (in PDF and md format) and the *.c* file of the scripts included.

This is, obviously, an ongoing work and can not replace a book and can not be enought if you do not spent time *playing* with the code. Learning to code is not merely learning the *syntax* of a specific language. It means much more, creativity, logical thinking and determination are extremely important in this context. 



### Level 0: to start

Probably, right now, your level is **0**. It means that, as for most of your colleagues, you have never coded before. This is not a problem. Indeed, this booklet is for people like you. There are not prerequisites for this course. The number 0 is very important, you will read about this number again and again in this booklet. Your level will change, will increase, adding more competencies, the offset from the initial level will change. Just rember this when we will talk about *arrays*. You will understand that starting from 0 may be relevant!

All you need to start is to setup a *development enviroment*. There are several solutions for this task, choose the one you like more. As a student you can probably apply for a free licence of **cLion**: https://www.jetbrains.com/shop/eform/students. Another good solution is to use **Atom**, which however may need so mure tuning on the settings.

Now that your system is ready to work just try a very simple program. All you need is to open a new file, save it as .c and assign a name. Copy and paste the code you find below in your editor.

```c
//My first program
#include <stdio.h>

int main() {
  printf("Hello world");
  return 0;
}
```

Now you need to compile and run the program. This program should work correctly. You should not have any error or warning. What does this mean? This mean that you should see a *terminal* window pop-up and the sentence "*Hello world*" appear. If this happened, well, that's great. You have wrote your first program. 

Before to go on with something more complex and interesting, just try to understand what you have just written in your file. I am quite confident that it is very important to understand the structure of a C program. This is especially easy to understand now, when the progam is short. 

The line `//My first program`is a comment. This is just ignored by the compiler. However, using comments into your script is really useful. You should add more comments you can. It will be of great help when you (or others) will open your file days later.

The line `#include <stdio.h>` includes an external library to your program. A library allows you to use a set of functionalities that you do not need to re-implement by yourself. In this specific case the `stdio.h` (standard input and output) library gives you the possibility to use the `printf` function. When it will be necessary, I will show you other interesting libraries that you can easely include in your code.

Every C program has a main function. This function is called `main`. Your program will start from here, always from here. You will learn more about functions later. All you need to know right now is that this function will contain the instructions (but not only) that your program will perform and that this function (in this case) will return an integer (see the `int` just before the name of the function). Your `main` function has a name, has a `int` value that is expected to return and has a *body*. The body is delimited by the braces `{}`. 

The last instruction of the function is `return 0;`. This is the value your function in returning. If you omit to include this instruction your program will work as well, but you will discover later that this is not an aesthetic point.



### Level 1: variables

Now you are ready to use *variables*. Think about *variables* as containers that will store the data you want to use during your program. The easy part is that you can refer to this container (a block of the memory of your computer) with a name, wherever it is. You can choose the name you like, there are only few simple rules you have to respect for the name. However, just try to use a name that allows to understand what the variable will store. 

In C, before to use a variable you have to *declare* it. The declaration is important because it links your variable with a *type*. When you choose a type, you are defining the dimension of the container and the operations you will be able to perform on this variable. The dimension may still depend on the architecture of your computer/machine. This is an example of a variable declaration:

```c
int number;
```

With this instruction you are declaring a variable named `number` as an integer. What happens is that a block of memory will be reserved for this variable and that you can access this block of memory simply using its name. How is this block long? Probably 4 byte, but just test it yourself:

```C
#include <stdio.h>
int main() {
  int number;

  printf("\nAn integer need %ld byte",sizeof(number));
  printf("\nAn integer need %ld byte",sizeof(int));
}
```

As you can see, the `printf` may be used to print the result of an expression or the content of a variable. You just need to indicate where you want the result to appear using a specific format (`%ld` in  this case, which is for long integer) and report the expression/s or the variable/s after the comma. The character `\n` represents a new line, so that the output in the terminal may be read more easly.

Let's go back to declarations and types. There are few basic types that you can use without the need to define any new (as you will learn to do later). The basic types are: `int`, `float`, `double` and `char`. You will have to choose the type of a variable depending on the context of the program. From this choice, it will depend both what you can do with your variable and the dimension of the block of memory reserved for this variable.

To interact with your variables you may need to use the aritmetic operators (`+`, `-`, `* ` and `/`) to build some very simple expressions and to use the `=` symbol to assign a value to a variable as shown below:

```C
#include <stdio.h>
int main() {
  int number;
  long int num_byte;

  num_byte = sizeof(int);
  printf("\nAn integer need %ld byte",num_byte);
}
```

The variable `num_byte` is declared and successively its value will be initialised with the result of the expression `sizeof(int)`. As a consequence, the block of memory that you call `num_byte` (which is 4 byte long) will store the (binary) representation of the corresponding number (4, in this case).

It is really very important to do not confuse the symbol `=` with the symbol `==`. The first is intended to assign something to a variable, the second is intended to compare variables or expressions. If you use `=` when you wanted to use `==` you can not get an error and therefore your program will work but not as you would expect!



### Level 2: input and output

To further increse your level, you certanly need to learn how to use a very important and basic function. This is the `scanf`. The `scanf` is not always easy to use, you will understand this later, however, it represents the first tool you can use to allow an user interacting with your program. In particular, by using the `scanf` you can pass an *external* input to your program, reading the information needed using the keyboard. Here a simple example to show you how to use it:

```c
#include <stdio.h>
int main() {
  int base, height;

  printf("Insert the base: ");
  scanf("%d", &base);
  printf("Insert the height: ");
  scanf("%d", &height);
  printf("The area is: %d\n",base * height);
}
```

This very simple program takes as input two integers from the keyboard (base and height) and compute the area of a rectangle. The `scanf` is in some way similar to the `printf` since you still have to define the format (`%d` in this case as it is a decimal integer value). Note that you need to put the symbol `&` before the variable name. This symbol allows to refer to the *address* of the variable. This is important because you want to change the content of the variable and since all arguments in C are passed to functions *by value* you need to pass the address of a variable if you want the function to change the content and not to work on a copy of the variable. We will go back to this point later in more details.



### Level 3: flow control statements

You can extend your program adding *flow control statements* which allows to select what actions to take on the basis of specific conditions. The more common *flow control statement* is the **if** statement which represents the most simple form of the *branching*. It takes and evaluate an expression and if the expression is true then the instruction (or block of instructions) gets executed otherwise the instruction (or block of instructions) is skipped. You can combine with the **else** statement to create an alternative branch in the case the condition is false. Remember that a block is defined by using the `{}`, and this is very important if you want to specify a set of instructions, otherwise your program will execute only the first instruction that follows the expression to be tested. See this simple program to evaluate if a number is even or odd:

```c
#include <stdio.h>
int main() {
  int n;

  printf("Type a positive integer: ");
  scanf("%d",&n);  
  if(n%2 == 0) 
  	printf("\n%d is even\n",n);
  else 
  	printf("\n%d is odd\n",n);
}
```

It is important to keep in mind that in C any **non-zero** values is interpreted as **true** (**false** if it is **zero**). *Relational* and *logical* operators may be used to build more complex expressions, see this example:

```c
#include <stdio.h> 
int main() {
   int year;

   printf("Insert a year (i.e., 2018): ");
   scanf("%d",&year);
   if ((year%4 == 0 && year%100 != 0) || year%400 == 0)
      printf("\n%d is a leap year\n", year);
   else printf("\n%d is not a leap year\n", year);
}
```

Another commonly used *flow control statement* is the `switch-case`. This statement allows to select a specific block of instructions based on the value (`int` or `char`) assumed by a variable or by an expression tested for equality against a list of constant values. See the following example:

```c
#include <stdio.h>
int main() {
  int n;
  printf("Type a positive integer: ");
  scanf("%d",&n);

  switch (n % 2)
  {
    case 0:
    	printf("\nThe number %d is even\n",n);
    	break;
    case 1:
      printf("\nThe number %d is odd\n",n);
    	break;
  }
}
```

Note that the expression `n % 2`, where `%` is called modulus operator, returns the remainder when `n` is divided by 2. 



### Level 4: loop statements

If you want to build even more powerful program, more clear and concise scripts, all you need is a *loop statement*. When you need to execute an instruction (or a block of instructions) several time you have to define a loop. The basic rule in this case is: *never write the same instruction twice*. The loop statement you will use more frequently is the **for**. In its more simple form, a `for` loop will look like this: `for(i=0;i<n;i++)` followed by an instruction or a block of instructions (in this case you need to define a block using `{}`). As you may have noticed this statement contains three different fields (separated by a two `;`). In the first field, the variable `i`, that needs to be declared somewhere, represents the variable that control the loop. The instruction `i=0` will be executed only the first time and allows to initialize this variable. Keep in mind the initializing is very important, and that a wrong assigniment may strongly affect your program even if you do not get any error from the compiler. The second field contains a conditional expression (`i<n`) that will be evaluated **before** to execute the instruction or the block. This is the reason why a `for` loop (as well as a `while` loop) may be never executed. If the expression is false the instrucion (or the block) will be skipped. The third field (`i++`), an increment of the control variable will be executed, this happens after all the instructions contained in the loop have been executed. The instruction `i++` is just another way to write `i=i+1`. When you use this compact form, you may need, in some specific case, to pay attention on the difference between `i++` and `++i`. This is not the case of a `for` loop, when the increment of `i` will be done after all the other instructions, but if the increment is inside an expression you may observe a different behaviour between the two different approaches. Try to assign to a variable the result of the increment and see what happens in the two different cases (i..e, `n=i++;` and `n=++i;`). Another potential problem that you have to consider when you design your loop is to avoid the definition of an *infinite loop*. This is the case when the conditional expression inside the loop is always true. 

Now see this very simple example on the use of a `for` loop:

```c
#include <stdio.h>
int main() {
  int i,n,num,sum=0;
  float mean;

  printf("How many integer you want to add? ");
  scanf("%d",&n);
  for(i=1;i<=n;++i) {
    printf("\nInteger #%d: ",i);
    scanf("%d",&num);
    sum+=num;
  }
  mean=(float)sum/n;
  printf("\nThe mean is equal to: %f\n",mean);
}
```

In this simple example you have seen few new things. In particular, the sum of the numbers is expressed in compact form (`+=`) derived by combining two different operators. The instruction `sum+=num;` is eqauls to `sum=sum+num;`. Although, the first expression is more compact and in any case more commonly used, you need to pay attention since it makes less clear that the variable `sum` is also contained in the right side of the expression, and therefore it is very important to initialize it before to use it. The other novelty is due to the use of the *cast* (`(float)sum`). Using this operator your are changing the type of the variable `sum`. This is important in this case beacuse, if you don't use it, the result of `sum` divided by `n` wil be and integer (as both are integers) and it is not exactly what you would expect. Just try to remove the cast and see what the result looks like.

As previously mentioned there is at least another very useful loop statement in C, the `while` loop. Most of the time you will experience that you can easly use these two different loops in a interchangeably way. My preference is to use the `for` when I have a priori knowledge on the number of iterations. One of the more evident differences is that after the keyword `while`, inside the `()` you only have to define the conditional expression. There is not formal initialisation of any variable to control the loop and there is not a formal increment/decrement of this variable. This does not mean that you may just ignore this variable. Probably, all you need to do is to perform these steps in a different way. See the following example which is equivalent to the one seen before in the case of the `for` loop:

```C
#include <stdio.h>
int main() {
  int i=1,n,num,sum=0;
  float mean;

  printf("How many integer you want to add? ");
  scanf("%d",&n);
  while(i<=n) {
    printf("\nInteger #%d: ",i);
    scanf("%d",&num);
    sum+=num;
    ++i;
  }
  mean=(float)sum/n;
  printf("\nThe mean is equal to: %f\n",mean);
}
```

The two program are equivalent. You may, in general, use a `for` or a `while` indifferently. 

Althought it is less frequently used, the `do-while` loop may be not completely ignored. The only difference with the `while` is that the `do-while` allows to execute the instruction (or a block) at least one time. We will use this loop later in some exercise when necessary.



### Level 5: arrays

Now things will start to be more interesting. Arrays are very powerful tool. If you need to manage a set of homogenous variables (all of the same type) you may not need to declare them separately. As for every other variable, an array is first declared: `int v[100];`. This declaration define a monodimensional array, named `v`  where each element has the same name and the same type `int`. Between `[]` you have defined its dimension. This means that 100 blocks of memory of the same dimension (4 byte) will be reserved for your variable `v`. It is very important to remeber that these blocks are physically adjacent. Therefore, if you know the address of the first element, you can easly access to all the other elements just moving to the next block. To select the element you want just use an index as follows: `v[5]` (which represents the element of index 5). Remember that the first element of an array has index `zero` (i.e., `v[0]` is your first element). As a consequence, if your array has 100 elements, the last one has index equals to 99 (i.e., `v[99]` is your last element). Pay extra attention to do not try to access elements outside the range (`0`-`N-1` if N is the dimension of your array)! Your compilar may not give you any error, but this is a very dangerous situation since you have not any control on the content of the next memory content. Also try to avoid using fixed number for the dimension. It is preferable to use a `#define N 100` that can be more easly changed later if you need to increase the size of your array. 

See this very simple example on the usage of an array:

```c
#include <stdio.h>
#define NGRADE 10
int main() {
  int i,n,grade[NGRADE],sum=0;
  float mean;

  printf("How many grades you want to insert? ");
  scanf("%d",&n);
  for(i=0;i<n;++i) {
    printf("\nInsert grade #%d: ",i+1);
    scanf("%d",&grade[i]);
    sum+=grade[i];
    }
  mean=(float)sum/n;
  printf("\nThe mean is eqaul to: %f\n",mean);
}

```

