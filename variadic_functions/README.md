variadic_functions

This Directory is made up of files which contains lines of codes that illustrates and demonstrates concepts of,

-stdarg.h -Variadic Functions -Const Keyword - stdarg

It also teaches;

-What are variadic functions --How to use va_start, va_arg and va_end macros --Why and how to use the const type qualifier.


va_start:

	The va_start macro is generally translated as "start the list of variadic arguments". 
This macro is used in the C language to access the variadic arguments of a function, i.e.
arguments whose number and types are not specified in advance.

In a function taking variadic arguments, the va_start macro initializes a variable of type "va_list", 
which is used to browse the additional arguments passed to the function after the fixed arguments.


va_arg:

	The va_arg macro is used in the C language to access the variadic arguments of a function after initialising 
a variable of type va_list with the va_start macro. It is used to retrieve arguments one by one by specifying their type.


va_end:

	The va_end macro is used in the C language to clean up a list of variadic arguments after you have finished
 processing them with va_start and va_arg. 
It is essential to avoid memory leaks or other problems related to managing the internal resources of the argument list.


va_list:

	C'est un type de données utilisé pour déclarer une variable qui va pointer sur les arguments variables.
	Le concept de va_list et les macros associées (va_start, va_arg, va_end) en C permettent de créer 
	des fonctions qui acceptent un nombre variable d'arguments. 
	


sum_them_all:

	Le but de ce code est de créer une fonction sum_them_all qui additionne plusieurs nombres entiers passés en argument.
	La fonction sum_them_all prend un nombre n d'arguments de type entier et retourne leur somme.



