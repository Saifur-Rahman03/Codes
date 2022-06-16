#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Trip
{
private:
	int invoice_id;
	string date;
	string source;
	string destination;

public:
	int getId() {
		return this->invoice_id;
	}

	string getDate() {
		return this->date;
	}

	string getSource() {
		return this->source;
	}

	string getDestination() {
		return this->destination;
	}
	// Constructors
	Trip() {
		invoice_id = 0;
		date = "";
		source = "";
		destination = "";
	}

	Trip(int id, string fdate, string fsource, string fdestination) {
		invoice_id = id;
		date = fdate;
		source = fsource;
		destination = fdestination;
	}
	// Methods
	void addTrip(int id, string date, string source, string destination) {
		this->invoice_id = id;
		this->date = date;
		this->source = source;
		this->destination = destination;
	}

	void editTrip(int id, string date, string source, string destination) {
		this->invoice_id = id;
		this->date = date;
		this->source = source;
		this->destination = destination;

	}

	void deleteTrip() {
		delete this;
	}
};

class User
{
private:
	int id;
	string date;
	string name;
	string address;
	string phone;
	string email;

public:
	// Constructors
	User() {
		id = 0;
		date = "";
		name = "";
		address = "";
		phone = "";
		email = "";
	}

	User(int idno, string reg_date, string user_name, string user_address, string user_phone, string user_email) {
		id = idno;
		date = reg_date;
		name = user_name;
		address = user_address;
		phone = user_phone;
		email = user_email;
	}

	// Methods
	int getUserId() {
		return this->id;
	}

	string getDate() {
		return this->date;
	}

	string getName() {
		return this->name;
	}

	string getAddress() {
		return this->address;
	}

	string getPhone() {
		return this->phone;
	}

	string getEmail() {
		return this->email;
	}

	void editUser(int idno, string edit_date, string user_name, string user_address, string user_phone, string user_email) {
			this->id = idno;
			this->date = edit_date;
			this->name = user_name;
			this->address = user_address;
			this->phone = user_phone;
			this->email = user_email;
	}

	void deleteUser() {
		delete this;
	}
};

int main() {
	vector<User> Users;					// list of users stored in a vector
	vector<User>::iterator it;
	vector<Trip> Trips;					// list of trips stored in a vector
	vector<Trip>::iterator tr;
	ifstream fin;
	ofstream fout;
	fout.open("travel.txt");
	int id = 0;
	while(1)
	{
		int n;
		cout << "Please Choose Your Option:\n\n";
		cout << "\t1. New Travel Trip.\n";
		cout << "\t2. Show All Users.\n";
		cout << "\t3. Edit User.\n";
		cout << "\t4. Delete User.\n";
		cout << "\t5. Add Trip.\n";
		cout << "\t6. Edit Trip.\n";
		cout << "\t7. Delete Trip.\n";
		cout << "\t8. Terminate Program.\n";

		cout << "\n\tEnter Your Choice: ";
		cin >> n;
		cout << "\n";
		string date;
		string regDate;
		string source;
		string destination;
		string name;
		string address;
		string phone;
		string email;

		if(n == 1) {
			id++;
			cout << "\nID: " << id;
			cout << "\nEnter Date: ";
			getline(cin >> ws, regDate);
			cout << "Enter User Name: ";
			getline(cin, name);
			cout << "Enter User Address: ";
			getline(cin, address);
			cout << "Enter User Phone No.: ";
			cin >> phone;
			if(phone.length() != 11) {
				cout << "Wrong number... Try again\n\n";
				continue;
			}
			cout << "Enter User Email: ";
			cin >> email;
			cout << "Enter Trip Date: ";
			getline(cin >> ws, date);
			cout << "Enter Trip Location: \n";
			cout << "\tsource: ";
			getline(cin, source);
			cout << "\tdestination: ";
			getline(cin, destination);
			cout << "\n\n";

			Trip trip = Trip(id, date, source, destination);
			Trips.push_back(trip);
			User user = User(id, regDate, name, address, phone, email);
			Users.push_back(user);
			fout << id << "   " << date << "   " << source << "   " << destination << endl;
		}
		if(n == 2) {
			cout << "\nUser Info\n\n";
			for(it = Users.begin(); it < Users.end(); it++) {
				cout << "User ID: " << it->getUserId() << "\n"
					<< "Registration Date: " << it->getDate() << "\n"
					<< "User name: " << it->getName() << "\n"
					<< "Address: " << it->getAddress() << "\n"
					<< "Phone No: " << it->getPhone() << "\n"
					<< "Email: " << it->getEmail() << "\n" << endl;
			}
		}
		if(n == 3) {
			cout << "\nEdit User\n\n";
			int uid, flag = 0;
			string udate, uname, uadd, uphone, uemail;
			cout << "Enter User ID: ";
			cin >> uid;

			for(it = Users.begin(); it < Users.end(); it++) {
				if(it->getUserId() == uid) {
					cout << "If you want to keep any field unchanged, press '$' \n";
					cout << "Enter Date: ";
					getline(cin >> ws, udate);
					cout << "Enter User Name: ";
					getline(cin, uname);
					cout << "Enter User Address: ";
					getline(cin, uadd);
					cout << "Enter User Phone No.: ";
					cin >> uphone;
					cout << "Enter User Email: ";
					cin >> uemail;
					cout << "\n";

					if(udate == "$") {
						udate = it->getDate();
					}
					if(uname == "$") {
						uname = it->getName();
					}
					if(uadd == "$") {
						uadd = it->getAddress();
					}
					if(uphone == "$") {
						uphone = it->getPhone();
					}
					if(uemail == "$") {
						uemail = it->getDate();
					}
					flag = 1;
					it->editUser(it->getUserId(), udate, uname, uadd, uphone, uemail);
					break;
				}
			}
			if(flag == 0) {
				cout << "\nUser not found\n\n";
			}
			else {
				cout << "User info edited\n\n";
			}
			cout << endl;
		}
		if(n == 4) {
			cout << "\nDelete User\n";
			int uid, flag = 0;
			cout << "Enter User ID: ";
			cin >> uid;
			for(it = Users.begin(); it < Users.end(); it++) {
				if(it->getUserId() == uid) {
					Users.erase(it);
					it->deleteUser();
					flag = 1;
				}
			}
			if(flag == 0) {
				cout << "\nUser not found\n\n";
			}
			else {
				cout << "\nUser info deleted\n\n";
			}
			cout << endl;
		}
		if(n == 5) {
			cout << "\nAdd Trip\n";
			string tsource;
			string tdestination;
			string tdate;
			id++;
			cout << "Invoice ID: " << id << endl;
			cout << "Enter Trip Date: ";
			getline(cin >> ws, tdate);
			cout << "Enter Trip Location: \n";
			cout << "\tsource: ";
			getline(cin, tsource);
			cout << "\tdestination: ";
			getline(cin, tdestination);
			cout << "\n";
			Trip trip = Trip();
			trip.addTrip(id, tdate, tsource, tdestination);
			fout << id << "   " << tdate << "   " << tsource << "   " << tdestination << endl;
			Trips.push_back(trip);
			cout << "Trip Added\n\n";
		}
		if(n == 6) {
			cout << "\nEdit Trip\n";
			int tid, flag = 0;
			string tsource;
			string tdestination;
			string tdate;
			cout << "Enter Invoice ID: ";
			cin >> tid;
			for(tr = Trips.begin(); tr < Trips.end(); tr++) {
				if(tr->getId() == tid) {
					cout << "If you want to keep any field unchanged, press '$' \n";
					cout << "Enter Trip Date: ";
					getline(cin >> ws, tdate);
					cout << "Enter Trip Location: \n";
					cout << "\tsource: ";
					getline(cin, tsource);
					cout << "\tdestination: ";
					getline(cin, tdestination);
					cout << "\n";

					if(tdate == "$") {
						tdate = tr->getDate();
					}
					if(tsource == "$") {
						tsource = tr->getSource();
					}
					if(tdestination == "$") {
						tdestination = tr->getDestination();
					}
					flag = 1;
					tr->editTrip(tr->getId(), tdate, tsource, tdestination);
					fout << id << "   " << tdate << "   " << tsource << "   " << tdestination << endl;
					break;
				}
			}
			if(flag == 0) {
				cout << "\nNo Trip found\n\n";
			}
			else {
				cout << "\nTrip Edited\n\n";
			}
		}
		if(n == 7) {
			cout << "\nDelete Trip\n";
			int tid, flag = 0;
			cout << "Enter User ID: ";
			cin >> tid;
			for(tr = Trips.begin(); tr < Trips.end(); tr++) {
				if(tr->getId() == tid) {
					fout << "Invoice ID: " << tid << " has been deleted\n";
					Trips.erase(tr);
					tr->deleteTrip();
					flag = 1;
				}
			}
			if(flag == 0) {
				cout << "\nNo Trip found\n\n";
			}
			else {
				cout << "\nTrip deleted\n\n";
			}
			cout << endl;
		}
		if(n == 8) {
			break;
		}
	}
}
