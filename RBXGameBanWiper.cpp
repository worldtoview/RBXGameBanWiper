#include <filesystem>
#include <iostream>

namespace FileSystem = std::filesystem;

static std::string CurrentTimestamp() {
    std::time_t now = std::time(nullptr);
    char buf[20];
    struct tm timeInfo;
    localtime_s(&timeInfo, &now);
    std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &timeInfo);
    return std::string(buf);
}

static void ConsoleLog(const std::string& Text) {
    std::cout << "\033[38;2;236;85;85m[debug]\033[0m " << "\033[38;2;236;236;193m" << CurrentTimestamp() << "\033[0m " << "\033[38;2;129;195;194m" << Text << "\033[0m" << std::endl;
}

int main() {
    ConsoleLog("loading process");
    ConsoleLog("make sure you are logged out of the banned account");

    char* UserProfile = nullptr;
    size_t len = 0;
    _dupenv_s(&UserProfile, &len, "USERPROFILE");
    if (!UserProfile) {
        ConsoleLog("could not find USERPROFILE environment variable");
        return 1;
    }

    FileSystem::path Path = FileSystem::path(UserProfile) / "AppData" / "Local" / "Roblox" / "LocalStorage" / "RobloxCookies.dat";
    free(UserProfile);

    if (!FileSystem::exists(Path)) {
        ConsoleLog("could not find RobloxCookies.dat");
        return 1;
    }

    std::error_code ErrorCode;
    FileSystem::remove(Path, ErrorCode);
    if (ErrorCode) {
        ConsoleLog("failed to remove RobloxCookies.dat");
        return 1;
    }

    ConsoleLog("successfully removed RobloxCookies.dat");

    return 0;
}