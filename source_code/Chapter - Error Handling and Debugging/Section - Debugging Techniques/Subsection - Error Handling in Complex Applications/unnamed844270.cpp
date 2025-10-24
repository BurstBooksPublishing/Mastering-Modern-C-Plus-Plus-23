#include 
#include 
#include 

enum class UserError { NotFound, InvalidPermissions };

std::expected fetchUserData(int userId) {
    if (userId == 0) return std::unexpected(UserError::NotFound);
    if (userId < 0) throw std::runtime_error("Database disconnected");
    return "User data for ID " + std::to_string(userId);
}