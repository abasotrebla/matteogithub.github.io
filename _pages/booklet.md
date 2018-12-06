# A brief booklet for my C course

##### by Matteo Fraschini



#### Introduction

Dear student, this document is for you. I know that attending the lectures may be sometime hard, sometime boring and even when it is not, there are several other reasons that make it difficult to go back home and study what you have listened.

Here you find the most significant slides that I have shown during the classes, with a summary and a description of what I think it is more important for you, the *take home* messagge.

This is, obviously, an ongoing work and can not replace a book and can not be enought if you do not spent time *playing* with the code. Learning to code is not merely learning the *syntax* of a specific language. It means much more, creativity, logical thinking and determination are extremely important in this context. 



#### Level 0

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



#### Level 1

Now you are ready to use *variables*. Think about *variables* as containers that will store the data you want to use during your program. The easy part is that you can refer to this container (a block of the memory of your computer) with a name, wherever it is. You can choose the name you like, there are only few simple rules you have to respect for the name. However, just try to use a name that can allows to understand what the variable will store. 

In C, before to use a variable you have to *declare* it. The declaration is important because it links your variable with a *type*. When you choose a type, you are defining the dimension of the container and the operations you will be able to perform on it. The dimension may still depend on the architecture of your computer/machine. This is an example of variable declaration:

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

As you can see, the `printf` may be used to print the result of an expression or the content of a variable. You just need to indicate where you want the result to appear using a specific format (`%ld` in  this case, which is for long integer) and report the expression/s or the variable/s after the comma. The character `\n` represents a new line, so that the output maybe read more easly.

Let's go back to declarations and types. There are few basic types that you can use without the need to define any new. The basic types are: `int`, `float`, `double` and `char`. The will have to choose the type depending on the context of the program. From this choice, it will depend both what you can do with your variables and the dimension of the block of memory reserved for your variable.

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



#### Level 2

To further increse your level you certanly need to learn how to use a very important and basic function. This is the `scanf`. The `scanf` is not always easy to use, you will understand later this, however, it represents the first tool you can use to allow an user interacting with your program. In particular, by using the `scanf` you can pass an *external* input to your program, reading the information needed using the keyboard.



