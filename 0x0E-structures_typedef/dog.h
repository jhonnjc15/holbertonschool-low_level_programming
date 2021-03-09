#ifndef DOG_H
#define DOG_H
/**
 * struct dog - My dog characteristics
 * @name: Its name
 * @age: Its age
 * @owner: its owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
