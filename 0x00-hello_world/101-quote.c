#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len;

	len = syscall(SYS_write, STDERR_FILENO, message, 59);
	(void)len;

	return (1);
}
