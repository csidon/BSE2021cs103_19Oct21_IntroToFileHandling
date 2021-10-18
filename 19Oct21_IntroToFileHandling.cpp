#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // allows you to READ a string stream from a file
using namespace std;


struct Supermarket {
	string itemNum, itemName;
	float itemPrice;

	//constructor
	Supermarket(string itNum = "", string itNa = "", float itP = 0)
	{
		itemNum = itNum;
		itemName = itNa;
		itemPrice = itP;
	}
};

//function prototype

int main()
{
	Supermarket supM[2];
	ofstream supOutfile; //ofstream is the keyword that is used to declare the file handling variable supOutfile. You can call this anything you like, but Outfile shows that it's an out mode file
	ofstream supAppfile; //ofstream is the keyword that is used to declare the file handling variable supOutfile. You can call this anything you like, but Outfile shows that it's an out mode file
	ifstream supInfile; //supInfile is the file handle that belongs to the ifstream 
	fstream supInOutFile; //if you use fstream, it does both input, output, and append

	//outfile.open(path&name, mode) -- syntax to create a new file
	//Go to folder where you are storing this code !important and create an Excel file (csv)
	//Right click newly created Excel file > Properties > Copy the path
	//whatever is between supOutfile.open and supOutfile.close is what happens in the file
	//supOutfile.open("C:/Users/270158235/OneDrive - UP Education/1 CS103/19Oct21_IntroToFileHandling/Supermarket.csv", ios::out);
	//for (int i = 0; i < 2; i++)
	//{
	//	cin.ignore(); //when handling both string and numbers, use cin.ignore to clear the buffer
	//	cout << "Enter the item number [ABC123]:\t";
	//	getline(cin,supM[i].itemNum);
	//	cout << "\nEnter item name:\t\t";
	//	getline(cin, supM[i].itemName);
	//	cout << "\nEnter item price:\t\t";
	//	cin >> supM[i].itemPrice;

	//	//this writes the above input data to the file
	//	supOutfile << supM[i].itemNum << "," << supM[i].itemName << "," << supM[i].itemPrice << "\r"; // carriage return = \r   This brings it down to the next line
	//}
	//supOutfile.close();


	//Now we want to append the file instead of opening it (so that it doesn't write over data)
	supAppfile.open("C:/Users/270158235/OneDrive - UP Education/1 CS103/19Oct21_IntroToFileHandling/Supermarket.csv", ios::app);
	for (int i = 0; i < 2; i++)
	{
		cin.ignore(); //when handling both string and numbers, use cin.ignore to clear the buffer
		cout << "Enter the item number [ABC123]:\t";
		getline(cin, supM[i].itemNum);
		cout << "\nEnter item name:\t\t";
		getline(cin, supM[i].itemName);
		cout << "\nEnter item price:\t\t";
		cin >> supM[i].itemPrice;

		//this writes the above input data to the file
		supAppfile << supM[i].itemNum << "," << supM[i].itemName << "," << supM[i].itemPrice << "\r"; // carriage return = \r   This brings it down to the next line
	}
	supAppfile.close();


}

//### FUNCTIONS ###