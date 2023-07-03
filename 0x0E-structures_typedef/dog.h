#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog structure
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;
typedef Dog dog_t;
void init_dog(Dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

