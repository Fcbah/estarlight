#ifndef PYTHIADECAYER_H
#define PYTHIADECAYER_H

#include "Pythia8/Pythia.h"
#include "starlightparticle.h"
#include "eXevent.h"

class pythiaDecayer
{

public:

    // Default constructor
    pythiaDecayer();


    // Destructor
    virtual ~pythiaDecayer();


    // Initialise
    void init();
    
    // Add particle to current event
    void addParticle(const starlightParticle &p);
    
    // Execute event and return starlight type event
    eXEvent execute();


private:

    Pythia8::Pythia _pythia;
    
    // Prohibited
    pythiaDecayer(Pythia8::Pythia pythia);
    bool operator==(const pythiaDecayer &other) const;

};
#endif // PYTHIADECAYER_H
