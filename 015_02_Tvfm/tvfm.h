#ifndef TVFM_H
#define TVFM_H

class Tv;       //foreard declaration

class Remote
{
public:
    enum State{Off,On};
    enum {MinVal,MaxVal=20};
    enum {Antenna,Cable};
    enum {TV,DVD};
private:
    int m_mode;
public:
    Remote(int m = TV):m_mode(m){}
    bool volup(Tv & t);
    bool voldown(Tv & t);
    void onoff(Tv & t);
    void chanup(Tv & t);
    void chandown(Tv & t);
    void set_mode(Tv & t);
    void set_input(Tv & t);
    void set_chan(Tv & t,int c);
};

class Tv
{
public:
    friend void Remote::set_chan(Tv & t,int c);
    enum State{Off,On};
    enum {MinVal,MaxVal = 20};
    enum {Antenna,Cable};
    enum {TV,DVD};
public:
    Tv(int s=Off,int mc=125):m_state(s),m_volume(5),m_maxchannel(mc),m_channel(2),m_mode(Cable),m_input(TV){}
    void onoff(){m_state = (m_state == On)?Off:On;}
    bool ison() const{return m_state==On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){m_mode=(m_mode == Antenna)?Cable:Antenna;}
    void set_input(){m_input = (m_input == TV)?DVD:TV;}
    void settings() const;
private:
    int m_state;
    int m_volume;
    int m_maxchannel;
    int m_channel;
    int m_mode;
    int m_input;
};

inline bool Remote::volup(Tv &t){return t.volup();}
inline bool Remote::voldown(Tv & t){return t.voldown();}
inline void Remote::onoff(Tv & t){ t.onoff();}
inline void Remote::chanup(Tv & t){ t.chanup();}
inline void Remote::chandown(Tv & t){ t.chandown();}
inline void Remote::set_mode(Tv & t){ t.set_mode();}
inline void Remote::set_input(Tv & t){ t.set_input();}
inline void Remote::set_chan(Tv & t,int c){ t.m_channel = c;}






#endif // TVFM_H
