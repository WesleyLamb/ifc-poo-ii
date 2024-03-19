#include "NoFriendlyFireException.hpp"
#include <stdexcept>

NoFriendlyFireException::NoFriendlyFireException(): std::runtime_error("Fogo amigo não é permitido") {}