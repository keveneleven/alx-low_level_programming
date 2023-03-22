#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: NAme of dog
 * @age: Age of dog
 * @owner: Owner name
 *
 * Return:struct of new dog
 * if fails returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, d_name, d_owner;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(age) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (d_name = 0; name[d_name]; d_name++)
		;
	for (d_owner = 0; owner[d_owner]; d_owner++)
		;

	ptr_dog->name = malloc(d_name + 1);
	ptr_dog->owner = malloc(d_owner + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < d_name; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	for (i = 0; i < d_owner; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	ptr_dog->age = age;

	return (ptr_dog);
}
