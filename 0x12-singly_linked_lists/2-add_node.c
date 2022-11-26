#include "lists.h"

#include <stdlib.h>

/**
 * _strlen - gets the lenght of the string
 * @s: string
 * Return: lenght of the string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}

/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to the current position in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	i = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

