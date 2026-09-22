# Pointers-in-C
AYNTK about Pointers and its utilisation in C. 

## Compile and run

Each `.c` file has its own `main`. Compile one file at a time:

```bash
gcc pointer_basic.c -o pointer_basic && ./pointer_basic
gcc pointer_arithematic.c -o pointer_arithematic && ./pointer_arithematic
```

`pointer_basic.c` stores an `int`, points at it, prints the value and address, then changes the value through the pointer. `pointer_arithematic.c` shows that `p + 1` on an `int *` moves the address by `sizeof(int)` bytes.
