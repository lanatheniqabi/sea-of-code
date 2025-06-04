## I set up see and the debugger in kali today.  
## here's the workflow:  

1. Write code: `program.c`
2. Compile: `gcc -g program.c -o program`
3. Run: `./program`
4. Debug: `gdb ./program`
   - In GDB: `break main`, `run`, `next`, `print var`, `quit`
5. Fix & repeat

