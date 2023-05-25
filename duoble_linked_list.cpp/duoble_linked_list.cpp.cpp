else {
	cout << "\nRecord in descending order of roll number are: " << endl;
	Node* currentNode = START;
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}
	while (currentNode != NULL) {
		cout << currentNode->noMhs << " " << currentNode->name << endl;
		currentNode = currentNode->prev;
	}
	}
}