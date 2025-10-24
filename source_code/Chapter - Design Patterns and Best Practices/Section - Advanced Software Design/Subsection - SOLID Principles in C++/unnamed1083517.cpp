class PaymentProcessor {
public:
    virtual void process(double amount) = 0;
};

class CreditCardProcessor : public PaymentProcessor {
public:
    void process(double amount) override {
        // Credit card logic
    }
};