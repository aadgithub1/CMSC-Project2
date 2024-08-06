// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a CustomException.
// The message of an exception can be specified where
// thrown in the code to ensure relevant output.

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