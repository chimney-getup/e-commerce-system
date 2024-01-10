#include "Customer.h"

int Customer::orderIdCounter = 1;

Customer::Customer(const std::string& name) : name(name) {}

int Customer::placeOrder(const ShoppingCart& shoppingCart) {
    int orderId = orderIdCounter++;
    Order order(orderId, shoppingCart);
    orders[orderId] = order;
    return orderId;
}

void Customer::displayOrder(int orderId) const {
    auto it = orders.find(orderId);
    if (it != orders.end()) {
        const Order& order = it->second;
        std::cout << "Order ID: " << order.getOrderId() << std::endl;
        std::cout << "Products:" << std::endl;
        for (const auto& pair : order.getShoppingCart().getProducts()) {
            std::cout << pair.first.getName() << ": " << pair.second << std::endl;
        }
        std::cout << "Total: $" << order.getShoppingCart().calculateTotal() << std::endl;
    } else {
        std::cout << "Order with ID " << orderId << " not found." << std::endl;
    }
}
