#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <map>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Warlock 
{
private:
    std::string _name;
    std::string _title;

    std::map<std::string, ASpell*> _spells;


    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);

public:
    
    Warlock(const std::string &_name, const std::string &_title);
    virtual ~Warlock();

    const std::string &getName(void) const;
    const std::string &getTitle(void) const;

    void setTitle(const std::string &title);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(const std::string &spellName);
    void launchSpell(const std::string &spellName, const ATarget &target);
};

#endif