/*#include <utils/linked_list.h>

int main(){
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(90000000,56);
	printf("debug like a pro yes no error task 1 done\n");
	node_t a = genlist();
	printf("debug like a pro yes no error task 2 done\n");
	printf("%d\n", a);
}
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include <unistd.h>
#include <sys/syscall.h>
int main() {int rc;

rc = syscall(SYS_chmod, "/etc/passwd", 0444);

if (rc == -1)
   fprintf(stderr, "chmod failed, errno = %d\n", errno);

}
