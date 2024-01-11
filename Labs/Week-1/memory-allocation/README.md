# Memory Allocation revision

## Malloc

- Allocates `size` bytes of <u>uninitialized</u> storage.
- Returns a pointer to the allocated memory.

Further details: https://en.cppreference.com/w/c/memory/malloc

## Calloc

- Allocates memory for an array of `nmemb` objects of `size` and <u>initializes all bytes in the allocated storage to zero</u>.
- Returns a pointer to the first byte in the allocated memory block.

Further details: https://en.cppreference.com/w/c/memory/calloc

## Realloc

- Reallocates given area of memory if `ptr` is not NULL.
- It must be previously allocated and not yet freed or else the results are undefined.
- Returns the pointer to the beginning of newly allocated memory.

Further details: https://en.cppreference.com/w/c/memory/realloc

## Free

- Deallocates the previously allocated space.

Further details: https://en.cppreference.com/w/c/memory/free
