#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct stAccount
{
	string Number;
	int pinCode;
	string name;
	int phone;
	float balance;
};

stAccount readClient()
{
	stAccount client;

	cout << "Please Enter Client Data?\n\n";
	
	cout << "Enter Name? ";
	getline(cin, client.name);

	cout << "Enter Account Number? ";
	cin >> client.Number;

	cout << "Enter PinCode? ";
	cin >> client.pinCode;
	
	cout << "Enter Phone ";
	cin >> client.phone;

	cout << "Enter Account balance ";
	cin >> client.balance;

	return client;
}

string recordToLine(stAccount client, string delim)
{
	return client.Number + delim + to_string(client.pinCode)
		+ delim + client.name + delim
		+ to_string(client.phone)
		+ delim + to_string(client.balance);
}

int main()
{
	stAccount client = readClient();

	cout << "\n\nClient Record for saving is:\n";
	cout<< recordToLine(client, "#//#") << endl << endl;



	return 0;

}