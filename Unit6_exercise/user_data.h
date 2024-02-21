#ifndef USER_DATA_H
#define USER_DATA_H

#include <string>

class UserData {
private:
    std::string username; // max: 10 characters  min: 4 characters | strlen() -> #include <cstring>
    int age; // min: 16 max: 120
    std::string email; // max: 20 characters min: 7 characters, it should have "@" |  for (char character : string)
    std::string phoneNumber; // max: 15 characters, it should have the "+" for the prefix

public:
    void validate();
};

#endif // USER_DATA_H
