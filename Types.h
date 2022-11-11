#pragma once

using namespace System;

public ref struct ViewCars
{
	int id;
	String^ brand;
	String^ model;
	String^ color;
	String^ year;
	int price;
	bool is_rent;

	ViewCars(int id, String^ brand, String^ model, String^ color, String^ year, int price, bool is_rent) {
		this->id = id;
		this->brand = brand;
		this->model = model;
		this->color = color;
		this->year = year;
		this->price = price;
		this->is_rent = is_rent;
	};
	
	String^ getFullInfo() {
		return
			"Номер: " + id.ToString() + "\n" +
			"Бренд: " + brand + "\n" +
			"Модель: " + model + "\n" +
			"Колір: " + color + "\n" +
			"Рік випуску: " + year + "\n" +
			"Ціна оренди: " + price.ToString() + "/день";
	}
	String^ getInfoForList() {
		return brand + " " + model;
	}
};