0. a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
1. function that initialize a variable of type struct dog
2. function that prints a struct dog
3. Defines a new type dog_t as a new name for the type struct dog.
4. function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
5. function that frees dogs.
