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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
