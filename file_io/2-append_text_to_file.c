#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the content being added to the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written;
char *ptr;
if (filename == (void *)0)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content != (void *)0)
{
ptr = text_content;
while (*ptr != '\0')
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
{
return (-1);
}
return (1);
}
