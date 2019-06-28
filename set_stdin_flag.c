#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int
main()
{
    if (fcntl(STDIN_FILENO, F_SETFL,
              fcntl(STDIN_FILENO, F_GETFL) & O_NONBLOCK) < 0) {
        perror(NULL);
        return 1;
    }
    return 0;
}
