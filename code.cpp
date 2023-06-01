#include<iostream>
#include<string>
using namespace std;
int dfa = 1;
void state1(char a)
{
	if (a == 'd') {
		dfa = 2;
	}
	else if (a == 'e') {
		dfa = 4;
	}
	else if (a == 'f') {
		dfa = 6;
	}
	else {
		dfa = -1;
	}
}
void state2(char a)
{
	if (a == 'd') {
		dfa = 3;
	}
	else {
		dfa = -1;
	}
}
void state3(char a)
{
	if (a == 'd') {
		dfa = 8;
	}
	else if (a == 'e') {
		dfa = 3;
	}
	else {
		dfa = -1;
	}
}
void state4(char a)
{
	if (a == 'e') {
		dfa = 5;
	}
	else {
		dfa = -1;
	}
}
void state5(char a)
{
	if (a == 'd') {
		dfa = 8;
	}
	else if (a == 'f') {
		dfa = 5;
	}
	else {
		dfa = -1;
	}
}
void state6(char a)
{
if (a == 'f') {
		dfa = 7;
	}
	else {
		dfa = -1;
	}
}
void state7(char a)
{
	if (a == 'd') {
		dfa = 78;
	}
	else {
		dfa = -1;
	}
}
void state78(char a)
{
	if (a == 'd') {
		dfa = 78;
	}
	else if (a == 'f') {
		dfa = 9;
	}
	else {
		dfa = -1;
	}
}
void state8(char a)
{
	if (a == 'f') {
		dfa = 9;
	}
	else {
		dfa = -1;
	}
}
void state9(char a)
{
	if (a == 'f') {
		dfa = 10;
	}
	else {
		dfa = -1;
	}
}
void state10(char a)
{
	if (a == 'd') {
		dfa = -1;
	}
	else {
		dfa = -1;
	}
}
void dead(char c)
{
	if (c == 'd') {
		dfa = -1;
	}
	else {
		dfa = -1;
	}
}
int Accepted(string str)
{
	int l = str.length();
	for (int i = 0; i < l; i++) {
		if (dfa == 1)
			state1(str[i]);

		else if (dfa == 2)
			state2(str[i]);

		else if (dfa == 3)
			state3(str[i]);

		else if (dfa == 4)
			state4(str[i]);

		else if (dfa == 5)
			state5(str[i]);

		else if (dfa == 6)
			state6(str[i]);

		else if (dfa == 7)
			state7(str[i]);

		else if (dfa == 78)
			state78(str[i]);

		else if (dfa == 8)
			state8(str[i]);

		else if (dfa == 9)
			state9(str[i]);

		else if (dfa == 10)
			state10(str[i]);

		else if (dfa == -1)
			dead(str[i]);
	}

	if (dfa == 10)
		return 1;
	else
		return 0;
}

int main()
{
	string str;
	cout << "\n\t\tThis Code will only accept the strings which will comply with REGEX: (dde*+eef*+ffd*)dff" << endl;
	while (str != "E") {
		cout << "\nEnter E to exit \nEnter the string: ";
		cin >> str;
		if (Accepted(str))
			cout << "---->ACCEPTED<----";
		else
			cout << "---->NOT ACCEPTED<----";
		dfa = 1;
		cout << endl << endl;
	}
	return 0;
}
