#ifndef __DOG_H__
#define __DOG_H__
#include <stdio.h>

/**
 * struct dog - defines new data type struct dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 */
struct dog
{

	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
