//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/ellasticRouting/EllasticRoutingPacket.msg.
//

#ifndef _ELLASTICROUTINGPACKET_M_H_
#define _ELLASTICROUTINGPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "RoutingPacket_m.h"
// }}

/**
 * Class generated from <tt>src/node/communication/routing/ellasticRouting/EllasticRoutingPacket.msg:19</tt> by nedtool.
 * <pre>
 * packet EllasticRoutingPacket extends RoutingPacket
 * {
 *     string source;
 *     string destination;
 *     int x_src;
 *     int y_src;
 *     int x_dst;	// for the sink when it is a data message
 *     int y_dst;
 * 
 * }
 * </pre>
 */
class EllasticRoutingPacket : public ::RoutingPacket
{
  protected:
    opp_string source_var;
    opp_string destination_var;
    int x_src_var;
    int y_src_var;
    int x_dst_var;
    int y_dst_var;
    int packet_type;

  private:
    void copy(const EllasticRoutingPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EllasticRoutingPacket&);

  public:
    EllasticRoutingPacket(const char *name=NULL, int kind=0);
    EllasticRoutingPacket(const EllasticRoutingPacket& other);
    virtual ~EllasticRoutingPacket();
    EllasticRoutingPacket& operator=(const EllasticRoutingPacket& other);
    virtual EllasticRoutingPacket *dup() const {return new EllasticRoutingPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getSource() const;
    virtual void setSource(const char * source);
    virtual const char * getDestination() const;
    virtual void setDestination(const char * destination);
    virtual int getX_src() const;
    virtual void setX_src(int x_src);
    virtual int getY_src() const;
    virtual void setY_src(int y_src);
    virtual int getX_dst() const;
    virtual void setX_dst(int x_dst);
    virtual int getY_dst() const;
    virtual void setY_dst(int y_dst);
    virtual void setType (int packet_type);
    virtual int getType ();
};

inline void doPacking(cCommBuffer *b, EllasticRoutingPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EllasticRoutingPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _ELLASTICROUTINGPACKET_M_H_

