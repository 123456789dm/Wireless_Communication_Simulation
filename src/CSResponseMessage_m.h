//
// Generated file, do not edit! Created by nedtool 5.0 from CSResponseMessage.msg.
//

#ifndef __CSRESPONSEMESSAGE_M_H
#define __CSRESPONSEMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>CSResponseMessage.msg:2</tt> by nedtool.
 * <pre>
 * packet CSResponseMessage
 * {
 *     bool busyChannel;
 * }
 * </pre>
 */
class CSResponseMessage : public ::omnetpp::cPacket
{
  protected:
    bool busyChannel;

  private:
    void copy(const CSResponseMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CSResponseMessage&);

  public:
    CSResponseMessage(const char *name=nullptr, int kind=0);
    CSResponseMessage(const CSResponseMessage& other);
    virtual ~CSResponseMessage();
    CSResponseMessage& operator=(const CSResponseMessage& other);
    virtual CSResponseMessage *dup() const {return new CSResponseMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual bool getBusyChannel() const;
    virtual void setBusyChannel(bool busyChannel);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CSResponseMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CSResponseMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef __CSRESPONSEMESSAGE_M_H

