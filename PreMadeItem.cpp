#include <iostream>
#include <sstream>
#include <iomanip>
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size) {
	this->name = name;
	this->size = size;
	if(size == "small") {
		this->price = 4.00;
	}
	if(size == "medium") {
		this->price = 6.00;
	}
	if(size == "large") {
		this->price = 7.50;
	}
}

PreMadeItem::~PreMadeItem() {
}

std::string PreMadeItem::composeItem() {
	std::string order;
	order = "Pre-made Size: " + this->size + "\n";
	order += "Pre-made Item: " + this->name + "\n";
	std::stringstream decPrice;
	decPrice << std::fixed << std::setprecision(2) << this->price;
	order += "Price: $" + decPrice.str() + "\n";
	return order;
}

double PreMadeItem::getPrice() {
	return this->price;
}

