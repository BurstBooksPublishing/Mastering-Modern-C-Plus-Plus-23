#include 
#include 
#include 
#include 

class Plugin {
public:
    virtual ~Plugin() = default;
    virtual void execute() = 0;
};

class AudioPlugin : public Plugin {
public:
    void execute() override { /* Audio-specific logic */ }
};

class VideoPlugin : public Plugin {
public:
    void execute() override { /* Video-specific logic */ }
};

class PluginFactory {
public:
    using Creator = std::function()>;

    static void registerPlugin(const std::string& type, Creator creator) {
        registry()[type] = std::move(creator);
    }

    static std::unique_ptr create(const std::string& type) {
        if (auto it = registry().find(type); it != registry().end()) {
            return it->second();
        }
        return nullptr;
    }

private:
    static auto& registry() {
        static std::unordered_map reg;
        return reg;
    }
};

// Usage:
// PluginFactory::registerPlugin("audio", [] { return std::make_unique(); });
// PluginFactory::registerPlugin("video", [] { return std::make_unique(); });