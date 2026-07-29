#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

bool check_input(char *arr){
    if (arr[strlen(arr)-1] == '\n'){
        return true;
    }
    return false;
}

bool check_input_zero(char *arr){
    if (strlen(arr) == 0){
        return true;
    }
    return false;
}

int start(char *arr, int capacity){
    while(1){
        printf("MyShell>");
        fflush(stdout);
        if (fgets(arr, capacity, stdin) == NULL){
            break;
        }
        if (check_input_zero(arr)){
            continue;
        }
        
        if (check_input(arr)){
                arr[strlen(arr) - 1] = '\0';
            }
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