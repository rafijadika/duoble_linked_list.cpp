cout << "\nEnter your choice (1-6): ";
char ch;
cin >> ch;

switch (ch) {
case'1':
	obj.addNode();
	break;
case'2':
	obj.hapus();
	break;
case'3':
	obj.ascending();
	break;
case'4':
	obj.descending();
	break;
case'5':
	obj.searchData();
	break;
case'6':
	return 0;
default:
	cout << "\ninvalid option" << endl;
	break;
}
		}
		catch (exception e) {
			cout << "Check for the values entered" << endl;
		}
	}
}