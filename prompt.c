#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * realloc - Reallocates a memory block using malloc and free.
 * Return: If new_size == old_size - ptr.
 */
int main(void)
{
char *buffer = NULL, *copy_buffer = NULL;
ssize_t num_read
size_t n = 0;
char *token;
char *delim = " \n";
int num_tokens = 0, i = 0;
char **argv;



printf(" $");
getline(&buffer, &n, stdin);
printf(">>>>> %s\n", buffer);
/**************************/
/* to copy the user typed allocating enogh space for it */
copy_buffer = malloc(sizeof(char) * num_read);
/* copy the contents of buffer to copy_buffer */
strcpy(copy_buffer, buffer)
/* get the number of tokens to be created */
token = strtok(buffer, delim);
while (token != NULL)
{
	num_tokens++;
	token = strtok(NULL, delim);
}
num_tokens++;

argv = malloc(sizeof(char *) * num_tokens)
/* get the tokens and save them as arguments in argv */
token = strtok(copy_buffer, delim);
	while (token != NULL)
{
		/* allocate space for each token */
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		/* for debbuging purpose */
		printf(">>>>> %s\n", argv[i]);
		i++;
		  token = strtok(NULL, delim);
	}
argv[i] = NULL;
printf(">>>>> %s\n", buffer);
/***************************/
}
