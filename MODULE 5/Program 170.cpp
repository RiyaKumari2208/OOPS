#include <iostream>
#include <string>
#include <exception>
using namespace std;

class LoginError : public exception
{
private:
    string message;
public:
    LoginError(const string& msg) : message(msg) {}
    const char* what() const noexcept override
    {
        return message.c_str();
    }
};

class LoginSystem
{
private:
    string correctUsername;
    string correctPassword;

public:
    LoginSystem(const string& username, const string& password)
    {
        correctUsername = username;
        correctPassword = password;
    }

    void login(const string& username, const string& password)
    {
        if (username != correctUsername)
            throw LoginError("Error: Username is incorrect!");
        if (password != correctPassword)
            throw LoginError("Error: Password is incorrect!");
        cout << "Login successful! Welcome, " << username << "." << endl;
    }
};

int main()
{
    
    LoginSystem system("Jyoti", "12345");

    string username, password;

    try
    {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        system.login(username, password);  
    }
    catch (LoginError& e)
    {
        cout << e.what() << endl;
    }

    cout << "Program executed safely." << endl;
    return 0;
}
