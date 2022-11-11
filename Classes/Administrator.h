#pragma once
#include "Human.h"
#include "DataBase.h"
#include "Applications.h"

ref class Administrator :
    public Human
{
private:
	String^ login;
	String^ password;
public:
	Administrator() {};
	Administrator(String^ login, String^ password, String^ name, String^ surname, String^ email, String^ phone) :
		Human(name, surname, email, phone) {
		this->login = login; this->password = password;
	};
	Administrator(String^ login, String^ password) { this->login = login; this->password = password; };
	virtual void execute(String^ login) override {
		Console::WriteLine(login);
	};

	void setLogin(String^ login) {
		this->login = login;
	}
	void setPassword(String^ password) {
		this->password = password;
	}

	String^ getLogin() {
		return this->login;
	}
	String^ getPassword() {
		return this->password;
	}

	bool is_admin() {
		if (this->login == "admin" && this->password == "admin") {
			return true;
		}
		else {
			return false;
		}
	}

	void updateApplication(Applications^ application) {
		DataBase^ db = gcnew DataBase();
		db->updateApplication(application);
	}
	List<Applications^>^ getApplications() {
		DataBase^ db = gcnew DataBase();
		return db->getApplications();
	}
	List<Applications^>^ getApplications(String^ login) {
		DataBase^ db = gcnew DataBase();
		return db->getApplications(login);
	}
	Applications^ getApplication(int number) {
		DataBase^ db = gcnew DataBase();
		return db->getApplication(number);
	}
	int countApplications() {
		DataBase^ db = gcnew DataBase();
		return db->countApplications();
	}
};


