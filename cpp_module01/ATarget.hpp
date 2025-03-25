#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
private:
    std::string _type;

public:

    ATarget();
    ATarget(const ATarget &other);
    ATarget &operator=(const ATarget &other);
    ATarget(const std::string &_type);
    virtual ~ATarget();

    const std::string &getType(void) const;

    virtual ATarget *clone() const = 0;

    void getHitBySpell(const ASpell &spell) const;
    
};


#endif