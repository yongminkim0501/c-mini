#include <string.h>
#include "input.h"

bool is_empty(const char *s){
    // 입력을 하지 않았는 지 확인
    return strlen(s) == 0;
}

bool ends_with_newline(const char *s){
    // exit와 같은 명령어 입력을 위한 배열 가장 마지막 줄 \n 에 대한 체크
    size_t len = strlen(s);
    if (len == 0){
        return false;
    }
    return s[len - 1] == '\n';
}

void strip_newline(char *s){
    // 입력 배열 가장 마지막의 \n을 \0으로 변경
    if (ends_with_newline(s)){
        s[strlen(s) - 1] = '\0';
    }
}