#include "ATarget.hpp"

ATarget::ATarget() : type() {}

ATarget::ATarget(std::string const &type) : type(type) {}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &other) : type(other.type) {}

ATarget &ATarget::operator=(ATarget const &other)
{
    this->type = other.type;
    return (*this);
}

std::string const &ATarget::getType() const
{
    return (this->type);
}

void ATarget::getHitsBySpell(ASpell const &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

