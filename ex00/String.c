/*
** EPITECH PROJECT, 2018
** CPP Pool Day 03
** File description:
** Sur le coté
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

void StringInit(String *this, const char *s)
{
	this->str = strdup(s);
}

void StringDestroy(String *this)
{
	free(this->str);
	this->str = NULL;
}
