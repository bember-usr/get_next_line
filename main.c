#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    int i;
    char *line;

    fd = open("empty.txt", O_RDONLY);
    while ((i = get_next_line(fd, &line)))
    {
        printf("i = %d\t%s\n", i, line);
        free(line);
    }
    printf("i = %d\n", i);
}