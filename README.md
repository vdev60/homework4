# Homework 4

RULES:\
1)All heap allocated memory space must be properly freed when necessary\
2)Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.\
3)You must submit a Makefile which will compile your source files to a static library mylib.a.\
4)Your Makefile must compile your work with the flags -Wall, -Wextra and -Werror\
5)Your Makefile must at least contain the rules $(NAME), all, clean, fclean ,re in the order that you will see fit\
6)Only the following libc functions are allowed : malloc(3), free(3) and write(2), and their usage is restricted. For example - it's not allowed to use strlen() function but you are free to use ft\_strlen (your own one function). Make sure you have implemented all the necessary tests in your functions.\
7)A string must ALWAYS end with a ’\0’, even if it is not included in the function’s description, unless explicitly stated otherwise.\
8)Your mylib.h file can contain macros and typedefs if needed.\
9)It is forbidden to use global variables



Functions:

1part: (std functions with description in man)\
memset • bzero • memcpy • memccpy • memmove • memchr • memcmp \
strlen • strdup • strcpy • strncpy • strcat • strncat • strlcat • strchr • strrchr • strstr • strnstr • strcmp • strncmp • atoi  \
isalpha• isdigit • isalnum • isascii • isprint • toupper • tolower\
