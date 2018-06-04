#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <string>
#include <map>
#include <utility>

class CustomItem: public IceCreamItem {
	public:
		// constructor 
		CustomItem(std::string size);
		// virtual destructor
		virtual ~CustomItem();
		// method allows you to add a topping to custom order
		void addTopping(std::string topping);
		// keeps track of the number of ounces of each topping, 
		// displays the correct num of ounces
		virtual std::string composeItem();
		virtual double getPrice();
	private:
		std::map<std::string, int> toppings;

};
#endif
