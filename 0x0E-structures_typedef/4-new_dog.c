#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - calculate lenght of strings
 *
 * @s: source string arg
 *
 * Return: size of string arg char*
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}


/**
 * _strcat - concatenates two strings
 *
 * @dest: 1st arg - destination string
 *
 * @src: 2nd arg - source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_sz = 0, src_sz = 0;

	dest_sz = _strlen(dest);
	src_sz = _strlen(src);
	while (i < src_sz)
	{
		dest[dest_sz] = src[i];
		i++;
		dest_sz++;
	}
	dest[dest_sz] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (null);
	}

	/*allocate memory for string*/
	dog->name = malloc(sizeof(char) * (_strlen(name)) + 1);
	dog->age = age;
	dog->owner = malloc(sizeof(char) * (_strlen(owner)) + 1);
	if (!dog->name || !dog->age)
	{
		free(dog);
		return (null);
	}

	/*copy string dog*/
	dog->name = _strcat(dog->name, name);
	dog->owner = _strcat(dog->owner, owner);

	return (dog);
}
