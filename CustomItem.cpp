#include "CustomItem.h"
#include <sstream>
#include <iostream>
#include <iomanip>

CustomItem::CustomItem(std::string size):IceCreamItem(size) {
	this->size = size;
	if(size == "small") {
		this->price = 3.00;
	}
	if(size == "medium") {
		this->price = 5.00;
	}
	if(size == "large") {
		this->price = 6.50;
	}

}

CustomItem::~CustomItem() {
	this->toppings.clear();
}

void CustomItem::addTopping(std::string topping) {
	toppings.insert(std::pair<std::string, int>(topping,0));
	toppings[topping]++;
	this->price += 0.40;
}

std::string CustomItem::composeItem() {
	std::string order;
	order = "Custom Size: " + this->size + "\n" + "Toppings:";
	for(std::map<std::string, int>::iterator i = toppings.begin(); i != toppings.end(); ++i) {
		order += "\n" +	 i->first + ": " + std::to_string(i->second) + " oz";
	}
	std::stringstream decPrice;
	decPrice << std::fixed << std::setprecision(2) << this->price;
	order += "\nPrice: $" + decPrice.str() +"\n";
	return order;
}

double CustomItem::getPrice() {
	return this->price;
}

