//----------------------------------------------------------
//  Name: Matthew Hoare
//  E-mail Address: mrh549@psu.edu
//  Class: CMPSC 121 Section
//  Project # Problem Set 9
//  Due Date: 4/30/14
//  Brief Project Description Check to see if password is good
//----------------------------------------------------------

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

//get password
string getpassword();

//Test password
bool length(string password);
bool chardigit(string password);
bool capletter(string password);
bool twodigits(string password);

//Message for good password or bad
void success();
void fail();

int main()
{
	string password = getpassword();

	if (length(password) && chardigit(password) && capletter(password) && twodigits(password))
		success();
	else
		fail();


	return 0;
}

string getpassword()
{
	string temp;
	cout << "Enter Password: ";
	getline(cin, temp);
	return temp;
}
bool length(string password)
{
	if (password.length() < 7)
		return false;
	else
		return true;
}
bool chardigit(string password)
{
	for (int x = 0; x < password.length(); x++)
	{
		if (!isalpha(password.at(x)) && !isdigit(password.at(x)))
		{
			return false;
		}

	}
	return true;
}
bool capletter(string password)
{
	for (int x = 0; x < password.length(); x++)
	{
		if (isupper(password.at(x)))
			return true;
	}
	return false;
}
bool twodigits(string password)
{
	int num = 0;

	for (int x = 0; x < password.length(); x++)
	{
		if (isdigit(password.at(x)))
		{
			num++;
		}
	}

	if (num >= 2)
		return true;
	else
		return false;

}
void success()
{
	cout << "Password is Good" << endl;
}
void fail()
{
	cout << "Password is not Good" << endl;
}

