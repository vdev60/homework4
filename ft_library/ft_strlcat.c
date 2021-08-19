#include "ft_library.h"
size_t ft_strlcat(char *dst, const char *src, size_t size){
    size_t dest_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

    if (dst == NULL || src == NULL){
        return 0;
    }

    if( dest_len >= size){
        return src_len + size;
    }else{
        
        size_t i = dest_len;
        size_t j = 0;
        size--;
        while (i < size && src[j] != '\0')
        {
            dst[i] = src[j];
            j++;
            i++;
        }
        dst[i] = '\0';
    }


    return dest_len + src_len;
}