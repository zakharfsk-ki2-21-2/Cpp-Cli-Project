#pragma once

#include "Clients.h"
#include "Types.h"

using namespace System;

ref class Applications
{
private:
	int id_application;
	String^ status = "Новий";
	Clients^ client_info;
	ViewCars^ car_info;
	String^ notes = "Немає";
	String^ leaser_term;

public:
	Applications() {};
	Applications(int id_application, Clients^ client_info, ViewCars^ car_info, String^ leaser_term) {
		this->id_application = id_application;
		this->client_info = client_info;
		this->car_info = car_info;
		this->leaser_term = leaser_term;
	}

	int getNumber() {
		return id_application;
	}
	String^ getStatus() {
		return status;
	}
	Clients^ getClient() {
		return client_info;
	}
	ViewCars^ getCar() {
		return car_info;
	}
	String^ getNotes() {
		return notes;
	}
	String^ getLeaserTerm() {
		return leaser_term;
	}

	void setNumber(int id_application) {
		this->id_application = id_application;
	}
	void setStatus(String^ status) {
		this->status = status;
	}
	void setClient(Clients^ client_info) {
		this->client_info = client_info;
	}
	void setCar(ViewCars^ car_info) {
		this->car_info = car_info;
	}
	void setNotes(String^ notes) {
		this->notes = notes;
	}
	void setLeaserTerm(String^ leaser_term) {
		this->leaser_term = leaser_term;
	}

	String^ info_applicaion() {
		{
			return 
				"Номер заявки: " + id_application + "\r\n" + 
				"Статус заявки: " + status + "\r\n" + 
				"Клієнт: " + client_info->getFullName() + "\r\n" + 
				"Автомобіль: " + car_info->getInfoForList() + "\r\n" + 
				"Термін оренди: " + leaser_term + "\r\n" + 
				"Примітки: " + notes + "\r\n\r\n";
		}
	}
	String^ info_applicaion_for_list() {
		return id_application.ToString() + " " + 
			status + " " +
			client_info->getFullName() + " " +
			car_info->getInfoForList() + " " +
			" " + leaser_term;
	}

};

