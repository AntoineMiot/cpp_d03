/*
** EPITECH PROJECT, 2018
** CPP Pool Day 03
** File description:
** Bouffeur de strings
*/

#if !defined (STRING_H_)
	#define STRING_H_

	#include <stdlib.h>

	#define MIN(a, b) ((a) < (b) ? (a) : (b))
	#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct string {
	char *str;
	void (*assign_s)(struct string *, const struct string *);
	void (*assign_c)(struct string *, const char *);
	void (*append_s)(struct string *, const struct string *);
	void (*append_c)(struct string *, const char *);
	char (*at)(struct string *, size_t);
	void (*clear)(struct string *);
	int (*size)(struct string *);
	int (*compare_s)(struct string *, const struct string *);
	int (*compare_c)(struct string *, const char *);
	size_t (*copy)(struct string *, char *, size_t, size_t);
	const char *(*c_str)(struct string *);
	int (*empty)(struct string *);
	int (*find_s)(struct string *, const struct string *, size_t);
	int (*find_c)(struct string *, const char *, size_t);
	void (*insert_s)(struct string *, size_t, const struct string *);
	void (*insert_c)(struct string *, size_t, const char *);
	int (*to_int)(struct string *);
	struct string *(*split_s)(struct string *, char);
	char **(*split_c)(struct string *, char);
	void (*aff)(struct string *);
	void (*join_s)(struct string *, char, struct string *);
	void (*join_c)(struct string *, char, const char **);
	struct string *(*substr)(struct string *, int, int);
} String;

void StringInit(String *, const char *);
void StringDestroy(String *);

#endif /* !defined (STRING_H_) */
