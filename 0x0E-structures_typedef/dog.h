#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type def for dog
 * @name: first name
 * @age: age
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG.H*/
