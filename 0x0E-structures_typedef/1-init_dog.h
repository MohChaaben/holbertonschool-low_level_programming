#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Define a new type struct dog with the following elements:
 * @d: a structure for a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
