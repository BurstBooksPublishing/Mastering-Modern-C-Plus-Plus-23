#include 
#include 

class ConfigurationManager {
public:
    static ConfigurationManager& instance() {
        std::call_once(initFlag, []() { 
            instance_.emplace(); 
        });
        return *instance_;
    }

    void setSetting(const std::string& key, const std::string& value) {
        settings_[key] = value;
    }

    std::optional getSetting(const std::string& key) const {
        if (auto it = settings_.find(key); it != settings_.end()) {
            return it->second;
        }
        return std::nullopt;
    }

    ConfigurationManager(const ConfigurationManager&) = delete;
    ConfigurationManager& operator=(const ConfigurationManager&) = delete;

private:
    ConfigurationManager() = default;
    inline static std::once_flag initFlag;
    inline static std::optional instance_;
    std::unordered_map settings_;
};