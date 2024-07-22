#ifndef USER_EXCEPTIONS_H
#define USER_EXCEPTIONS_H

#include <stdexcept>
using namespace std;
class LoginFailedException : public runtime_error {
public:
    explicit LoginFailedException(const string& message)
        : runtime_error(message) {}
};




#endif // USER_EXCEPTIONS_H
