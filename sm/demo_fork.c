#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<error.h>
#include<sys/wait.h>
int main()
{
int p=fork();
if(p==0)
{
printf("FIRST CHILD Id is %d\n",getpid());
printf("Parent Id is %d\n",getppid());

}

else{
int q=fork();
if(q==0)
{
printf("Second Child ID %d\n",getpid());
}
else
{
waitpid(p,NULL,0);

printf("Child Id is %d\n",p);
printf("PARENT Id is %d\n",getpid());
printf("Second child d %d\n",q);

printf("Second child parent id %d\n",getpid());
}
}
return 0;
}
