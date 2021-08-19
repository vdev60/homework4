#include "ft_library.h"

void ft_putstr_fd(char *s, int fd){
        write(fd, s,ft_strlen(s));    
}

/*
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    int filedesc = open("file.txt", O_CREAT |  O_WRONLY | S_IRUSR | mode);
    ft_putstr_fd(s, filedesc);
    close(filedesc);
*/