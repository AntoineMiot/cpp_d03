/*
** EPITECH PROJECT, 2018
** CPP Pool Day 03
** File description:
** Sur le coté
*/

#include <stdlib.h>
#include <string.h>
#include "./String.h"

static void assign_s(String *, const String *);
static void assign_c(String *, const char *);
static void append_s(String *, const String *);
static void append_c(String *, const char *);
static char at(String *, size_t);
static void clear(String *);
static int size(String *);
static int compare_s(String *, const String *);
static int compare_c(String *, const char *);
static size_t copy(String *, char *, size_t, size_t);
static const char *c_str(String *);
static int empty(String *);
static int find_s(String *, const String *, size_t);
static int find_c(String *, const char *, size_t);
static void insert_s(String *, size_t, const String *);
static void insert_c(String *, size_t, const char *);
static int to_int(String *);
static String *split_s(String *, char);
static char **split_c(String *, char);
static void aff(String *);
static void join_s(String *, char, String *);
static void join_c(String *, char, const char **);
static String *substr(String *, int, int);

void StringInit(String *this, const char *s)
{
	this->str = strdup(s);
	this->assign_s = assign_s;
	this->assign_c = assign_c;
	this->append_s = append_s;
	this->append_c = append_c;
	this->at = at;
	this->clear = clear;
	this->size = size;
	this->compare_s = compare_s;
	this->compare_c = compare_c;
	this->copy = copy;
	this->c_str = c_str;
	this->empty = empty;
	this->find_s = find_s;
	this->find_c = find_c;
	this->insert_s = insert_s;
	this->insert_c = insert_c;
	this->to_int = to_int;
	this->split_s = split_s;
	this->split_c = split_c;
	this->aff = aff;
	this->join_s = join_s;
	this->join_c = join_c;
	this->substr = substr;
}

void StringDestroy(String *this)
{
	free(this->str);
	this->str = NULL;
}

static void assign_s(String *this, const String *str)
{
	this->assign_c(this, str->str);
}

static void assign_c(String *this, const char *s)
{
	free(this->str);
	this->str = strdup(s);
}

static void append_s(String *this, const String *ap)
{
	this->append_c(this, ap->str);
}

static void append_c(String *this, const char *ap)
{
	char *res;

	res = malloc(strlen(this->str) + strlen(ap) + 1);
	strcpy(res, this->str);
	strcat(res, ap);
	this->assign_c(this, res);
}

static char at(String *this, size_t pos)
{
	if (pos >= strlen(this->str))
		return (-1);
	return (this->str[pos]);
}

static void clear(String *this)
{
	this->assign_c(this, "");
}

static int size(String *this)
{
	if (!this->str)
		return (-1);
	return (strlen(this->str));
}

static int compare_s(String *this, const String *str)
{
	return (this->compare_c(this, str->str));
}

static int compare_c(String *this, const char *str)
{
	return (strcmp(this->str, str));
}

static size_t copy(String *this, char *s, size_t n, size_t pos)
{
	strncpy(s, this->str + pos, n);
	return (strlen(s));
}

static const char *c_str(String *this)
{
	return (this->str);
}

static int empty(String *this)
{
	return (*this->str ? -1 : 1);
}

static int find_s(String *this, const String *str, size_t pos)
{
	return (this->find_c(this, str->str, pos));
}

static int find_c(String *this, const char *str, size_t pos)
{
	const char *needle;

	if (pos > strlen(this->str))
		return (-1);
	needle = strstr(this->str + pos, str);
	return (needle ? needle - this->str : -1);
}

static void insert_s(String *this, size_t pos, const String *str)
{
}

static void insert_c(String *this, size_t pos, const char *str)
{
}

static int to_int(String *this)
{
}

static String *split_s(String *this, char separator)
{
}

static char **split_c(String *this, char separator)
{
}

static void aff(String *this)
{
}

static void join_s(String *this, char delim, String *tab)
{
}

static void join_c(String *this, char delim, const char **tab)
{
}

static String *substr(String *this, int offset, int length)
{
}
