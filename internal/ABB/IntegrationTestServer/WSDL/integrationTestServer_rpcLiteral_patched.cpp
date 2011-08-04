// This file is generated by KDAB's kdwsdl2cpp from IntegrationTest.wsdl.
// All changes you do to this file will be lost.

#include "integrationTestServer.h"

#include <KDSoapNamespaceManager.h>
#include <QString>
#include <KDSoapMessage.h>
#include <KDSoapValue.h>
#include <KDSoapPendingCallWatcher.h>

class TNS__NumberList::PrivateDPtr : public QSharedData
{
public:
    QList<int> mNumber;
};

void TNS__NumberList::setNumber( const QList<int>& number )
{
    d_ptr->mNumber = number;
}

QList<int> TNS__NumberList::number() const
{
    return d_ptr->mNumber;
}

KDSoapValue TNS__NumberList::serialize( const QString& valueName ) const
{
    KDSoapValue mainValue(valueName, QVariant(), QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test"), QString::fromLatin1("NumberList"));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:323
    KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:343
    for (int i = 0; i < d_ptr->mNumber.count(); ++i) {
        args.append(KDSoapValue(QString::fromLatin1("Number"), QVariant::fromValue(d_ptr->mNumber.at(i)), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("int")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    }
    return mainValue;
}

void TNS__NumberList::deserialize( const KDSoapValue& mainValue )
{
    const KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:339
    for (int argNr = 0; argNr < args.count(); ++argNr) {
        const KDSoapValue& val = args.at(argNr);
        const QString name = val.name();
        if (name == QLatin1String("Number")) {// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:245
            int mNumberTemp;
            mNumberTemp = val.value().value<int>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
            d_ptr->mNumber.append(mNumberTemp);
        }
    }
}

TNS__NumberList::TNS__NumberList()
    : d_ptr(new PrivateDPtr)
{
}

TNS__NumberList::~TNS__NumberList()
{
}

TNS__NumberList::TNS__NumberList( const TNS__NumberList& other )
    : d_ptr( other.d_ptr )
{
}

TNS__NumberList&  TNS__NumberList::operator=( const TNS__NumberList& other )
{
    if ( this == &other )
        return *this;

    d_ptr = other.d_ptr;

    return *this;
}


class TNS__StringList::PrivateDPtr : public QSharedData
{
public:
    QList<QString> mString;
};

void TNS__StringList::setString( const QList<QString>& string )
{
    d_ptr->mString = string;
}

QList<QString> TNS__StringList::string() const
{
    return d_ptr->mString;
}

KDSoapValue TNS__StringList::serialize( const QString& valueName ) const
{
    KDSoapValue mainValue(valueName, QVariant(), QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test"), QString::fromLatin1("StringList"));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:323
    KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:343
    for (int i = 0; i < d_ptr->mString.count(); ++i) {
        args.append(KDSoapValue(QString::fromLatin1("String"), QVariant::fromValue(d_ptr->mString.at(i)), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("string")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    }
    return mainValue;
}

void TNS__StringList::deserialize( const KDSoapValue& mainValue )
{
    const KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:339
    for (int argNr = 0; argNr < args.count(); ++argNr) {
        const KDSoapValue& val = args.at(argNr);
        const QString name = val.name();
        if (name == QLatin1String("String")) {// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:245
            QString mStringTemp;
            mStringTemp = val.value().value<QString>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
            d_ptr->mString.append(mStringTemp);
        }
    }
}

TNS__StringList::TNS__StringList()
    : d_ptr(new PrivateDPtr)
{
}

TNS__StringList::~TNS__StringList()
{
}

TNS__StringList::TNS__StringList( const TNS__StringList& other )
    : d_ptr( other.d_ptr )
{
}

TNS__StringList&  TNS__StringList::operator=( const TNS__StringList& other )
{
    if ( this == &other )
        return *this;

    d_ptr = other.d_ptr;

    return *this;
}


class TNS__ContainerType::PrivateDPtr : public QSharedData
{
public:
    TNS__NumberList mNumberList;
    KDDateTime mDateTime;
    QString mString;
};

void TNS__ContainerType::setNumberList( const TNS__NumberList& numberList )
{
    d_ptr->mNumberList = numberList;
}

TNS__NumberList TNS__ContainerType::numberList() const
{
    return d_ptr->mNumberList;
}

void TNS__ContainerType::setDateTime( const KDDateTime& dateTime )
{
    d_ptr->mDateTime = dateTime;
}

KDDateTime TNS__ContainerType::dateTime() const
{
    return d_ptr->mDateTime;
}

void TNS__ContainerType::setString( const QString& string )
{
    d_ptr->mString = string;
}

QString TNS__ContainerType::string() const
{
    return d_ptr->mString;
}

KDSoapValue TNS__ContainerType::serialize( const QString& valueName ) const
{
    KDSoapValue mainValue(valueName, QVariant(), QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test"), QString::fromLatin1("ContainerType"));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:323
    KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:343
    args.append(d_ptr->mNumberList.serialize(QString::fromLatin1("NumberList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    args.append(KDSoapValue(QString::fromLatin1("DateTime"), d_ptr->mDateTime.toDateString(), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("dateTime")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    args.append(KDSoapValue(QString::fromLatin1("String"), QVariant::fromValue(d_ptr->mString), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("string")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    return mainValue;
}

void TNS__ContainerType::deserialize( const KDSoapValue& mainValue )
{
    const KDSoapValueList& args = mainValue.childValues();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:339
    for (int argNr = 0; argNr < args.count(); ++argNr) {
        const KDSoapValue& val = args.at(argNr);
        const QString name = val.name();
        if (name == QLatin1String("NumberList")) {// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:245
            d_ptr->mNumberList.deserialize(val);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
        }
        else if (name == QLatin1String("DateTime")) {// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:245
            d_ptr->mDateTime = KDDateTime::fromDateString(val.value().toString());// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
        }
        else if (name == QLatin1String("String")) {// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:245
            d_ptr->mString = val.value().value<QString>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
        }
    }
}

TNS__ContainerType::TNS__ContainerType()
    : d_ptr(new PrivateDPtr)
{
}

TNS__ContainerType::~TNS__ContainerType()
{
}

TNS__ContainerType::TNS__ContainerType( const TNS__ContainerType& other )
    : d_ptr( other.d_ptr )
{
}

TNS__ContainerType&  TNS__ContainerType::operator=( const TNS__ContainerType& other )
{
    if ( this == &other )
        return *this;

    d_ptr = other.d_ptr;

    return *this;
}


void IntegrationTestServerBase::processRequest( const KDSoapMessage &request, KDSoapMessage &response, const QByteArray& soapAction )
{
    const QByteArray method = request.name().toLatin1();
    if (method == "NumberTransfer"|| soapAction == "http://www.abb.com/de/crc/i3/ewocc/test/NewOperation") {
        int numberTransferRequest;// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:112
        numberTransferRequest = request.value().value<int>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
        int ret = numberTransfer(numberTransferRequest);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:144
        if (!hasFault()) {
            response = (KDSoapValue(QString::fromLatin1("NumberTransferResponse"), QVariant::fromValue(ret), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("int")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
        }
    }
    else if (method == "StringTransfer") {
        QString stringTransferRequest;// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:112
        //CHANGED by CM
        //orig:
        //stringTransferRequest = request.value().value<QString>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
        //CM:
        stringTransferRequest = request.childValues().at(0).value().value<QString>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
        QString ret = stringTransfer(stringTransferRequest);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:144
        if (!hasFault()) {
            response = (KDSoapValue(QString::fromLatin1("StringTransferResponse"), QVariant::fromValue(ret), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("string")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
        }
    }
    else if (method == "ListOfNumbers") {
        TNS__NumberList listOfNumbersRequest;// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:112
        listOfNumbersRequest.deserialize(request);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
        TNS__NumberList ret = listOfNumbers(listOfNumbersRequest);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:144
        if (!hasFault()) {
            response = (ret.serialize(QString::fromLatin1("NumberList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
        }
    }
    else if (method == "ListOfStrings") {
        TNS__StringList listOfStringsRequest;// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:112
        listOfStringsRequest.deserialize(request);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
        TNS__StringList ret = listOfStrings(listOfStringsRequest);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:144
        if (!hasFault()) {
            response = (ret.serialize(QString::fromLatin1("StringList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
        }
    }
    else if (method == "ContainerTransfer") {
        TNS__ContainerType containerTransferRequest;// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:112
        containerTransferRequest.deserialize(request);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
        TNS__ContainerType ret = containerTransfer(containerTransferRequest);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:144
        if (!hasFault()) {
            response = (ret.serialize(QString::fromLatin1("DataContainer")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
        }
    }
    else {
        KDSoapServerObjectInterface::processRequest(request, response, soapAction);// ..\..\kdwsdl2cpp\src\converter_serverstub.cpp:65
    }
}


class IntegrationTest::PrivateDPtr
{
public:
    PrivateDPtr();

public:
    KDSoapClientInterface *m_clientInterface;
    KDSoapMessage m_lastReply;
    QString m_endPoint;
};

IntegrationTest::PrivateDPtr::PrivateDPtr()
    : m_clientInterface(NULL)
{
}


IntegrationTest::IntegrationTest( QObject* parent )
    : QObject(parent), d_ptr(new PrivateDPtr)
{
}

IntegrationTest::~IntegrationTest()
{
    delete d_ptr->m_clientInterface;

    delete d_ptr;
    d_ptr = 0;
}

void IntegrationTest::ignoreSslErrors()
{
    clientInterface()->ignoreSslErrors();
}

void IntegrationTest::setEndPoint( const QString& endPoint )
{
    d_ptr->m_endPoint = endPoint;
}

void IntegrationTest::setSoapVersion( KDSoapClientInterface::SoapVersion soapVersion )
{
    clientInterface()->setSoapVersion(soapVersion);
}

QString IntegrationTest::lastError() const
{
    if (d_ptr->m_lastReply.isFault())
        return d_ptr->m_lastReply.faultAsString();
    return QString();
}

KDSoapClientInterface *IntegrationTest::clientInterface()
{
    if (!d_ptr->m_clientInterface) {
        const QString endPoint = !d_ptr->m_endPoint.isEmpty() ? d_ptr->m_endPoint : QString::fromLatin1("http://localhost:6949");
        const QString messageNamespace = QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test");
        d_ptr->m_clientInterface = new KDSoapClientInterface(endPoint, messageNamespace);
        d_ptr->m_clientInterface->setSoapVersion( KDSoapClientInterface::SOAP1_1 );
    }
    return d_ptr->m_clientInterface;
}

int IntegrationTest::numberTransfer( int numberTransferRequest )
{
    const QString action = QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test/NewOperation");
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(KDSoapValue(QString::fromLatin1("NumberTransferRequest"), QVariant::fromValue(numberTransferRequest), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("int")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    d_ptr->m_lastReply = clientInterface()->call(QLatin1String("NumberTransfer"), message, action);
    if (d_ptr->m_lastReply.isFault())
        return int();
    if (d_ptr->m_lastReply.childValues().isEmpty()) {
        d_ptr->m_lastReply.setFault(true);
        d_ptr->m_lastReply.addArgument(QString::fromLatin1("faultcode"), QString::fromLatin1("Server.EmptyResponse"));
        return int();
    }
    int ret;
    const KDSoapValue val = d_ptr->m_lastReply.childValues().first();// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:412
    ret = val.value().value<int>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
    return ret;
}

void IntegrationTest::asyncNumberTransfer( int numberTransferRequest )
{
    const QString action = QString::fromLatin1("http://www.abb.com/de/crc/i3/ewocc/test/NewOperation");
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(KDSoapValue(QString::fromLatin1("NumberTransferRequest"), QVariant::fromValue(numberTransferRequest), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("int")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    KDSoapPendingCall pendingCall = clientInterface()->asyncCall(QLatin1String("NumberTransfer"), message, action);
    KDSoapPendingCallWatcher *watcher = new KDSoapPendingCallWatcher(pendingCall, this);
    connect(watcher, SIGNAL(finished(KDSoapPendingCallWatcher*)),
            this, SLOT(_kd_slotNumberTransferFinished(KDSoapPendingCallWatcher*)));
}

void IntegrationTest::_kd_slotNumberTransferFinished( KDSoapPendingCallWatcher* watcher )
{
    const KDSoapMessage reply = watcher->returnMessage();
    if (reply.isFault()) {
        emit numberTransferError(reply);
    } else {
        emit numberTransferDone( reply.childValues().child(QLatin1String("NumberTransferResponse")).value().value<int>() );
    }
    watcher->deleteLater();
}

QString IntegrationTest::stringTransfer( const QString& stringTransferRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(KDSoapValue(QString::fromLatin1("StringTransferRequest"), QVariant::fromValue(stringTransferRequest), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("string")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    d_ptr->m_lastReply = clientInterface()->call(QLatin1String("StringTransfer"), message);
    if (d_ptr->m_lastReply.isFault())
        return QString();
    if (d_ptr->m_lastReply.childValues().isEmpty()) {
        d_ptr->m_lastReply.setFault(true);
        d_ptr->m_lastReply.addArgument(QString::fromLatin1("faultcode"), QString::fromLatin1("Server.EmptyResponse"));
        return QString();
    }
    QString ret;
    const KDSoapValue val = d_ptr->m_lastReply.childValues().first();// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:412
    ret = val.value().value<QString>();// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:258
    return ret;
}

void IntegrationTest::asyncStringTransfer( const QString& stringTransferRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(KDSoapValue(QString::fromLatin1("StringTransferRequest"), QVariant::fromValue(stringTransferRequest), KDSoapNamespaceManager::xmlSchema2001(), QString::fromLatin1("string")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:228
    KDSoapPendingCall pendingCall = clientInterface()->asyncCall(QLatin1String("StringTransfer"), message);
    KDSoapPendingCallWatcher *watcher = new KDSoapPendingCallWatcher(pendingCall, this);
    connect(watcher, SIGNAL(finished(KDSoapPendingCallWatcher*)),
            this, SLOT(_kd_slotStringTransferFinished(KDSoapPendingCallWatcher*)));
}

void IntegrationTest::_kd_slotStringTransferFinished( KDSoapPendingCallWatcher* watcher )
{
    const KDSoapMessage reply = watcher->returnMessage();
    if (reply.isFault()) {
        emit stringTransferError(reply);
    } else {
        emit stringTransferDone( reply.childValues().child(QLatin1String("StringTransferResponse")).value().value<QString>() );
    }
    watcher->deleteLater();
}

TNS__NumberList IntegrationTest::listOfNumbers( const TNS__NumberList& listOfNumbersRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(listOfNumbersRequest.serialize(QString::fromLatin1("NumberList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    d_ptr->m_lastReply = clientInterface()->call(QLatin1String("ListOfNumbers"), message);
    if (d_ptr->m_lastReply.isFault())
        return TNS__NumberList();
    if (d_ptr->m_lastReply.childValues().isEmpty()) {
        d_ptr->m_lastReply.setFault(true);
        d_ptr->m_lastReply.addArgument(QString::fromLatin1("faultcode"), QString::fromLatin1("Server.EmptyResponse"));
        return TNS__NumberList();
    }
    TNS__NumberList ret;
    const KDSoapValue val = d_ptr->m_lastReply.childValues().first();// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:412
    ret.deserialize(val);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
    return ret;
}

void IntegrationTest::asyncListOfNumbers( const TNS__NumberList& listOfNumbersRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(listOfNumbersRequest.serialize(QString::fromLatin1("NumberList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    KDSoapPendingCall pendingCall = clientInterface()->asyncCall(QLatin1String("ListOfNumbers"), message);
    KDSoapPendingCallWatcher *watcher = new KDSoapPendingCallWatcher(pendingCall, this);
    connect(watcher, SIGNAL(finished(KDSoapPendingCallWatcher*)),
            this, SLOT(_kd_slotListOfNumbersFinished(KDSoapPendingCallWatcher*)));
}

void IntegrationTest::_kd_slotListOfNumbersFinished( KDSoapPendingCallWatcher* watcher )
{
    const KDSoapMessage reply = watcher->returnMessage();
    if (reply.isFault()) {
        emit listOfNumbersError(reply);
    } else {
        TNS__NumberList ret;
        ret.deserialize(reply.childValues().child(QLatin1String("ListOfNumbersResponse")));// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:547
        emit listOfNumbersDone( ret );
    }
    watcher->deleteLater();
}

TNS__StringList IntegrationTest::listOfStrings( const TNS__StringList& listOfStringsRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(listOfStringsRequest.serialize(QString::fromLatin1("StringList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    d_ptr->m_lastReply = clientInterface()->call(QLatin1String("ListOfStrings"), message);
    if (d_ptr->m_lastReply.isFault())
        return TNS__StringList();
    if (d_ptr->m_lastReply.childValues().isEmpty()) {
        d_ptr->m_lastReply.setFault(true);
        d_ptr->m_lastReply.addArgument(QString::fromLatin1("faultcode"), QString::fromLatin1("Server.EmptyResponse"));
        return TNS__StringList();
    }
    TNS__StringList ret;
    const KDSoapValue val = d_ptr->m_lastReply.childValues().first();// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:412
    ret.deserialize(val);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
    return ret;
}

void IntegrationTest::asyncListOfStrings( const TNS__StringList& listOfStringsRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(listOfStringsRequest.serialize(QString::fromLatin1("StringList")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    KDSoapPendingCall pendingCall = clientInterface()->asyncCall(QLatin1String("ListOfStrings"), message);
    KDSoapPendingCallWatcher *watcher = new KDSoapPendingCallWatcher(pendingCall, this);
    connect(watcher, SIGNAL(finished(KDSoapPendingCallWatcher*)),
            this, SLOT(_kd_slotListOfStringsFinished(KDSoapPendingCallWatcher*)));
}

void IntegrationTest::_kd_slotListOfStringsFinished( KDSoapPendingCallWatcher* watcher )
{
    const KDSoapMessage reply = watcher->returnMessage();
    if (reply.isFault()) {
        emit listOfStringsError(reply);
    } else {
        TNS__StringList ret;
        ret.deserialize(reply.childValues().child(QLatin1String("ListOfStringsResponse")));// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:547
        emit listOfStringsDone( ret );
    }
    watcher->deleteLater();
}

TNS__ContainerType IntegrationTest::containerTransfer( const TNS__ContainerType& containerTransferRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(containerTransferRequest.serialize(QString::fromLatin1("DataContainer")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    d_ptr->m_lastReply = clientInterface()->call(QLatin1String("ContainerTransfer"), message);
    if (d_ptr->m_lastReply.isFault())
        return TNS__ContainerType();
    if (d_ptr->m_lastReply.childValues().isEmpty()) {
        d_ptr->m_lastReply.setFault(true);
        d_ptr->m_lastReply.addArgument(QString::fromLatin1("faultcode"), QString::fromLatin1("Server.EmptyResponse"));
        return TNS__ContainerType();
    }
    TNS__ContainerType ret;
    const KDSoapValue val = d_ptr->m_lastReply.childValues().first();// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:412
    ret.deserialize(val);// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:260
    return ret;
}

void IntegrationTest::asyncContainerTransfer( const TNS__ContainerType& containerTransferRequest )
{
    KDSoapMessage message;
    message.setUse(KDSoapMessage::LiteralUse);
    message.childValues().append(containerTransferRequest.serialize(QString::fromLatin1("DataContainer")));// ..\..\kdwsdl2cpp\src\converter_complextype.cpp:230
    KDSoapPendingCall pendingCall = clientInterface()->asyncCall(QLatin1String("ContainerTransfer"), message);
    KDSoapPendingCallWatcher *watcher = new KDSoapPendingCallWatcher(pendingCall, this);
    connect(watcher, SIGNAL(finished(KDSoapPendingCallWatcher*)),
            this, SLOT(_kd_slotContainerTransferFinished(KDSoapPendingCallWatcher*)));
}

void IntegrationTest::_kd_slotContainerTransferFinished( KDSoapPendingCallWatcher* watcher )
{
    const KDSoapMessage reply = watcher->returnMessage();
    if (reply.isFault()) {
        emit containerTransferError(reply);
    } else {
        TNS__ContainerType ret;
        ret.deserialize(reply.childValues().child(QLatin1String("ContainerTransferResponse")));// ..\..\kdwsdl2cpp\src\converter_clientstub.cpp:547
        emit containerTransferDone( ret );
    }
    watcher->deleteLater();
}

