#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - define the dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: Name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
