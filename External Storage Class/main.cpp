//Here, extern is being used to declare count in the second file, where as it has its definition in the first file, main.c. Now, compile these two files as follows

// g++ main.cpp support.cpp
// .\a.exe

#include <stdio.h>
 
int count ;
extern void write_extern();
 
main() {
   count = 5;
   write_extern();
}