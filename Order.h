#ifndef ORDER_H
#define ORDER_H

#include "ShoppingCart.h"

class Order {
public:
    Order(int orderId, const ShoppingCart& shoppingCart);

    int getOrderId() const;
    const ShoppingCart& getShoppingCart() const;

private:
    int orderId;
    ShoppingCart shoppingCart;
};

#endif // ORDER_H
