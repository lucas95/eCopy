/****************************************************************************
** Meta object code from reading C++ file 'netpass.h'
**
** Created: Fri Oct 21 16:17:37 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eCopy/netpass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netpass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetPass[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      61,   54,    8,    8, 0x0a,
     104,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetPass[] = {
    "NetPass\0\0,\0event(int,QString)\0connecte()\0"
    "deconnecte()\0erreur\0"
    "erreurSocket(QAbstractSocket::SocketError)\0"
    "messageRecu()\0"
};

const QMetaObject NetPass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetPass,
      qt_meta_data_NetPass, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetPass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetPass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetPass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetPass))
        return static_cast<void*>(const_cast< NetPass*>(this));
    return QObject::qt_metacast(_clname);
}

int NetPass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: connecte(); break;
        case 2: deconnecte(); break;
        case 3: erreurSocket((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: messageRecu(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void NetPass::event(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
