#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
    dlistint_t *new_node, *current;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*head)
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        current = *head;
        while (current->next)
            current = current->next;

        current->next = new_node;
        new_node->prev = current;
    }

    return (new_node);
}

size_t print_dlistint(const dlistint_t *head)
{
    size_t count = 0;
    const dlistint_t *current = head;

    while (current)
    {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }

    return (count);
}

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;

    while (head)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
