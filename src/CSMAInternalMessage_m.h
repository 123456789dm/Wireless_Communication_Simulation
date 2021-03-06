//
// Generated file, do not edit! Created by nedtool 5.0 from CSMAInternalMessage.msg.
//

#ifndef __CSMAINTERNALMESSAGE_M_H
#define __CSMAINTERNALMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>CSMAInternalMessage.msg:2</tt> by nedtool.
 * <pre>
 * packet CSMAInternalMessage
 * {
 *     double totalPower;
 * }
 * </pre>
 */
class CSMAInternalMessage : public ::omnetpp::cPacket
{
  protected:
    double totalPower;

  private:
    void copy(const CSMAInternalMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CSMAInternalMessage&);

  public:
    CSMAInternalMessage(const char *name=nullptr, int kind=0);
    CSMAInternalMessage(const CSMAInternalMessage& other);
    virtual ~CSMAInternalMessage();
    CSMAInternalMessage& operator=(const CSMAInternalMessage& other);
    virtual CSMAInternalMessage *dup() const {return new CSMAInternalMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual double getTotalPower() const;
    virtual void setTotalPower(double totalPower);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CSMAInternalMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CSMAInternalMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef __CSMAINTERNALMESSAGE_M_H

