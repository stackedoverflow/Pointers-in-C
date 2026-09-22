# Examples

| File | What it covers |
| --- | --- |
| `pointer_basic.c` | Declare an `int *`, point it at a variable, dereference it, and write a new value through it. |
| `pointer_arithematic.c` | Adding or subtracting 1 moves an `int *` by `sizeof(int)` and a `char *` by 1 byte. |
| `pointer_typecasting.c` | Read the same `int` through an `int *` and a narrower pointer view. |
| `pointer_GenericORvoid.c` | A `void *` has no element size, so it is not dereferenced and not used in pointer arithmetic. |
| `pointer_pointerOFpointer.c` | A pointer to an `int *`, read from the variable out to the address of the pointer. |
| `tester_pointer.c` | `const int` and `int const` name a value that the program does not modify. |
