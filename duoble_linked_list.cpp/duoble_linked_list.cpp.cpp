Node* current = START;
while (current->next != NULL && nim > current->next->noMhs)
current = current->next;