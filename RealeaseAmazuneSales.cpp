// cW.cpp : Defines the entry point for the console application.

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int *var, *var2, *var3;
int xinput, xinput2, xinput3, r = 0, xray = 100;
string linearr[2000], line, xinput4;
double total, total2, totals;
string inid, inpid, inname, inlastname, inemail, incountry, inaddress, inproduct, inpurchase, indate;
struct data {
	string id, name, lastname, email, country, address, product, purchase, date, pul;
	string year, month, day;
	int iyear, imonth, iday;
	float ipurchase;
}dat[2000];

void add();
void for2018();
void for2019();
void menu();
void navigation();
void remove() {
	char xinputc[30];
	cout << "                                                   + Remove info +" << endl << endl;
	cout << "Please input name of a customer to see his orders: "; cin >> xinputc;
	for (int i = 1; i < 2000; i++)
	{
		if (dat[i].name == xinputc) {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
			cout << "Do you want to remove this card? (0 - NO | 1 - YES)";  cin >> xinput3;
			if (xinput3 == 0)
			{
				navigation();
			}
			if (xinput3 == 1)
			{


				fstream myfile;
				myfile.open("XRAYDB.txt");
				dat[i].id.clear();
				dat[i].name.clear();
				dat[i].lastname.clear();
				dat[i].email.clear();
				dat[i].country.clear();
				dat[i].address.clear();
				dat[i].product.clear();
				dat[i].purchase.clear();
				dat[i].date.clear(); 
				myfile.close();
				myfile.open("XRAYDB.txt", ios::trunc);
				myfile << " ";
				myfile.close();
				cout << "Successfully!!!" << endl;
				navigation();
			}
		}
	}
}
void search() {
	cout << "                                                     Search Menu                                        Amazune Co." << endl;
	cout << "You can search by >>>                                                                      Warning! Case Sensitive! " << endl;
	cout << "(1) Name" << endl;
	cout << "(2) Month" << endl;
	cout << "(3) Year" << endl;
	cout << "(4) DD:MM:YYYY" << endl;
	cout << "(5) ID" << endl;
	cout << "------------" << endl;
	cout << "(0) Main Menu" << endl;
	cin >> xinput3;

	switch (xinput3) {
	case 1: cout << "Please input name of a customer to see his orders: "; cin >> xinput4;
		for (int i = 1; i < r; i++)
		{
			if (xinput4 == dat[i].name || xinput4 == dat[i].year) {
				cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
				cout << endl;
				navigation();
			}

		}cout << "\nNothing more..." << endl; navigation(); break;
	case 2: cout << "Please input Month (mm): "; cin >> xinput4;
		for (int i = 1; i < 2000; i++) {
			if (dat[i].month == xinput4) {
				cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
				cout << endl;
			}
		}cout << "\nNothing more..." << endl; navigation(); break;
	case 3: cout << "Please input Year (yyyy): "; cin >> xinput4;
		for (int i = 1; i < 2000; i++) {
			if (dat[i].year == xinput4) {
				cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
				cout << endl;
			}

		}cout << "\nNothing more..." << endl; navigation(); break;

	case 4: cout << "Please input Date: (dd/mm/yyyy)"; cin >> xinput4;
		for (int i = 1; i < 2000; i++) {
			if (dat[i].date == xinput4) {
				cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
				cout << endl;
			}
		}cout << "\nNothing more..." << endl; navigation(); break;
	case 5: cout << "Please input ID: "; cin >> xinput4;
		for (int i = 1; i < r; i++)
		{
			if (dat[i].id == xinput4) {
				cout << "Name: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
				cout << endl;
				navigation();

			}

		}cout << "\nNothing more..." << endl; navigation(); break;
	default: navigation();
		break;


	}


}
void modify() {
loop2:
	cout << "                                                 ++ Modifying Menu ++" << endl << endl << endl;
	cout << "Please search by name of a customer to modify >>> "; cin >> xinput4;
	for (int i = 1; i < 2000; i++)
	{
		if (dat[i].name == xinput4) {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl << endl << endl;
			cout << endl;
			cout << "Change ID: "; cin >> inpid;
			cout << "Change Name: "; cin >> inname;
			cout << "Change Lastname: "; cin >> inlastname;
			cout << "Change Email: "; cin >> inemail;
			cout << "Change Country: "; cin >> incountry;
			cout << "Change Address: "; cin >> inaddress;
			cout << "Change Product: "; cin >> inproduct;
			cout << "Price of Purchase: "; cin >> inpurchase;
			cout << "Change Date: "; cin >> indate;

			fstream myfile;
			inid = inid + "\n";
			inid = inid + "<" + inpid + ">";
			inid = inid + "!" + inname + "!";
			inid = inid + "*" + inlastname + "*";
			inid = inid + "&" + inemail + "&";
			inid = inid + "%" + incountry + "%";
			inid = inid + "#" + inaddress + "#";
			inid = inid + "?" + inproduct + "?";
			inid = inid + "^$" + inpurchase + "^";
			inid = inid + ";" + indate + ";";

			myfile.open("XRAYDB.txt", ios::app);
			myfile << inid;
			myfile.close();
			cout << "Successfully!" << endl;
			navigation();

		}
		else {
			cout << "No matches found! Try again!" << endl; goto loop2;
			break;
		}
	}

}
void informer() {
	while(true){
		cout << "Warning! Sensitive case\n Try again" << endl;
	}
}
double calctotal(double total);
double calctotal2(double total2);
double totalsum(double totals);
void menu() {
	total = 0;
	total2 = 0;
	totals = 0;
	cout << "                                                   AMAZUNE SALES"; cout << "                            Total sales: "; totalsum(totals);
	cout << "Show sales for:																							   __________________________________________" << endl;
	cout << "[1] - 2018 || "; calctotal(total); cout << "									   [3] Search  [4] Add [5] Remove [6] Modify" << endl;
	cout << "[2] - 2019 || "; calctotal2(total2); cout << "									   __________________________________________" << endl << endl;


	cout << ">>> Input any key to EXIT <<<" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl<< endl << endl << endl << endl << endl << endl;
	cout << "																																									   Designed by Nurbek Fayziev" << endl;
	cin >> xinput;
	switch (xinput) {
	case 1:
		for2018();
		break;
	case 2:
		for2019();
		break;
	case 3:search();
		break;
	case 4:add();
		break;
	case 5: remove();
		break;
	case 6: modify();
		break;
	default:exit(1);
		break;
	}

}
void fromDatabase()
{
	ifstream myfile("XRAYDB.txt");
	if (myfile.is_open()) {

		while (getline(myfile, line))
		{
			linearr[r] = line;
			r++;
		}
		myfile.close();

	}
	else cout << "Unable to open file";
}
double calctotal(double total) {
	total = 0;
	for (int i = 1; i < 2000; i++)
	{
		if (dat[i].year == "2018")
		{
			total = total + dat[i].ipurchase;
		}
	}
	cout << "$" << total << endl;
	return 0;
}
double calctotal2(double total2) {
	total2 = 0;
	for (int i = 1; i < 2000; i++)
	{
		if (dat[i].year == "2019")
		{
			total2 = total2 + dat[i].ipurchase;
		}
	}
	cout << "$" << total2 << endl;
	return 0;
}
double totalsum(double totals) {
	int l = 0;
	totals = 0;

	for (int i = 1; i < r; i++)
	{

		totals = totals + dat[i].ipurchase;
		l++;
	}
	cout << "$" << totals << endl;
	return 0;
}
void forloops() {
	for (int i = 1; i < r; i++) {
		for (int j = 0; j < linearr[i].length(); j++)
		{
			if (linearr[i][j] == '<' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '>')
			{
				dat[i].id.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '!' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '!')
			{
				dat[i].name.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '*' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '*')
			{
				dat[i].lastname.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '&' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '&')
			{
				dat[i].email.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '%' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '%')
			{
				dat[i].country.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '#' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '#')
			{
				dat[i].address.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '?' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '?')
			{
				dat[i].product.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
			}
			if (linearr[i][j] == '^' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == '^')
			{
				dat[i].purchase.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
				dat[i].pul.append(dat[i].purchase, 1, dat[i].purchase.length());
				dat[i].ipurchase = stof(dat[i].pul);
			}
			if (linearr[i][j] == ';' && xray >= j)
			{
				xray = j;
			}
			else if (linearr[i][j] == ';')
			{
				dat[i].date.append(linearr[i], xray + 1, j - xray - 1);
				xray = 1000;
				dat[i].year.append(dat[i].date, 6, 4);
				dat[i].month.append(dat[i].date, 3, 2);
				dat[i].day.append(dat[i].date, 1, 2);

			}
		}
	}
}
void for2018() {
	cout << "__________________________________________" << endl;
	cout << "     --------SALES FOR 2018---------" << endl;
	cout << "__________________________________________" << endl;
	cout << endl;
	cout << "(1) January" << endl;
	cout << "(2) February" << endl;
	cout << "(3) March" << endl;
	cout << "(4) April" << endl;
	cout << "(5) May" << endl;
	cout << "(6) June" << endl;
	cout << "(7) July" << endl;
	cout << "(8) August" << endl;
	cout << "(9) September" << endl;
	cout << "(10) October" << endl;
	cout << "(11) November" << endl;
	cout << "(12) December" << endl;
	cout << "(13) Show all orders for 2018" << endl;
	cout << "__________________________________________" << endl;
	cout << "Total sales for this year: "; calctotal(total);
	cout << "__________________________________________" << endl;
	cout << endl;
	cout << "       Any other number to come back      " << endl;
	cin >> xinput2;
	switch (xinput2) {
	case 1: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "01") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;

		}
	}navigation(); break;
	case 2: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "02") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 3: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "03") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 4: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "04") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 5: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "05") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 6: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "06") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 7: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "07") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 8: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "08") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 9: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "09") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 10: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "10") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 11: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "11") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 12: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2018" && dat[i].month == "12") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 13: for (int i = 1; i < 2000; i++)
	{
		if (dat[i].year == "2018") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;

	default:cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl; menu();
		break;
	}

}
void for2019() {
	cout << "__________________________________________" << endl;
	cout << "     --------SALES FOR 2019---------" << endl;
	cout << "__________________________________________" << endl;
	cout << endl;
	cout << "(1) January" << endl;
	cout << "(2) February" << endl;
	cout << "(3) March" << endl;
	cout << "(4) April" << endl;
	cout << "(5) May" << endl;
	cout << "(6) June" << endl;
	cout << "(7) July" << endl;
	cout << "(8) August" << endl;
	cout << "(9) September" << endl;
	cout << "(10) October" << endl;
	cout << "(11) November" << endl;
	cout << "(12) December" << endl;
	cout << "(13) Show all orders for 2019" << endl;
	cout << "__________________________________________" << endl;
	cout << "Total sales for this year: "; calctotal2(total2);
	cout << "__________________________________________" << endl;
	cout << endl;
	cout << "       Any other number to come back      " << endl;
	cin >> xinput2;
	switch (xinput2) {
	case 1: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "01") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 2: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "02") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 3: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "03") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 4: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "04") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 5: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "05") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 6: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "06") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 7: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "07") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 8: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "08") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 9: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "09") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 10: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "10") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 11: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "11") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 12: for (int i = 1; i < 2000; i++) {
		if (dat[i].year == "2019" && dat[i].month == "12") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	case 13: for (int i = 1; i < 2000; i++)
	{
		if (dat[i].year == "2019") {
			cout << "ID: " << dat[i].id << endl; cout << "  NAME: " << dat[i].name << endl; cout << "  LASTNAME: " << dat[i].lastname << endl; cout << "  EMAIL: " << dat[i].email << endl; cout << "  COUNTRY: " << dat[i].country << endl; cout << "  ADDRESS: " << dat[i].address << endl; cout << "  PRODUCT: " << dat[i].product << endl; cout << "  PURCHASE: " << dat[i].purchase << endl; cout << "  DATE: " << dat[i].date << endl;
			cout << endl;
		}
	}navigation(); break;
	default: menu();
		break;

	}

}
void navigation() {
	cout << "_______________________________________________________________________________________" << endl;
	cout << endl;
	cout << "0 - MAIN MENU   |   1 - SEARCH  |  2 - ADD INFO   |  3 - MODIFY INFO  | 4 - REMOVE INFO " << endl;
	cout << "_______________________________________________________________________________________ " << endl;

	cin >> xinput3;
	if (xinput3 == 0) {
		menu();
	}
	if (xinput3 == 1) {
		search();

	}
	if (xinput3 == 2) {
		add();
	}
	if (xinput3 == 3) {
		modify();
	}
	if (xinput3 == 4) {
		remove();
	}
	else {
		cout << "Wrong input! Try Again!" << endl;
		menu();
	}
}
void add() {
	cout << endl;
	cout << "Input ID: "; cin >> inpid;
	cout << "Input Name: "; cin >> inname;
	cout << "Input Lastname: "; cin >> inlastname;
	cout << "Input Email: "; cin >> inemail;
	cout << "Input Country: "; cin >> incountry;
	cout << "Input Address (street,city,house): "; cin >> inaddress;
	cout << "\nProduct: "; cin >> inproduct;
	cout << "Price of Purchase $: "; cin >> inpurchase;
	cout << "Input Date (dd/mm/yyyy): "; cin >> indate;

	fstream myfile;
	inid = inid + "\n";
	inid = inid + "<" + inpid + ">";
	inid = inid + "!" + inname + "!";
	inid = inid + "*" + inlastname + "*";
	inid = inid + "&" + inemail + "&";
	inid = inid + "%" + incountry + "%";
	inid = inid + "#" + inaddress + "#";
	inid = inid + "?" + inproduct + "?";
	inid = inid + "^$" + inpurchase + "^";
	inid = inid + ";" + indate + ";";

	myfile.open("XRAYDB.txt", ios::app);
	myfile << inid;
	myfile.close();
	forloops();
	cout << "Successfully added! Thank You!\nNow Restart program! Please!" << endl;
	navigation();
}

int main()
{
	fromDatabase();
	forloops();
	menu();

	return 0;
}
