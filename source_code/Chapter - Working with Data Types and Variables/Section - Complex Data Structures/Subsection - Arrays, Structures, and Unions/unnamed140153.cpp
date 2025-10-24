#include 
#include 
#include 

struct SensorReading {
    std::chrono::system_clock::time_point timestamp;
    float value;
    std::string sensorID;
};

void printAboveThreshold(const std::array& readings, float threshold) {
    for (const auto& reading : readings) {
        if (reading.value > threshold) {
            // Print relevant details (implementation omitted for brevity)
        }
    }
}