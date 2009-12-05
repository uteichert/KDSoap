#ifndef KDSOAPCLIENTINTERFACE_H
#define KDSOAPCLIENTINTERFACE_H

#include <QtCore/QtGlobal>
#include <QtCore/QString>
#include "KDSoapMessage.h"
#include "KDSoapPendingCall.h"

class Q_DECL_EXPORT KDSoapClientInterface
{
public:
    explicit KDSoapClientInterface(const QString& host, const QString& path, const QString& messageNamespace);
    ~KDSoapClientInterface();

    // TODO lastError like in QDBusAbstractInterface
    KDSoapPendingCall asyncCall(const QString& method, const KDSoapMessage &message, const QString& soapAction = QString());
    KDSoapMessage call(const QString& method, const KDSoapMessage &message);
    // TODO void callNoReply(const KDSoapMessage &message);

private:
    class Private;
    Private * const d;
};

#endif // KDSOAPCLIENTINTERFACE_H
