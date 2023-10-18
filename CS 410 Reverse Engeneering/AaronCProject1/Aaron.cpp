//Project One 
// Aaron Ciminelli 
// CS-410-R1913 Software Reverse Engineering 23EW1
// September 20 2023


//Aaron Ciminelli (AC**) - Program to manage customer investment service choices
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//AC** Define a vector of integers to represent the service choice for each customer (1 = Brokerage, 2 = Retirement)
vector<int> serviceChoice{ 1, 2, 1, 1, 2 };
//AC** Define strings to represent the names of five customers retreived from .out file 
string name1 = "Bob Jones";
string name2 = "Sarah Davis";
string name3 = "Amy Friendly";
string name4 = "Johnny Smith";
string name5 = "Carol Spears";

//AC** Define integers to store the service choice for each individual customer based on the serviceChoice vector
int num1 = serviceChoice[0];
int num2 = serviceChoice[1];
int num3 = serviceChoice[2];
int num4 = serviceChoice[3];
int num5 = serviceChoice[4];

//AC** Function to change the service choice for a specific customer
vector<int> changeCustomerChoice(vector<int> serviceChoice, int client, int service) {

//AC** Check which client's service choice needs to be updated and update the corresponding variable
	if (client == 1) {
		num1 = service;
	}
	else if (client == 2) {
		num2 = service;
	}
	else if (client == 3) {
		num3 = service;
	}
	else if (client == 4) {
		num4 = service;
	}
	else if (client == 5) {
		num5 = service;
	}
  //AC** If client number does not match any of the known clients, do nothing
	else {
	}

	return serviceChoice; //AC** Return the updated serviceChoice vector

}

//AC** Function to display information about each customer and their respective service choice
void displayInfo() {

	cout << "You chose 1" << endl;
	cout << "  Client's Name    Service Selected (1 = Brokerage, 2 = Retirement)" << endl;
	cout << "1. " << name1 << " selected option " << num1  << endl;
	cout << "2. " << name2 << " selected option " << num2 << endl;
	cout << "3. " << name3 << " selected option " << num3 << endl;
	cout << "4. " << name4 << " selected option " << num4 << endl;
	cout << "5. " << name5 << " selected option " << num5 << endl;

}

//AC** Function to check user's permission and allow them to view or modify customer data
void checkUserPermission() {
	int  option, password;
	int loopMenu = 1; //AC** Variable to control the main menu loop

	cout << "Enter your password:" << endl;
	cin >> password;

//AC** Check if the entered password is correct
	if (password == 123) {
    //AC** Display the main menu options
		while (loopMenu){
		cout << "What would you like to do?" << endl;
		cout << "DISPLAY the client list (enter 1)" << endl;
		cout << "CHANGE a client's choice (enter 2)" << endl; 
		cout << "Exit the program.. (enter 3)" << endl;
		cin >> option;

		if (option == 1) {
			displayInfo(); //AC** Display the customer information
		}
		else if (option == 2) {
			int client, service;
			cout << "You chose 2" << endl;
			cout << "Enter the number of the client that you wish to change" << endl;
			cin >> client;
			cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
			cin >> service;
			changeCustomerChoice(serviceChoice, client, service); //AC** Update the service choice for the specified client
		}
		else if (option == 3) {
			cout << "You chose 3" << endl;
			loopMenu = 0; //AC** Exit the main menu loop
		}
		else if (option > 3){
			loopMenu = 1; //AC** If an invalid option is chosen, continue the main menu loop
		}
		}

	}
	else {
		cout << "Invalid Password. Please try again\n";
		password = '\0'; //AC** Reset the password variable
		checkUserPermission(); //AC** Prompt the user to reenter password 

	}
}


//AC** Main function to start the program
int main() {
	string user;
	cout << "Hello! Welcome to our Investment Company" << endl;
	cout << "Enter your username:" << endl;
	getline(cin, user); //AC** Get the user's username
	checkUserPermission(); //AC** Check the user's permission and display the main menu


}