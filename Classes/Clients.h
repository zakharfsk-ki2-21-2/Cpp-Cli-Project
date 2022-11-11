#pragma once

#include "Human.h"

using namespace System;

public ref class Clients :
	public Human
{
private:
	String^ login;
	String^ password;
	bool is_admin;
public:
	Clients() {};
	Clients(String^ login, String^ password, String^ name, String^ surname, String^ email, String^ phone) : 
		Human(name, surname, email, phone) { this->login = login; this->password = password; this->isAdmin(); };
	Clients(String^ login, String^ password) { this->login = login; this->password = password; this->isAdmin(); };
	virtual void execute(String^ login) override {
		Console::WriteLine(login);
	};
	
	/*Getters and Setters*/
	void setLogin(String^ login) {
		this->login = login;
	}
	void setPassword(String^ password) {
		this->password = password;
	}
	
	Clients^ getClient() {
		return this;
	}
	String^ getLogin() {
		return this->login;
	}
	String^ getPassword() {
		return this->password;
	}
	bool getIsAdmin() { return this->is_admin; }
	/*End*/

	String^ getInfoForOrder() {
		return
			"Ім\'я: " + this->getName() + "\n" +
			"Прізвище: " + this->getSurname() + "\n" +
			"Email: " + this->getEmail() + "\n" +
			"Телефон: " + this->getPhone() + "\n" +
			"Паспорт: " + this->getPassportId();
	}
	void isAdmin() {
		if (this->login == "admin" && this->password == "admin") {
			this->is_admin = true;
		}
		else {
			this->is_admin = false;
		}
	}
	
	void operator--(int summa);
	void operator++(int summa);
	void operator=(Clients^ client);
};