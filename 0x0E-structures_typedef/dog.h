#ifndef DOG_H
#define DOG_H

#define null 0

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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG.H*/
