/*
** EPITECH PROJECT, 2018
** CPP Pool Day 03
** File description:
** Sur le coté
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

static void assign_s(String *, const String *);
static void assign_c(String *, const char *);

void StringInit(String *this, const char *s)
{
	this->str = strdup(s);
	this->assign_s = assign_s;
	this->assign_c = assign_c;
}

void StringDestroy(String *this)
{
	free(this->str);
	this->str = NULL;
}

static void assign_s(String *this, const String *str)
{
	this->assign_c(str->str);
}

static void assign_c(String *this, const char *s)
{
	free(this->str);
	this->str = s;
}
