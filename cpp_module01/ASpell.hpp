#ifndef ASPELL_HPP 
#define ASPELL_HPP

#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
    std::string name;
    std::string effects;
    
public:
    ASpell();
    ASpell &operator=(ASpell const &other);
    ASpell(ASpell const &other);
    ASpell(std::string const &name, std::string const &effects);
    virtual ~ASpell();
    std::string const &getName(void) const;
    std::string const &getEffects(void) const;

    virtual ASpell *clone() const = 0;

    void launch(ATarget const &target);
};

#endif