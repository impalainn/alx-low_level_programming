#include "dog.h"

/**
 * init_dog - function to initialize avariable of type struct dog
 * @d: pointer to struct dog
 * @name: string with dog's name
 * @age: float with dog's age
 * @owner: string with owners' name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == 0)
		return;
	d->name = name;
	d->age= age;
	d->owner = owner;
}
