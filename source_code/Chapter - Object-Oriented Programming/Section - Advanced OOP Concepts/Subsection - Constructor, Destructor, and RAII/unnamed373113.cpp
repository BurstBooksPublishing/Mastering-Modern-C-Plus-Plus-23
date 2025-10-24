class Device {
public:
    virtual ~Device() = default;
};

class NetworkDevice : public Device {
public:
    NetworkDevice();
    ~NetworkDevice() override;
private:
    int socketDescriptor;
};