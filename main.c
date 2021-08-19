#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdbool.h>
#include "ft_library/ft_library.h"

void test_ft_memset(){
    char s[12] = "123456789";
    char s1[12] = "123456789";

    ft_memset(s, 65, 4);
    memset(s1, 65, 4);
    printf("Testing *ft_memset* ----> ");
    if( !(ft_memcmp(&s,&s1,ft_strlen(s))) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_bzero(){
    int arr[12] = {1,2,3,5};
    int arr1[12] = {1,2,3,5};

    ft_bzero(arr, 4);
    bzero(arr1, 4);

    printf("Testing *ft_bzero* ----> ");
    if( !(ft_memcmp(&arr,&arr1,10)) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_memcpy(){
    char str[12] = "How are you?";
    char str1[12];
    char str2[12];


    ft_memcpy(str1, str, 4);
    memcpy(str2, str, 4);

    printf("Testing *ft_memcpy* ----> ");
    if( !(ft_memcmp(&str1,&str2,4)) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}


void test_ft_memccpy(){
    char str[12] = "How are you?";
    char str1[12];
    char str2[12];


    ft_memccpy(str1, str, 'e',10);
    memccpy(str2, str, 'e',10);


    printf("Testing *ft_memccpy* ----> ");
    if( !(ft_memcmp(&str1,&str2,7)) ){      //compare only until  the specified symbol becouse of after that we have random values
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_memmove(){
    char str[12] = "How are you?";
    char str1[12];
    char str2[12];


    ft_memmove(str1, str, 6);
    memmove(str2, str, 6);


    printf("Testing *ft_memove* ----> ");
    if( !(ft_memcmp(&str1,&str2,6)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_memchr(){
    char *str = "some string";
    void * res1;
    void * res2;

    res1 = ft_memchr(str,'e',10);
    res2 = memchr(str,'e',10);

    printf("Testing *ft_memchr* ----> ");
    if( res1 == res2 ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_memcmp(){
    int arr[6] = {1,2,3,4};
    int arr1[6] = {1,2,3,4};
    int res1;
    int res2;

    res1 = ft_memcmp(arr,arr1,12);
    res2 = memcmp(arr,arr1,12);

    printf("Testing *ft_memcmp* ----> ");
    if( res1 == res2 ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }


}

void test_ft_strlen(){
    char *str[2] = {"Hello world!", "Hello \nworld!"};
    bool result = true;
    
    for (size_t i = 0; i < 2; i++)
    {
        if( ft_strlen(str[i]) != strlen(str[i]) ){
            result = false;
        }

    }

    printf("Testing *ft_strlen* ----> ");
    if( result ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
    
}

void test_ft_strdub(){
    char *s = "Hello!";
    char *s_dup;

    s_dup = ft_strdup(s);

    printf("Testing *ft_strdup* ----> ");
    if( !(ft_strcmp(s, s_dup)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }


}

void test_ft_strcpy(){
    char *s = "Hello!";
    char *s_copy = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);

    ft_strcpy(s_copy, s);

    printf("Testing *ft_strcpy* ----> ");
    if( !(ft_strcmp(s, s_copy)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(s_copy);

}

void test_ft_strncpy(){
    char *s = "Hello world!";
    int len = 5;
    char *s_copy = (char *)malloc(len * sizeof(char) + 1);
    char *s_copy1 = (char *)malloc(len * sizeof(char) + 1);

    ft_strncpy(s_copy, s, len);
    strncpy(s_copy1, s, len);


    printf("Testing *ft_strncpy* ----> ");
    if( !(ft_strcmp(s_copy, s_copy1)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }


    
}

void test_ft_strcat(){
    char str1[20] = "Hello";
    char str2[20] = "Hello";
    char *word = "world!";

    ft_strcat(str1, word);
    strcat(str2, word);


    printf("Testing *ft_strcat* ----> ");
    if( !(ft_strcmp(str1, str2)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_strncat(){
    char str1[40] = "PHRASE - ";
    char str2[40] = "PHRASE - ";

    char *s = "The most important ...";
    

    ft_strncat(str1, s, 5);
    ft_strncat(str2, s, 5);

    printf("Testing *ft_strncat* ----> ");
    if( !(ft_strcmp(str1, str2)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}



void test_ft_strlcat(){
    char s[20] = "library";
    char s1[20] = "library";

    char *word = "fo123";
    ft_strlcat(s, word, 15);
    strlcat(s1, word,15);



    printf("Testing *ft_strlcat* ----> ");
    if( !(ft_strcmp(s, s1)) ){      
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}


void test_ft_strchr(){
    char *str = "Some data";
    char *res1;
    char *res2;

    res1 = strchr(str, 'e');
    res2 = ft_strchr(str, 'e');

    printf("Testing *ft_strchr* ----> ");
    if(res1 == res2){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_strrchr(){
    char *str = "Some daeta";
    char *res1;
    char *res2;

    res1 = strchr(str, 'e');
    res2 = ft_strchr(str, 'e');

    printf("Testing *ft_strrchr* ----> ");
    if(res1 == res2){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_strstr(){
    char * str = "Some data in the app";
    char * search_str = "the";
    char *res1;
    char *res2;

    res1 = strstr(str, search_str);
    res2 = ft_strstr(str, search_str);

    printf("Testing *ft_strstr* ----> ");
    if(res1 == res2){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_strnstr(){
    char * str = "Some data in the app, the app";
    char * search_str = "the";
    char *res1;
    char *res2;

    res1 = strnstr(str, search_str, 20);
    res2 = ft_strnstr(str, search_str, 20);

    printf("Testing *ft_strnstr* ----> ");
    if(res1 == res2){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}


void test_ft_strcmp(){
    char * str = "String 1";
    char * str1 = "String 2";


    printf("Testing *ft_strcmp* ----> ");
    if( ft_strcmp(str, str1) == strcmp(str, str1) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}
 
void test_ft_strncmp(){
    char * str = "String 1";
    char * str1 = "String 2";


    printf("Testing *ft_strncmp* ----> ");
    if( ft_strncmp(str, str1, 5) == strncmp(str, str1,5) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_atoi(){
    char *arr[5] = {"-1234","dasd","123sd","534.01", "2147483647"};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {
        if( ft_atoi(arr[i]) != atoi(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_atoi* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_isalpha(){
    char arr[5] = {'A', 'z','Z','6','h'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_isalpha(arr[i]) != isalpha(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_isalpha* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_isdigit(){
    char arr[5] = {'5', '9','0','!','h'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_isdigit(arr[i]) != isdigit(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_isdigit* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_isalnum(){
    char arr[5] = {'5', '!','b','A','h'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_isalnum(arr[i]) != isalnum(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_isalnum* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_isascii(){
    char arr[5] = {'\n', '!','b','5','~'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_isascii(arr[i]) != isascii(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_isascii* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}
 

void test_ft_isprint(){
    char arr[5] = {'\n', '!','b','5','~'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {
        if( ft_isprint(arr[i]) != isprint(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_isprint* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}


void test_ft_toupper(){
    char arr[5] = {'A', 'c','b','5','~'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_toupper(arr[i]) != toupper(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_toupper* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}


void test_ft_tolower(){
    char arr[5] = {'A', 'c','b','5','~'};
    bool status = true;
    for (size_t i = 0; i < 5; i++)
    {

        if( ft_tolower(arr[i]) != tolower(arr[i]))
        {
            status = false;
            break;
        }
        
    }
    
    printf("Testing *ft_tolower* ----> ");
    if(status){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_memalloc(){
    char *str = ft_memalloc(10);
    char *expected_str = "hello";

    ft_strcpy(str, expected_str);
    printf("Testing *ft_memalloc* ----> ");
    if( !(ft_memcmp(str,expected_str, ft_strlen(expected_str))) ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(str);

}

void test_ft_memdel(){
    char *s = "Hello world!";
    char *str = ft_memalloc(sizeof(char) * 20);

    ft_strcpy(str,s);
    ft_memdel((void *)(&str));
    printf("Testing *ft_memdel* ----> ");
    if( str == NULL ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(str);


}

void test_ft_strnew(){
    char *str = ft_strnew(5);
    char *expected_str = "\0\0\0\0\0";
    bool status = true;

    for (size_t i = 0; i < 6; i++)
    {
        if(str[i] != expected_str[i]){
            status = false;
            break;
        }
    }
    

    printf("Testing *ft_strnew* ----> ");
    if( status ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(str);

}


void test_ft_strdel(){
    char *str = ft_strnew(5);
    char *name = "Pavel";
    ft_strcpy(str,name);
    ft_strdel(&str);

    printf("Testing *ft_strdel* ----> ");
    if( str == NULL){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_strclr(){
    char *str = ft_strnew(5);
    ft_strcpy(str,"hello");
    ft_strclr(str);
    char *expected_str = "\0\0\0\0\0";
    

    printf("Testing *ft_strclr* ----> ");
    if( !(ft_memcmp(str, expected_str, 5))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    } 
    free(str);
}

//function for ft_striter
void f_striter_toupper(char *c){
    *c = ft_toupper(*c);
}

void test_ft_striter(){

    char * expected_str = "ABCDFGH";
    char *str = ft_strnew(ft_strlen(expected_str)+1);
    ft_strcpy(str,"abcdfgh");

    ft_striter(str, f_striter_toupper);

    printf("Testing *ft_striter* ----> ");
    if( !(ft_strcmp(str, expected_str))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
    free(str);
}

//function for ft_striteri
void f_striteri_toupper(unsigned int i, char *s){
    if (i % 2 == 0)
        *s = toupper(*s);
}

void test_ft_striteri(){
    char * expected_str = "AbCdFgH";
    char *str = ft_strnew(ft_strlen(expected_str)+1);

    ft_strcpy(str,"abcdfgh");
    ft_striteri(str, f_striteri_toupper);

    printf("Testing *ft_striter* ----> ");
    if( !(ft_strcmp(str, expected_str))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(str);
}

//function for ft_strmap 

char f_strmap_toupper(char c){
    return toupper(c);
}

void test_ft_strmap(){
    char * expected_str = "ABCDFGH";
    char *str = "abcdfgh";
    char *new_str = ft_strmap(str, f_strmap_toupper);

    printf("Testing *ft_strmap* ----> ");
    if( !(ft_strcmp(new_str, expected_str))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
    free(new_str);
}


//function for ft_strmapi 

char f_strmapi_toupper(unsigned int i,char c){
    if (i % 3 == 0)
        return toupper(c);
    else
        return c;
}

void test_ft_strmapi(){
    char * expected_str = "AbcDfgH";
    char *str = "abcdfgh";
    char *new_str = ft_strmapi(str, f_strmapi_toupper);

    printf("Testing *ft_strmapi* ----> ");
    if( !(ft_strcmp(new_str, expected_str))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
    free(new_str);
}

void test_ft_strequ(){
    char *str1 = "Tet string";
    char *str2 = "Tet string";

    printf("Testing *ft_strequ* ----> ");
    if( ft_strequ(str1, str2) == 1) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}

void test_ft_strnequ(){
    char *str1 = "Tet string ttt";
    char *str2 = "Tet string kkk";

    printf("Testing *ft_strnequ* ----> ");
    if( ft_strnequ(str1, str2,8) == 1) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_strsub(){
    char *str1 = "this is Aree text";
    char *expected_str = "Aree";
    char *new_str = ft_strsub(str1, 65,4);    

    printf("Testing *ft_strsub* ----> ");
    if( !(ft_strcmp(new_str, expected_str)) ) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(new_str);
}


void test_ft_strjoin(){
    char *s1 = "Hello";
    char *s2 = "world!";
    char *expected_str = "Helloworld!";

    char *str = ft_strjoin(s1,s2);

    printf("Testing *ft_strjoin* ----> ");
    if( !(ft_strcmp(str, expected_str)) ) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    free(str);
}

void test_ft_strtrim(){
    char *s = "  \t\t  Hello world!  \n \n";
    char *expected_str = "Hello world!";
    char *str = ft_strtrim(s);

    printf("Testing *ft_strtrim* ----> ");
    if( !(ft_strcmp(str, expected_str)) ) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

void test_ft_strsplit(){
    char *s = "-Hello---World---Split--Function";
    char *expected_arr[4] = {"Hello", "World", "Split", "Function"};
    char **arr;
    bool result = true;
    arr = ft_strsplit(s, '-');

    for (size_t i = 0; i < 5; i++)
    {   
        if(ft_strcmp(expected_arr[i],arr[i])){
            result = false;
        }       
    }

    for (size_t i = 0; i < 5; i++)
    {   
        free(arr[i]);
    }
    free(arr);

    printf("Testing *ft_strsplit* ----> ");
    if(result) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
    
}

void test_ft_itoa(){
    int arr[5] = {-1234, 56, 2147483647, -123.0, 0.12};
    char *arr_str[5] = {"-1234", "56","2147483647", "-123", "0"};
    bool result = true;

    for (size_t i = 0; i < 5; i++)
    {   
        
        char * converted_str = ft_itoa(arr[i]);

        if( ft_strcmp(arr_str[i],converted_str))
        {
            result = false;
        }
        free(converted_str);

    }

    printf("Testing *ft_itoa* ----> ");
    if(result) {
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

}   

// functioin for lsdelone

void f_del(void *v, size_t n){
    ft_memdel(&v);
}

void test_ft_lstnew(){
    char *str = "Hello, World!";
    char *expected_str = "Hello";
    
    t_list *t;
    t = ft_lstnew(str, 5);
    printf("Testing *ft_lstnew* ----> ");
    if(!(ft_memcmp(t ->content, expected_str,5))){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    ft_lstdelone(&t, f_del);
    
}


void test_ft_lstdelone(){
    char *str = "Hello, World!";
    char *expected_str = "Hello";
    
    t_list *t;
    t = ft_lstnew(str, 5);
    ft_lstdelone(&t, f_del);

    printf("Testing *ft_lstdelone* ----> ");
    if(t == NULL){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }


}

void test_ft_lstdel(){
    char *str = "Hell World";
    
    t_list *t;
    t_list *t1;

    t = ft_lstnew(str, 4);
    t1 = ft_lstnew(str, 4);

    ft_lstadd(&t, t1);

    ft_lstdel(&t, f_del);

    printf("Testing *ft_lstdel* ----> ");
    if(t == NULL ){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }


}


void test_ft_lstadd(){
    char *str = "Hell World";
    
    t_list *t;
    t_list *t1;
    t_list *t2;
    t_list *t3;

    t = ft_lstnew(str, 4);
    t1 = ft_lstnew(str, 4);
    t2 = ft_lstnew(str, 4);
    t3 = ft_lstnew(str, 4);

    ft_lstadd(&t, t1);
    ft_lstadd(&t1, t2);
    ft_lstadd(&t2, t3);


    int i = 0;
    t_list *current;
    current = t;
    while (current)
    {
        current = current->next;
        i++;
    }
    
    ft_lstdel(&t, f_del);

    
    printf("Testing *ft_lstadd* ----> ");
    if(i == 4){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }
}

//function for ft_lstiter
void f_lstiter(t_list *t){
    char * str1 = "Hello";
    ft_strcat(t->content , str1);
}

void test_ft_lstiter(){
    t_list *list1;
    t_list *list2;
    bool result = true;
    char * str = "Test string";
    char * str1 = "Test string";
    char * expected_str = "Test Hello";
    list1 = ft_lstnew(str,5);
    list2 = ft_lstnew(str1,5);
    ft_lstadd(&list1, list2);


    ft_lstiter(list1, f_lstiter);

    t_list *current;
    current = list1;
    while (current)
    {
        if(ft_strncmp(current->content, expected_str,5)){
            result = false;
            break;
        }
        current = current->next;
    }

    printf("Testing *ft_lstiter* ----> ");
    if(result){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    ft_lstdel(&list1, f_del);
    
} 

//function for ft_lstmap
t_list * f_lstmap(t_list *t){
    t_list * new = t;
    char *str = "R";
    ft_strcat(new->content, str);
    return new;    
}

void test_ft_map(){
    t_list *t;
    char * str = "list t";
    t_list *t1;
    char * str1 = "list t1";
    t_list *t2;
    char * str2 = "list t2";
    t_list *current;
    t_list * new;


    t = ft_lstnew(str, 7);
    t1 = ft_lstnew(str1, 7);
    t2 = ft_lstnew(str2, 7);


    ft_lstadd(&t, t1);
    ft_lstadd(&t1, t2);
    
    current = t;
    int j = 0;
    while (current)
    {
        current = current->next;
        j++;
    }

    new = ft_lstmap(t, f_lstmap);

    current = new;
    int i = 0;
    while (current)
    {
        current = current->next;
        i++;
    }

    printf("Testing *ft_lstmap* ----> ");
    if(i == j){
        printf("Ok!");
    }else{
        printf("Test is fail!");
    }

    ft_lstdel(&new, f_del);
    ft_lstdel(&t, f_del);
} 


void test_put_functions(){
    ft_putchar('A');
    printf("\n");
    ft_putstr("Hello!");
    printf("\n");
    ft_putendl("Hello!");
    ft_putnbr(12345);
    printf("\n");
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH; ;

    int filedesc = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC , mode);
    ft_putchar_fd('A', filedesc);
    ft_putstr_fd("Hello world!", filedesc);
    ft_putendl_fd("Hello world!", filedesc);
    ft_putnbr_fd(43534, filedesc);
    close(filedesc);




}

int main(){
    int counter = 0;
    int number_tests = 58;
    test_ft_memset();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_bzero();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memcpy();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memccpy();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memmove();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memchr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memcmp();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strlen();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strdub();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strcpy();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strncpy();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strcat();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strncat();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strlcat();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strchr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strrchr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strstr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strnstr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strcmp();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strncmp();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_atoi();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isalpha();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isdigit();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isdigit();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isalnum();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isascii();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_isprint();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_toupper();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_tolower();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memalloc();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_memdel(); 
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strnew(); 
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strdel();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strclr();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_striter();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_striteri();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strmap();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strmapi();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strequ();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strnequ();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strsub();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strjoin();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strtrim();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_strsplit();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_itoa();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_lstnew();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_lstdelone();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_lstdel();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_lstadd();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_lstiter();
    printf(" %d/%d\n", ++counter, number_tests);
    test_ft_map();
    printf(" %d/%d\n", ++counter, number_tests);
    printf("Testing *put functions* ----> ");
    printf(" %d - %d\n", ++counter, number_tests);
    test_put_functions();

    return 0;
}


