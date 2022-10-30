#ifndef _DOG_
#define _DOG_
/**
 * struct dog - dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
