#ifndef LOGINSCREEN
#define LOGINSCREEN

#include <string>

class LoginScreen           //класс для авторизации
{
private:
    string login;           //логин = пароль пока что
public:
    string getLogin();      //запрос поля
};

#endif // LOGINSCREEN

