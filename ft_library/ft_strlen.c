#include "ft_library.h"

size_t ft_strlen(const char *s){
size_t i = 0;
  while(s[i]){
    i++;
  } 
  return i;
}
