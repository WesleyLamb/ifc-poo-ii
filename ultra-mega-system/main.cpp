#include <iostream>

using namespace std;

#include "src/database/DatabaseManager.hpp"
#include "src/database/ConnectionParams.hpp"
#include "src/database/types/Driver.hpp"
#include "src/database/models/Clientes.hpp"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main() {
    // Conexão com o BD
    // Abrir tela inicial
    // Tela inicial contém:
    // Abrir listagem de produtos
    // Abrir listagem de clientes
    // Abrir listagem de vendas
    // Abrir painel de vendas

    // Listagem de produtos contém:
    // Criar novo produto
    // Alterar produto existente (duplo clique?)
    // Ver produto
    // Excluir produto

    // Listagem de clientes contém
    // Criar novo cliente
    // Alterar cliente existente (duplo clique?)
    // Ver cliente
    // Excluir cliente

    // Tela de venda contém
    // Local para lançar itens
    // Barra inferior com teclas de atalho
    // Teclas de atalho: F2 - Cliente, F3 - Desconto, F5 - Faturar
    // Nome do cliente
    // Lista com os itens já lançados

    // Tela do faturar contém
    // Valor total da venda
    // Formas de pagamento (Dinheiro, Cartão, Parcelamento)
    // Botão finalizar


    DatabaseManager* dbm = DatabaseManager::getInstance(new ConnectionParams(
            Driver::MYSQL, "localhost", 3308, "ums", "root", "yametekudasai"
        )
    );
    dbm->clientes->getById(1);
    std::cout << dbm->clientes->dataSet->getString("nome") << " " << dbm->clientes->dataSet->getString("sobrenome") << std::endl;

    // cout << endl;
    // cout << "Running SELECT 'Hello World!' AS _message" << endl;

    // try {
    // sql::Driver *driver;
    // sql::Connection *con;
    // sql::Statement *stmt;
    // sql::ResultSet *res;

    // /* Create a connection */
    // driver = get_driver_instance();
    // con = driver->connect("tcp://127.0.0.1:3307", "painel", "yametekudasai");
    // /* Connect to the MySQL test database */
    // con->setSchema("ums");

    // stmt = con->createStatement();
    // res = stmt->executeQuery("SELECT 'Hello World!' AS _message"); // replace with your statement
    // while (res->next()) {
    //     cout << "\t... MySQL replies: ";
    //     /* Access column data by alias or column name */
    //     cout << res->getString("_message") << endl;
    //     cout << "\t... MySQL says it again: ";
    //     /* Access column fata by numeric offset, 1 is the first column */
    //     cout << res->getString(1) << endl;
    // }
    // delete res;
    // delete stmt;
    // delete con;

    // } catch (sql::SQLException &e) {
    // cout << "# ERR: SQLException in " << __FILE__;
    // cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
    // cout << "# ERR: " << e.what();
    // cout << " (MySQL error code: " << e.getErrorCode();
    // cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    // }

    // cout << endl;

    // return EXIT_SUCCESS;

    return 0;
}