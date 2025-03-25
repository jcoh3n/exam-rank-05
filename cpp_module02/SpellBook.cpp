#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it = spells.begin() ; it != spells.end() ; ++it)
        delete it->second;
    this->spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
   if (spell && spells.find(spell->getName()) == spells.end()) {
        spells[spell->getName()] = spell->clone();
   }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spells.find(spellName);
    if (it != spells.end()) {
        return (it->second->clone());
    }
    return (NULL);
}