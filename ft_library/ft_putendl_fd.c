#include "ft_library.h"

void ft_putendl_fd(char *s, int fd){
        ft_putstr_fd(s,fd);
        write(fd, "\n",1);    

}

/*
    char *s = "asgfsdg dhgu dgf  asuhudaghreoi";
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    int filedesc = open("file.txt", O_CREAT |  O_WRONLY | S_IRUSR | mode);
    ft_putendl_fd(s, filedesc);
    close(filedesc);
*/