#ifndef DOG_H
#define DOG_H
/**
 * struct dog - has elements about a dog
 * @name: Dog name.
 * @age: Age of dog.
 * @owner: The person who owns it.
 *
 * The struct will store information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
