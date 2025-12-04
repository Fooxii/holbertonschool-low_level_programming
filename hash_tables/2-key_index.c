#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size: size of the hash table
 * Return: the index where the key/value pair should be stored in
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = hash_djb2(key) % size;
/*Note to self - "% size" is used to compress the hash into a valid index*/
/*Ex: hash = 123456, size = 10, index = 123456 % 10 = 6*/
/*It forces the hash value to be compressed into a number within the size*/
return (index);
}
