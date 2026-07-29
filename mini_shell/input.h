#ifndef INPUT_H
#define INPUT_H

#include <stdbool.h>

bool is_empty(const char *s);
bool ends_with_newline(const char *s);
void strip_newline(char *s);

#endif