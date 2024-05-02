#include "src/Server.hpp"
#include "src/User.hpp"
#include <iostream>
#include <string>


void init(Server* aServer) {
    Server* aServer = new Server();
    aServer->registerUser(new User("wesley@lamb.com", "123", true));
    aServer->registerUser(new User("wesley@lomb.com.br", "1234"));

    Middleware* middleware = Middleware::link(
        new ThrottlingMiddleware(2),
        new UserAllowedMiddleware(".br"),
        new UserExistsMiddleware(aServer),
        new RoleCheckMiddleware()
    );

    aServer->setMiddleware(middleware);
}

int main() {
    Server* server;
    std::string username = "", password = "";
    init(server);

    bool success = false;
    do {
        std::cout << "Informe o nome de usuário: " << std::endl;
        std::cin >> username;
        std::cout << "Informe a senha: " << std::endl;
        std::cin >> password;
        success = server->auth(username, password);
    } while(!success);

}