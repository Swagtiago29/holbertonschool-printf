<h1  align="center"> Welcome To Our Printf Project! </h1>
<p>   This repository houses our journey into creating a custom printf function in C, designed according to Holberton School's standards. Our goal is to replicate the functionality of the standard printf while focusing on clarity, efficiency, and adherence to best coding practices. </p>

<h2>Description</h2>


  
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
  
<h2 align="center"> Return Value </h2>

<p>  This function returns an int equivalent to the numbers of characters printed. The function may return -1 when an Error ocurrs.

Example: this code `_printf("Example return.");` would print and return : `Example return. Return: 15`

Error Example: this code `_printf("%");` would return -1 </p>

File Description 
Flag characters que implementamos
How to use it
flowchart
examples of use
contributors
important concepts

