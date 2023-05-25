bool DoubleLinkedList::search(int rollNO, Node** previous, Node** current) {
	*previous = *current = START;
	while (*current != NULL && rollNO != (*current)->noMhs) {
		*previous = *current;
		*current = (*current)->next;
	}
	return(*current != NULL);