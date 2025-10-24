#include 
#include 
#include 

void databaseOperation() {
    try {
        throw std::runtime_error("Database connection failed");
    } catch (...) {
        std::throw_with_nested(std::runtime_error("Database layer error"));
    }
}

void serviceLayer() {
    try {
        databaseOperation();
    } catch (...) {
        std::throw_with_nested(std::runtime_error("Service layer error"));
    }
}

void uiLayer() {
    try {
        serviceLayer();
    } catch (const std::exception& e) {
        std::cerr << "Caught: " << e.what() << "\n";
        try {
            std::rethrow_if_nested(e);
        } catch (const std::exception& nested) {
            std::cerr << "Nested: " << nested.what() << "\n";
        }
    }
}