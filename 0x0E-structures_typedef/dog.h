#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - details About our dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Here is all you need to know
 *	about our new dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
