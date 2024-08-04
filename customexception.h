

#include <exception>
#include <string>

class CustomException : public std::exception{
    public:
    CustomException(const std::string& message){
        this->message = message;
    }

    const char* what() const noexcept override{
        return message.c_str();
    }
    private:
        std::string message;
};