#include "hash_tables.h"

/**
* key_index - function that gives you the index of a key.
* @key: the key
* @size: size of the array of the hash table
* Return: adress at which key/value would be stored
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;
	return (hash);
}
