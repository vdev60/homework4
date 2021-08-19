#include "ft_library.h"
void ft_putnbr_fd(int n, int fd){
    char *str;
    str = ft_itoa(n);
    ft_putstr_fd(str, fd);
}

/*
    int a = 123123;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    int filedesc = open("file.txt", O_CREAT |  O_WRONLY | S_IRUSR | mode);
    ft_putnbr_fd(a, filedesc);
    close(filedesc);
*/