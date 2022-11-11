#pragma once

using namespace System;

public ref class Human
{
protected:
	String^ name;
	String^ surname;
	String^ email;
	String^ phone;
	String^ passport_id;
	int money = 5000;
public:
	Human() {};
	Human(String^ name, String^ surname, String^ email, String^ phone)
	{
		this->name = name;
		this->surname = surname;
		this->email = email;
		this->phone = phone;
	}

	/*Getters and Setters*/
	void setName(String^ name) { this->name = name; }
	void setSurname(String^ surname) { this->surname = surname; }
	void setEmail(String^ email) { this->email = email; }
	void setPhone(String^ phone) { this->phone = phone; }
	void setPassportId(String^ passport_id) { this->passport_id = passport_id; }
	void setMoney(int money) { this->money = money; }
	virtual void execute(String^ login);
	
	String^ getName() { return this->name; }
	String^ getSurname() { return this->surname; }
	String^ getEmail() { return this->email; }
	String^ getPhone() { return this->phone; }
	String^ getPassportId() { return this->passport_id; }
	int getMoney() { return this->money; }
	
	String^ getFullName() { return this->name + " " + this->surname; }
	/*End*/
	
};

