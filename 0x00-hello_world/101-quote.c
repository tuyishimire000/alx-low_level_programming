#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    syscall(SYS_write, STDERR_FILENO, message, len);
    return 1;
}
