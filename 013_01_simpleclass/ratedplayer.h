#ifndef RATEDPLAYER_H
#define RATEDPLAYER_H

#include "tabletennisplayer.h"

class RatedPlayer : public TableTennisPlayer
{
public:
    RatedPlayer(unsigned int r = 0,
                const std::string & fn = "none",
                const std::string & ln ="none",
                bool ht = false);
    RatedPlayer(unsigned int r,const TableTennisPlayer & tp);
    unsigned int Rating() const {return m_rating;};
    void ResetRating(unsigned int r){m_rating = r;};
private:
    unsigned int m_rating;
};

#endif // RATEDPLAYER_H
