#ifndef _HEADER_FILE_
#define _HEADER_FILE_

/**
 * struct dog - Dog
 *
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog.
 * Description: Dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 *my_dog - typedef for dog structure.
 */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
