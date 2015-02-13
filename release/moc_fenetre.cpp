/****************************************************************************
** Meta object code from reading C++ file 'fenetre.h'
**
** Created: Tue 7. Feb 19:20:15 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dictionnaire/fenetre.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fenetre[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x05,
      29,   27,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,    8,    8,    8, 0x0a,
      54,    8,    8,    8, 0x0a,
      67,    8,    8,    8, 0x0a,
      80,    8,    8,    8, 0x0a,
      93,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_fenetre[] = {
    "fenetre\0\0t\0initCharge(int)\0c\0charge(int)\0"
    "afficheNom()\0afficheVer()\0afficheAdj()\0"
    "afficheAdv()\0affichePhrase()\0"
};

const QMetaObject fenetre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fenetre,
      qt_meta_data_fenetre, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fenetre::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fenetre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fenetre::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fenetre))
        return static_cast<void*>(const_cast< fenetre*>(this));
    return QWidget::qt_metacast(_clname);
}

int fenetre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initCharge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: charge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: afficheNom(); break;
        case 3: afficheVer(); break;
        case 4: afficheAdj(); break;
        case 5: afficheAdv(); break;
        case 6: affichePhrase(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void fenetre::initCharge(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fenetre::charge(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
