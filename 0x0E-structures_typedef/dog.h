#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains elementys stated
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */

