if (START == NULL || nim <= START->noMhs) {
	if (START != NULL && nim == START->noMhs) {
		cout << "\nDuplicate number not allowed" << endl;
		return;
	}
	newNode->next = START;
	if (START != NULL)
		START->prev = newNode;
	newNode->prev = NULL;
	START = newNode;
	return;
}