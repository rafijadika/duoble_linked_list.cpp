void DoubleLinkedList::hapus() {
	if (listEmpty())
		cout << "\nlist is empty" << endl;

	cout << "\nEnter the roll number of the student whose record is to be deleted: ";
	int rollNo;
	cin >> rollNo;
	cout << endl;

	if (DoubleLinkedList::deleteNode(rollNo) == false)
		cout << "Record not found" << endl;
	else
		cout << "Record with roll number " << rollNo << " deleted" << endl;
}