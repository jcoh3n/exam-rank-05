#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type) : _type(type) {}

ATarget::ATarget(const ATarget &other) : _type(other._type) {}

ATarget &ATarget::operator=(const ATarget &other)
{
    this->_type = other._type;
    return (*this);
}

ATarget::~ATarget() {}

const std::string &ATarget::getType(void) const
{
    return (this->_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
