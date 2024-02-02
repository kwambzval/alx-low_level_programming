#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * shash_table_create - create a sorted hash table
 * @size: size of the array of the hash table
 *
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    /* Your code here */
}

/**
 * shash_table_set - add an element to the sorted hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    /* Your code here */
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    /* Your code here */
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    /* Your code here */
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    /* Your code here */
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    /* Your code here */
}

