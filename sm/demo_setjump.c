#include<stdio.h>
#include<setjmp.h>
jmp_buf buf;
void func()
{
    printf("Welcome to JKC\n");
  
    // Jump to the point setup by setjmp
    longjmp(buf, 1);
  
    printf("I m in longjmp\n");
}
int main()
{
    // Setup jump position using buf and return 0
    if (setjmp(buf))
    {
     
        printf("I m in setjmp\n");
        printf("buff is %ld",buf);
        }
    else
    {
        printf("Hello World!!\n");
        func();
    }
    return 0;
}
