/*
** EPITECH PROJECT, 2018
** CPP Pool Day 03
** File description:
** Bouffeur de strings
*/

#if !defined (STRING_H_)
	#define STRING_H_

typedef struct string {
	char *str;
	void (*assign_s)(String *, const String *);
	void (*assign_c)(String *, const char *);
} String;

void StringInit(String *, const char *);
void StringDestroy(String *);

#endif /* !defined (STRING_H_) */
