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
 * _strcpy - copy string
 *
 * @dest: destination string arg
 *
 * @src: source string arg
 *
 * Return: destination string
 */


char *_strcpy(char *dest, char *src)
{
	int size = 0, j = 0;

	while (src[size] != '\0')
		size++;
	for (j = 0; j < size; j++)
		dest[j] = src[j];
	dest[size] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name != null && owner != null)
	{
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
		if (!dog->name || !dog->owner)
		{
			free(dog->name);
			free(dog->owner);
			free(dog);
			return (null);
		}

		/*copy string dog*/
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
	}
	return (dog);
}
