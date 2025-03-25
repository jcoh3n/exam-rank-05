#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;

    SpellBook spellBook;

    Warlock(Warlock const &copy);
    Warlock();
    Warlock &operator=(Warlock const &other);

public:
    virtual ~Warlock();
    Warlock(std::string const &name, std::string const &title);
    const std::string &getName(void) const;
    const std::string &getTitle(void) const;
    void setTitle(std::string const &title);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spellName);
    void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif