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
} String;

void StringInit(String *, const char *);
void StringDestroy(String *);

#endif /* !defined (STRING_H_) */
