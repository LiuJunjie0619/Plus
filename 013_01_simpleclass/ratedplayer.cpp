#include "ratedplayer.h"

RatedPlayer::RatedPlayer(unsigned int r,
                         const std::string & fn,
                         const std::string & ln,
                         bool ht)
    :TableTennisPlayer(fn,ln,ht)
{
    m_rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp)
    :TableTennisPlayer(tp),m_rating(r)
{

}


