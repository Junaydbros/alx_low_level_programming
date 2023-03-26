#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog details
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: void
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* Junaydbros */
#endif
