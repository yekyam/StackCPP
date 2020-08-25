# StackCPP
A stack template in CPPP

stack_create() takes in a size and returns a pointer to the stack. 
  It's size + 2 because the first 2 elements of the array has the size and element count.
stack_push() takes in the stack pointer and a value, will not add value if array is filled.
stack_pop() takes in the stack pointer, clears top value.
stack_get() takes in the stack pointer and returns top value.
stack_delete() deletes the array. 
