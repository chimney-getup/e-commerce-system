#include "Product.h"
#include "ShoppingCart.h"
#include "Customer.h"
#include "Order.h"

int main() {
    // Create products
    Product product1("Laptop", 1000);
    Product product2("Smartphone", 500);
    Product product3("Headphones", 50);

    // Create a customer
    Customer customer("John Doe");

    // Add products to the shopping cart
    ShoppingCart shoppingCart;
    shoppingCart.addProduct(product1, 2);
    shoppingCart.addProduct(product2, 1);
    shoppingCart.addProduct(product3, 3);

    // Place an order
    int orderId = customer.placeOrder(shoppingCart);

    // Display order details
    customer.displayOrder(orderId);

    return 0;
}
