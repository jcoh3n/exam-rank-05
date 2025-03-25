#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    std::map<std::string, ASpell*> spells;

    SpellBook(SpellBook const &copy);
    
    SpellBook &operator=(SpellBook const &other);

public:
    SpellBook();
    virtual ~SpellBook();

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spellName);
    ASpell* createSpell(std::string const &spellName);
};

#endif