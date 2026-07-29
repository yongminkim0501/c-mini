#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

typedef struct{
    char *argv[MAX_ARGS];
    int argc;
} InputToken;

int start(char *arr, int capacity){
    while (1){
        printf("MyShell>");
        fflush(stdout);

        if (fgets(arr, capacity, stdin) == NULL){
            break;
        }
        if (is_empty(arr)){
            continue;
        }

        strip_newline(arr);

        if (strcmp(arr, "exit") == 0){
            break;
        }

        printf("입력 명령어 : %s\n", arr);
    }
    return 0;
}


int main(){
    int capacity = 256;
    char *arr = (char *)malloc(capacity * sizeof(char));
    if (arr == NULL){
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }
    start(arr, capacity);
    free(arr);
    return 0;
}