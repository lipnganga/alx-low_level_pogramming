#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes the wagido
 * @name: name of the dog
 * @age: age of dog
 * @owner: person who is the master of the dog
 */

typedef struct dog
{
		char *name;
		float age;
		char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
