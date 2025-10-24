#include 

class Message {
public:
    std::string sender;
    std::string recipient;
    std::string body;
};

class MessageBuilder {
public:
    MessageBuilder& set_sender(std::string sender) {
        msg.sender = std::move(sender);
        return *this;
    }

    MessageBuilder& set_recipient(std::string recipient) {
        msg.recipient = std::move(recipient);
        return *this;
    }

    MessageBuilder& set_body(std::string body) {
        msg.body = std::move(body);
        return *this;
    }

    Message build() {
        return std::move(msg);
    }

private:
    Message msg;
};