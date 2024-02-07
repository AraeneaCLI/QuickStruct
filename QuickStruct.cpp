// QuickStruct.cpp : Defines the entry point for the application.
//

#include "QuikStruct.h"

using namespace std;

int main()
{
	int val=0,inval=0;

	//Header-Start//

	cout << "Quick Struct - Data Structure App  by AraeneaCLI" << endl;
	cout << endl;
	cout << "Repo: " << "https://github.com/AraeneaCLI" << endl;
	cout << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;

	//Header-End//

	while (true) {
		//Menu-Start//

		cout << "Choose Data Structure" << endl;
		cout << endl;
		cout << "------------------------------------------------" << endl;
		cout << endl;

		cout << "1. Graph" << endl;
		cout << "2. Linked List" << endl;
		cout << "3. Tree" << endl;
		cout << "4. Graph" << endl;
		cout << "0. Return" << endl;

		//Menu-End//

		//User Input//

		cout << endl;
		cout << "------------------------------------------------" << endl;
		cout << endl;

		cout << "Input Choice :- " ;
		cin >> val;

		//Switch Statements//
		
		switch (val)
		{
		case 0:
			break;

		case 1:
			cout << "Operations" << endl;
			cout << endl;
			cout << "------------------------------------------------" << endl;
			cout << endl;

			cout << "1. Create" << endl;
			cout << "2. Display" << endl;

			cout << endl;
			cout << "------------------------------------------------" << endl;
			cout << endl;

			cout << "Input Choice :- ";
			cin >> inval;

			switch (inval)
			{
			case 1:
				creategraph();

			case 2:
				break;
			}
		}
	}
	return 0;
}
