#pragma once
#include "Types.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Cars
{
private:
	static List<ViewCars^>^ listCars = gcnew List<ViewCars^>;
public:
	Cars() {};
	void addCar(ViewCars^ car) {
		listCars->Add(car);
	}
	void deleteCar(int id) {
		for (int i = 0; i < listCars->Count; i++) {
			if (listCars[i]->id == id) {
				listCars->RemoveAt(i);
			}
		}
	}
	void editCar(int id, ViewCars^ car) {
		for (int i = 0; i < listCars->Count; i++) {
			if (listCars[i]->id == id) {
				listCars[i] = car;
			}
		}
	}
	ViewCars^ getCar(int id) {
		for (int i = 0; i < listCars->Count; i++) {
			if (listCars[i]->id == id) {
				return listCars[i];
			}
		}
		return nullptr;
	}
	List<ViewCars^>^ getCars() {
		return listCars;
	}
};
