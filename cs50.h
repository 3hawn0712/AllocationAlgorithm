#ifndef CS50_H
#define CS50_H

#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>

typedef char *string;

char get_char(const char *format, ...) __attribute__((format(printf, 1, 2)));

double get_double(const char *format, ...) __attribute__((format(printf, 1, 2)));

float get_float(const char *format, ...) __attribute__((format(printf, 1, 2)));

int get_int(const char *format, ...) __attribute__((format(printf, 1, 2)));

long get_long(const char *format, ...) __attribute__((format(printf, 1, 2)));

long long get_long_long(const char *format, ...) __attribute__((format(printf, 1, 2)));

string get_string(va_list *args, const char *format, ...) __attribute__((format(printf, 2, 3)));
#define get_string(...) get_string(NULL, __VA_ARGS__)

#endif