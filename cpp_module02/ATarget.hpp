#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string type;
public:
    ATarget();
    ATarget(std::string const &type);
    virtual ~ATarget();
    ATarget(ATarget const &other);
    ATarget &operator=(ATarget const &other);
    std::string const &getType() const;
    virtual ATarget *clone() const = 0;

    void getHitsBySpell(ASpell const &spell) const;
};

#endif