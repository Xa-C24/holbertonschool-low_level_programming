
	malloc_free

	_malloc` (Memory Allocation): 
		
			The `malloc` function is used in C to dynamically allocate memory during program execution. 
		It is found in the standard C library (`stdlib.h`). 
		Memory allocated by `malloc` remains available until it is explicitly freed by the program using the `free` function.

		
		
		_malloc (Memory Allocation) en C

			The `malloc` function is used in C to dynamically allocate memory during program execution. 
		This allows memory to be allocated when the exact size of memory required is not known at compile time, 
		or when dynamic data structures such as linked lists, stacks and queues are used.

		
		_calloc` in C 
		
			The `calloc` function in C is used to dynamically allocate memory during program execution, just like `malloc`.
		 However, `calloc` automatically initializes the allocated memory to zero,
		  which can be useful for avoiding undefined behaviour due to uninitialized variable.


			_realloc in C

		  he `realloc` function is used in C to resize a dynamically allocated block of memory.
		   It allows you to adjust the size of a block of memory previously allocated with `malloc`, `calloc`, or even a previous call to `realloc`. 
		  The function can be found in the standard C library (`stdlib).


			_Importance of `free`: 
		
		- Memory management: Freeing dynamically allocated memory is crucial to avoid memory leaks.
		 A memory leak occurs when allocated memory is never released, which can deplete available memory 
		 and cause system crashes or slowdowns. 
		
		- Best practice: Always free dynamically allocated memory after use.
