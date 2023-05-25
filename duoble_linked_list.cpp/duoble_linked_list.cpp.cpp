newNode->next = current->next;
newNode->prev = current;
if (current->next != NULL)
current->next->prev = newNode;
current->next = newNode;
}