#include <stdlib.h>
#include "dog.h"
/**
 * int_dog - intitialize a variable of type struct dog
 * @d: pointer to struct dog for initialization
 * @name: name to be initialize
 * @age: age intialized
 * @owner: pointer to dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
