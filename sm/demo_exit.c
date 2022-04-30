#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<error.h>
#include<sys/wait.h>
#include<stdlib.h>
void ss()
{
printf("Hello World!!!\n");

}
int main()
{
int c=1;
printf("Sapna\n");

if(atexit(ss)!=0)
{
printf("error\n");
}

while(1)
{
printf("%d\n",c);
if(c>10)
{_Exit(0);}
c++;
}

//_exit(0);
printf("Hi World!!!\n");
printf("Sapna\n");

return 0;
}
