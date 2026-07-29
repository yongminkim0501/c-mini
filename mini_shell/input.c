#include <string.h>
#include "input.h"

bool is_empty(const char *s){
    return strlen(s) == 0;
}

bool ends_with_newline(const char *s){
    size_t len = strlen(s);
    if (len == 0){
        return false;
    }
    return s[len - 1] == '\n';
}

void strip_newline(char *s){
    if (ends_with_newline(s)){
        s[strlen(s) - 1] = '\0';
    }
}