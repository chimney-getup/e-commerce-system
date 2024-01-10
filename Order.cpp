#include "Order.h"

Order::Order(int orderId, const ShoppingCart& shoppingCart) : orderId(orderId), shoppingCart(shoppingCart) {}

int Order::getOrderId() const {
    return orderId;
}

const ShoppingCart& Order::getShoppingCart() const {
    return shoppingCart;
}
