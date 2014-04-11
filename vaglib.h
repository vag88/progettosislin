#include <stdint.h>

#include <linux/unistd.h>


extern long syscall(uint64_t n, uint64_t arg1, uint64_t arg2, uint64_t arg3,
		    uint64_t arg4, uint64_t arg5, uint64_t arg6);

int sys_write(int fd, const void *buf, int count)
{
	return syscall(__NR_write, (uint64_t)fd, (uint64_t)buf, (uint64_t)count,
		       0, 0, 0);
}

int sys_exit(int exitcode)
{
	return syscall(__NR_exit, (uint64_t)exitcode, 0, 0,
		       0, 0, 0);
}

int sys_fork()
{
	return syscall(__NR_fork,0, 0, 0,
		       0, 0, 0);
}

int sys_getpid()
{
	return syscall(__NR_getpid,0, 0, 0,
		       0, 0, 0);
}

int sys_kill()
{
	return syscall(__NR_kill,0, 0, 0,
		       0, 0, 0);
}
