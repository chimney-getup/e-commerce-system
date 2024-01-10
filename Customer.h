#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <map>
#include <iostream>
#include "ShoppingCart.h"
#include "Order.h"

class Customer {
public:
    Customer(const std::string& name);

    int placeOrder(const ShoppingCart& shoppingCart);
    void displayOrder(int orderId) const;

private:
    std::string name;
    std::map<int, Order> orders;
    static int orderIdCounter;
};

#endif // CUSTOMER_H
