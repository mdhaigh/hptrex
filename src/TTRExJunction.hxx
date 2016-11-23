#ifndef TTRExJunction_HXX
#define TTRExJunction_HXX

#include "TTPCHitPad.hxx"

namespace trex{

  class TTRExJunction{

  public:

    TTRExJunction(){};
    TTRExJunction(const TVector3 &Position){};
    virtual ~TTRExJunction(){};

    void SetHits(std::vector<TTPCHitPad*>& theHits){fHits=theHits;}
    void SetId(unsigned int theId){fId=theId;}
    unsigned int GetId(){return fId;}

    //MDH TODO: Implement these methods properly
    /// Get number of paths associated with this junction
    unsigned int GetNPaths(){ return 0;}

  /// Check if a path with this Id is connected to this junction
    bool IsPathConnected(unsigned int WantedPathId){return false;}

private:
    unsigned int fId;
    
    std::vector<trex::TTPCHitPad*>  fHits;
    
  };
}






#endif
