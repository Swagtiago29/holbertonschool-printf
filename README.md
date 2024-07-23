<h1  align="center"> Welcome To Our Printf Project! </h1>
<p>   This repository houses our journey into creating a custom printf function in C, designed according to Holberton School's standards. Our goal is to replicate the functionality of the standard printf while focusing on clarity, efficiency, and adherence to best coding practices. </p>

<h2 allign="center">PrintF Description</h2>
<p>The _printf() function processes a variable number of arguments. It takes a string parameter named "format" that defines how additional arguments are formatted and displayed. This format string can include special characters such as '\n' (new line), '\b' (backspace), and '\t' (tab). It also uses conversion control characters starting with '%' to specify how each argument contributes to the final output message.</p>

  
<h2  align="center">What We're Working With</h2>  

- Editors: We only where able to use vi, vim, or emacs to write your code.
- Compiler: We compiled on Ubuntu 20.04 LTS using gcc with some strict flags (-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format).
- File Etiquette: Every file should end with a neat newline.
- Style Standards: We follow the Betty style guidelines using betty-style.pl and betty-doc.pl.
- Coding Principles: We tried to avoid global variables and keep each file tidy with no more than 5 functions.
- Testing Setup: We've got a handy main.c for testing, but remember not to push your version—it might differ from ours.

<h2  align="center">Files Description</h2>

- 'main.h': Header file that contains function prototypes and necessary includes.
- 'main.c': File that contains some of the test cases for the "_printf" function.
- 'aux_func.h': File that contains necessary funtions that '_printf' may call upon on usage.
- '_printf.c': Leading file that contains the logic behind the function.

<h2  align="center">Flow Chart</h2>
<p align="center">
  <img src="https://github.com/user-attachments/assets/9d779fdc-e665-415f-8ac8-33d5c219859c" alt="Diagrama sin título drawio">
</p>

<h3> Return Value </h3>

<p>  This function returns an int equivalent to the numbers of characters printed. The function may return -1 when an Error ocurrs.

Example: this code `_printf("Example return.");` would print and return : `Example return. Return: 15`

Error Example: this code `_printf("%");` would return -1 </p>

<h3> Flag Characters Implemented </h3>

| Flag character | Usage |
| ----------- | ----------- |
| c | print a character |
| s | print a string |
| % | print '%' |
| d | print an int |
| i | print an int |
<h2  align="center">Examples of Use</h2>

<p>
  Here are some aplication examples:
  
`_printf("Let's try to printf a simple sentence.\n");`  output: Let's try to printf a simple sentence.

`_printf("Character:[%c]\n", 'H');`  output: Character [H]

`_printf("String:[%s]\n", "I am a string !");`  output: I am a String 

`_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');`  output: Loading ... 99 Please Wait

`_printf("%d\n", -1024);`  output: -1024
</p>


<h3> Contributors </h3>
<p>This project was done by Santiago Ramos and Bruno Salle from Holbeton Uruguay cohort 24, thank you for reading. </p>
<img src="https://ih1.redbubble.net/image.649622329.8563/bg,f8f8f8-flat,750x,075,f-pad,750x1000,f8f8f8.jpg" width="80" height="100">
