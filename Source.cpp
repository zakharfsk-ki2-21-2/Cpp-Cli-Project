#include "Clients.h"
#include <iostream>

void Clients::operator--(int summa) {
	int res_summa = this->getMoney() - summa;
	this->setMoney(res_summa);
}

void Clients::operator++(int summa) {
	int res_summa = this->getMoney() + summa;
	this->setMoney(res_summa);
}
 
void Clients::operator=(Clients^ client) {
	this->setName(client->getName());
	this->setSurname(client->getSurname());
	this->setEmail(client->getEmail());
	this->setPhone(client->getPhone());
	this->setPassportId(client->getPassportId());
	this->setMoney(client->getMoney());
	this->setLogin(client->getLogin());
	this->setPassword(client->getPassword());
}

class X
{
public:
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
	X& operator=(const X&) { std::cout << "X& operator=(const X&)" << std::endl; return *this; }
	~X() { std::cout << "~X()" << std::endl; }
	virtual void foo() { std::cout << "X::foo()" << std::endl; }
	void operator=(X& x);
};

class Y : public X
{
public:
	Y() { std::cout << "Y()" << std::endl; }
	Y(const Y&) { std::cout << "Y(const Y&)" << std::endl; }
	Y& operator=(const Y&) { std::cout << "Y& operator=(const Y&)" << std::endl; return *this; }
	~Y() { std::cout << "~Y()" << std::endl; }
	virtual void foo() { std::cout << "Y::foo()" << std::endl; }
	void operator=(Y& y);
};

class B : public Y
{
public:
	B() { std::cout << "B()" << std::endl; }
	B(const B&) { std::cout << "B(const B&)" << std::endl; }
	B& operator=(const B&) { std::cout << "B& operator=(const B&)" << std::endl; return *this; }
	~B() { std::cout << "~B()" << std::endl; }
	virtual void foo() { std::cout << "B::foo()" << std::endl; }
	void operator=(B& z);
};
