```c
#include <stdio.h>          // 1. Tells C to include the "standard I/O" library

int main() {                // 2. This is the starting point of the program

    int i;                  // 3. We're creating a variable 'i' for counting

    for(i = 0; i < 10; i++) // 4. Loop: Do the next step 10 times
    {
        puts("Hello, world!\n");  // 5. Print "Hello, world!" (with a new line)
    }

    return 0;               // 6. Say “Program ended successfully” to the OS
}
```
