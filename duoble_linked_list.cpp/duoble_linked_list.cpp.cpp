void DoubleLinkedList::searchData() {
	if (listEmpty() == true)
		cout << "\nlist is empty" << endl;

	Node* prev, * curr;
	prev = curr = NULL;

	cout << "\nEnter the roll number of the student whose record you want search: ";
	int num;
	cin >> num;

	if (DoubleLinkedList::search(num, &prev, &curr) == false)
		cout << "\nRecord not found" << endl;
	else {
		cout << "\nRecord found" << endl;
		cout << "\nRoll number: " << curr->noMhs << endl;
		cout << "\nName: " << curr->name << endl;

	}
}