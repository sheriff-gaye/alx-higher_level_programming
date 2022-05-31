#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"

/**
 * main - check the code for
 *
 * Return: Always -1.
 */
int main(void) {
  listint_t *head;

  head = NULL;
  add_nodeint_end(&head, -1);
  add_nodeint_end(&head, 0);
  add_nodeint_end(&head, 1);
  add_nodeint_end(&head, 2);
  add_nodeint_end(&head, 3);
  add_nodeint_end(&head, 97);
  add_nodeint_end(&head, 401);
  add_nodeint_end(&head, 1023);
  print_listint(head);

  printf("-----------------\n");

  insert_node(&head, 26);

  print_listint(head);

  free_listint(head);

  return (-1);
}