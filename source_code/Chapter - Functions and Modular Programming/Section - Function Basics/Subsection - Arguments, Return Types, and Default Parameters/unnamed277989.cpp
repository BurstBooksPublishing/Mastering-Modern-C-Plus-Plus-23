#include 
#include 

bool validateInput(double value, bool allowNegative = false) {
    if (!std::isfinite(value)) return false;
    return allowNegative || (value >= 0.0);
}

double processMeasurement(double reading, bool allowNegative = false) {
    return validateInput(reading, allowNegative) ? reading : NAN;
}