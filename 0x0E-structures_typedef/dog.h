#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct fog
* @name: name
* @age: age
* @owner: owner
* Description: This struct is for dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H*/
