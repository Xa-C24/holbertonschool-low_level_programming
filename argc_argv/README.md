# holbertonschool-low_level_programming

	
	ARGC, ARGV, and Unused Variables
	
	argc and argv are two parameters used to handle and control programs, especially in relation to user input.

	argc stands for "arguments count". It counts every argument provided in the command line, including the program itself,
 and thus represents the size of the argv array.

	argv stands for "arguments vector". It's an array of strings where each element represents an argument passed to the program.
The array includes a terminating NULL pointer, making its size equivalent to argc. 
The indices of argv start from 0, with argv[0] typically being the name or path of the program itself, and argv[argc] being NULL.