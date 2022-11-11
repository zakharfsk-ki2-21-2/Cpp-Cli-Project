#pragma once

#include "Clients.h"
#include "Applications.h"

using namespace System;
using namespace System::Collections::Generic;

ref class DataBase
{
private:
	static List<Clients^>^ listClients = gcnew List<Clients^>;
	static List<Applications^>^ listApplications = gcnew List<Applications^>;
public:
	DataBase() {};

	/* Clients methods */
	bool authClient(Clients^ client) {
		for (int i = 0; i < listClients->Count; i++) {
			if (listClients[i]->getLogin() == client->getLogin() && listClients[i]->getPassword() == client->getPassword()) {
				return true;
			}
		}
		return false;
	}
	void clientRegister(Clients^ client) {
		listClients->Add(client);
	}
	void initClients() {
		listClients->Add(gcnew Clients("admin", "admin", "Олександр", "Вуйко", "alex@gmail.com", "+380954157895"));
		listClients->Add(gcnew Clients("user", "user", "Віталій", "Буйко", "vitaliy@gmail.com", "+380936541237"));
	}
	Clients^ getClient(String^ login) {
		for (int i = 0; i < listClients->Count; i++) {
			if (listClients[i]->getLogin() == login) {
				return listClients[i];
			}
		}
		return nullptr;
	}
	void updateClients(Clients^ client) {
		for (int i = 0; i < listClients->Count; i++) {
			if (listClients[i]->getLogin() == client->getLogin()) {
				listClients[i] = client;
			}
		}
	}
	/* End Clients methods */

	/* Applications methods */
	void addApplication(Applications^ application) {
		listApplications->Add(application);
	}
	void updateApplication(Applications^ application) {
		for (int i = 0; i < listApplications->Count; i++) {
			if (listApplications[i]->getNumber() == application->getNumber()) {
				listApplications[i] = application;
			}
		}
	}
	List<Applications^>^ getApplications() {
		return listApplications;
	}
	List<Applications^>^ getApplications(String^ login) {
		List<Applications^>^ list = gcnew List<Applications^>;
		for (int i = 0; i < listApplications->Count; i++) {
			if (listApplications[i]->getClient()->getLogin() == login) {
				list->Add(listApplications[i]);
			}
		}
		return list;
	}
	Applications^ getApplication(int number) {
		for (int i = 0; i < listApplications->Count; i++) {
			if (listApplications[i]->getNumber() == number) {
				return listApplications[i];
			}
		}
		return nullptr;
	}
	int countApplications() {
		return listApplications->Count;
	}
	/* End Applications methods */
};

