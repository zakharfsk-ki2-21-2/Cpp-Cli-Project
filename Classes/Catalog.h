#pragma once
#include "Cars.h"

ref class Catalog
{
private:
	Cars^ cars;
public:
	Catalog() {};
	Catalog(Cars^ cars) {
		this->cars = cars;
	}
	void addCar(ViewCars^ car) {
		cars->addCar(car);
	}
	void deleteCar(int id) {
		cars->deleteCar(id);
	}
	void editCar(int id, ViewCars^ car) {
		cars->editCar(id, car);
	}
	ViewCars^ getCar(int id) {
		return cars->getCar(id);
	}
	List<ViewCars^>^ getCars() {
		return cars->getCars();
	}
};

