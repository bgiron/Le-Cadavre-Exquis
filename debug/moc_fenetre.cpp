/****************************************************************************
** Meta object code from reading C++ file 'fenetre.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CadavreExquis/fenetre.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fenetre_t {
    QByteArrayData data[11];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fenetre_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fenetre_t qt_meta_stringdata_fenetre = {
    {
QT_MOC_LITERAL(0, 0, 7), // "fenetre"
QT_MOC_LITERAL(1, 8, 10), // "initCharge"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 1), // "t"
QT_MOC_LITERAL(4, 22, 6), // "charge"
QT_MOC_LITERAL(5, 29, 1), // "c"
QT_MOC_LITERAL(6, 31, 10), // "afficheNom"
QT_MOC_LITERAL(7, 42, 10), // "afficheVer"
QT_MOC_LITERAL(8, 53, 10), // "afficheAdj"
QT_MOC_LITERAL(9, 64, 10), // "afficheAdv"
QT_MOC_LITERAL(10, 75, 13) // "affichePhrase"

    },
    "fenetre\0initCharge\0\0t\0charge\0c\0"
    "afficheNom\0afficheVer\0afficheAdj\0"
    "afficheAdv\0affichePhrase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fenetre[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fenetre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fenetre *_t = static_cast<fenetre *>(_o);
        switch (_id) {
        case 0: _t->initCharge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->charge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->afficheNom(); break;
        case 3: _t->afficheVer(); break;
        case 4: _t->afficheAdj(); break;
        case 5: _t->afficheAdv(); break;
        case 6: _t->affichePhrase(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (fenetre::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&fenetre::initCharge)) {
                *result = 0;
            }
        }
        {
            typedef void (fenetre::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&fenetre::charge)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject fenetre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fenetre.data,
      qt_meta_data_fenetre,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fenetre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fenetre::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fenetre.stringdata))
        return static_cast<void*>(const_cast< fenetre*>(this));
    return QWidget::qt_metacast(_clname);
}

int fenetre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void fenetre::initCharge(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fenetre::charge(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
