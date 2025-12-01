#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file ot create
 * @text_content: pointer to the content of the file being created
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;
char *ptr;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
ptr = text_content;
while (*ptr)
{
written = write(fd, ptr, 1);
if (written != 1)
{
close(fd);
return (-1);
}
ptr++;
}
}

if (close(fd) == -1)
return (-1);

return (1);
}
