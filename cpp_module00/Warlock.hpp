#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock(Warlock const &copy);
    Warlock();
    Warlock &operator=(Warlock const &other);

public:
    ~Warlock();
    Warlock(std::string const &name, std::string const &title);
    const std::string &getName(void) const;
    const std::string &getTitle(void) const;
    void setTitle(std::string const &title);
    void introduce() const;
};

#endif