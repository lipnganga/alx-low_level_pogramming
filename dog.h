#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes the wagido
 * @name: name of the dog
 * @age: age of dog
 * @owner: person who is the master of the dog
 */

struct dog
{
		char *name;
		float age;
		char *owner;
};
/**
 * typedef dog_t - defines a new name for struct dog
 */
typedef struct dog dog_t;



