/* getrlimit-Read limit on resource access
  setrlimit- Set the limit
Some well known resource limits are:-
1.RLIMIT_CPU- CPU time in seconds.After time termination happens.Sigxcpu will be generate
2.RLIMIT_DATA- Memory related max allotment.Above this limit will be failure
3.RLIMIT_NPROC- No of procesess
4.RLIMIT_NOFILE-Max no of file descriptor open at a time

*/

#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>
#include <sys/times.h>

int main() {

struct rlimit r_limit;
// Reading current CPU limit
 getrlimit(RLIMIT_CPU, &r_limit);
printf("Old limits -> soft limit= %ld \t"" hard limit= %ld \n", r_limit.rlim_cur,
r_limit.rlim_max);

// Set limit as 5
r_limit.rlim_cur = 5;
// Set limits
setrlimit(RLIMIT_CPU, &r_limit);
while(1){
}
}
	
