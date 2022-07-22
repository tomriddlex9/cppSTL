#include <stdio.h>

int main()
{
    // a void pointer , pointing to NULL
    void *ptr = NULL;
    // if pointer points to NULL , print "NULL" else print address
    // that it points to
    (ptr != NULL) ? printf("%p\n", ptr) : printf("NULL\n");
    // char variable with value
    char c = 'h';
    // assigning location of char variable to void pointer
    // this will be used for storing the location of data only
    // you cannot access the data using the de-referencing operator
    ptr = (char *)&c;
    // character pointer gets the value from void pointer that
    // was holding the address of char variable c
    char *cptr = ptr;
    // printing the address and values
    printf("%p  %c\n", ptr, *cptr);
    printf("%p  %c\n", ptr, *ptr);
}