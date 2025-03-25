#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    std::map<std::string, ATarget*> targets;

    TargetGenerator(TargetGenerator const &copy);
    
    TargetGenerator &operator=(TargetGenerator const &other);

public:
    TargetGenerator();
    virtual ~TargetGenerator();

    void learnTargetType(ATarget *target);
    void forgetTargetType(std::string const &targetType);
    ATarget* createTarget(std::string const &targetType);
};

#endif