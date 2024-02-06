#include <iostream>
#include <string.h>

using namespace std;

class User {
private:
	string username="";
	string password="";
	int loggedIn=0;
public:
	User(string n, string p) {
		username=n;
		password=p;
	}
	void login(string n, string p) {
		if (n==username && p==password) {
			cout<<"You're now logged in\n";
			loggedIn=1;
		} else {
			cout<<"Wrong username or password!\n";
		}
	}
	void setUsername(string n, string p) {
		if (password=="") {
			username=n;
		} else if (p==password) {
			username=n;
		}
	}
	void setPassword(string n, string p) {
		if (password=="") {
			password=n;
		} else if (p==password) {
			password=n;
		}
	}
	string getPassword() {
		if (loggedIn) {
			return password;
		} else {
			return "not logged in!";
		}
	}
};

int main() {
	User u("erkki", "esimerkki");
	u.login("erkki", "esimerkki");
	cout<<u.getPassword();
	return 0;
}
